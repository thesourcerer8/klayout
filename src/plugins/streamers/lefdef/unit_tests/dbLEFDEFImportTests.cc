
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/


#include "dbLayoutDiff.h"
#include "dbWriter.h"
#include "dbDEFImporter.h"
#include "dbLEFImporter.h"

#include "tlUnitTest.h"
#include "dbTestSupport.h"

#include <cstdlib>

static db::LEFDEFReaderOptions default_options ()
{
  db::LEFDEFReaderOptions tc;
  tc.set_via_geometry_datatype (0);
  tc.set_via_geometry_suffix ("");
  tc.set_pins_datatype (2);
  tc.set_pins_suffix (".PIN");
  tc.set_obstructions_datatype (3);
  tc.set_obstructions_suffix (".OBS");
  tc.set_routing_datatype (0);
  tc.set_routing_suffix ("");
  tc.set_labels_datatype (1);
  tc.set_labels_suffix (".LABEL");
  tc.set_blockages_datatype (4);
  tc.set_blockages_suffix (".BLK");

  return tc;
}

static db::LayerMap run_test (tl::TestBase *_this, const char *lef_dir, const char *filename, const char *au, const db::LEFDEFReaderOptions &options, bool priv = true)
{
  std::string fn_path (priv ? tl::testsrc_private () : tl::testsrc ());
  fn_path += "/testdata/lefdef/";
  fn_path += lef_dir;
  fn_path += "/";

  db::Manager m (false);
  db::Layout layout (&m), layout2 (&m), layout_au (&m);

  tl::Extractor ex (filename);

  db::LEFDEFReaderState ld (&options, layout, fn_path);

  db::DEFImporter imp;

  while (! ex.at_end ()) {

    if (ex.test ("map:")) {

      std::string fn = fn_path, f;
      ex.read_word_or_quoted (f);
      fn += f;

      ld.read_map_file (fn, layout);

    } else if (ex.test ("def:")) {

      std::string fn = fn_path, f;
      ex.read_word_or_quoted (f);
      fn += f;

      tl::InputStream stream (fn);
      imp.read (stream, layout, ld);

    } else if (ex.test ("lef:")) {

      std::string fn = fn_path, f;
      ex.read_word_or_quoted (f);
      fn += f;

      tl::InputStream stream (fn);
      imp.read_lef (stream, layout, ld);

    } else if (ex.test ("gds:")) {

      std::string fn = fn_path, f;
      ex.read_word_or_quoted (f);
      fn += f;

      tl::InputStream stream (fn);
      db::Reader reader (stream);
      reader.read (layout, db::LoadLayoutOptions ());

    } else if (ex.test("read:")) {

      std::string fn = fn_path, f;
      ex.read_word_or_quoted (f);
      fn += f;

      tl::InputStream stream (fn);
      db::Reader reader (stream);
      db::LoadLayoutOptions lo;
      lo.set_options (options);
      reader.read (layout, lo);

    } else {

      break;

    }

    if (! ex.test("+")) {
      break;
    }

  }

  ld.finish (layout);

  //  normalize the layout by writing to OASIS and reading from ..

  //  generate a "unique" name ...
  unsigned int hash = 0;
  if (au) {
    for (const char *cp = au; *cp; ++cp) {
      hash = (hash << 4) ^ (hash >> 4) ^ ((unsigned int) *cp);
    }
  }

  std::string tmp_file = _this->tmp_file (tl::sprintf ("tmp_%x.oas", hash));

  {
    tl::OutputStream stream (tmp_file);
    db::SaveLayoutOptions options;
    options.set_format ("OASIS");
    options.set_option_by_name ("oasis_permissive", tl::Variant (true));
    db::Writer writer (options);
    writer.write (layout, stream);
  }

  {
    tl::InputStream stream (tmp_file);
    db::Reader reader (stream);
    reader.read (layout2);
  }

  if (au) {

    std::string fn (priv ? tl::testsrc_private () : tl::testsrc ());
    fn += "/testdata/lefdef/";
    fn += lef_dir;
    fn += "/";
    fn += au;

    try {
      tl::InputStream stream (fn);
      db::Reader reader (stream);
      reader.read (layout_au);
    } catch (...) {
      _this->raise (tl::sprintf ("Compare failed - see %s vs %s (not existing or not readable)\n", tmp_file, fn));
      throw;
    }

    bool equal = db::compare_layouts (layout2, layout_au, db::layout_diff::f_verbose | db::layout_diff::f_flatten_array_insts, 0);
    if (! equal) {
      _this->raise (tl::sprintf ("Compare failed - see %s vs %s\n", tmp_file, fn));
    }

  } else {

    bool equal = db::compare_layouts (layout2, layout_au, db::layout_diff::f_verbose | db::layout_diff::f_flatten_array_insts, 0);
    if (! equal) {
      _this->raise (tl::sprintf ("Compare failed - see %s vs empty file\n", tmp_file));
    }

  }

  return ld.layer_map ();
}

TEST(1)
{
  run_test (_this, "lef1", "lef:in.lef", 0, default_options ());
}

TEST(2)
{
  run_test (_this, "lef2", "lef:in.lef", "au.oas.gz", default_options ());
}

TEST(3)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (2/0)");
  run_test (_this, "lef3", "lef:in.lef", "au.oas.gz", options);
}

TEST(4)
{
  run_test (_this, "lef4", "lef:in.lef", 0, default_options ());
}

TEST(5)
{
  run_test (_this, "lef5", "lef:in.lef", 0, default_options ());
}

TEST(6)
{
  run_test (_this, "lef6", "lef:in.lef", 0, default_options ());
}

TEST(7)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (8/0)");
  run_test (_this, "lef7", "lef:in_tech.lef+lef:in.lef", "au.oas.gz", options);
}

TEST(10)
{
  run_test (_this, "def1", "lef:in.lef+def:in.def", "au.oas.gz", default_options ());
}

TEST(11)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (10/0)");
  run_test (_this, "def2", "lef:0.lef+lef:1.lef+def:in.def.gz", "au.oas.gz", options);
}

TEST(12)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (13/0)");
  run_test (_this, "def3", "lef:in.lef+def:in.def", "au.oas.gz", options);
}

TEST(13)
{
  run_test (_this, "def4", "lef:in.lef+def:in.def", "au.oas.gz", default_options ());
}

TEST(14)
{
  run_test (_this, "def5", "lef:in.lef+def:in.def", "au.oas.gz", default_options ());
}

TEST(15)
{
  run_test (_this, "def6", "lef:cells.lef+lef:tech.lef+def:in.def.gz", "au.oas.gz", default_options ());
}

TEST(16)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_placement_blockage_layer ("PLACEMENT_BLK (11/0)");
  run_test (_this, "def7", "lef:cells.lef+lef:tech.lef+def:in.def.gz", "au.oas.gz", options);

  options.set_placement_blockage_layer ("PLACEMENT_BLK (60/0)");
  run_test (_this, "def7", "map:in.map+lef:cells.lef+lef:tech.lef+def:in.def.gz", "au_with_map_file.oas.gz", options);
}

TEST(17)
{
  run_test (_this, "def8", "lef:tech.lef+def:in.def", "au.oas.gz", default_options ());
}

TEST(18)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_separate_groups (true);
  run_test (_this, "def9", "lef:tech.lef+lef:cells_modified.lef+def:in.def", "au.oas.gz", options);

  run_test (_this, "def9", "lef:tech.lef+lef:cells_modified.lef+def:in.def", "au_nogroups.oas.gz", default_options ());
}

TEST(19)
{
  db::LEFDEFReaderOptions opt = default_options ();
  opt.set_cell_outline_layer ("OUTLINE (2/0)");
  run_test (_this, "def10", "def:in.def", "au.oas.gz", opt);
}

TEST(20)
{
  db::LEFDEFReaderOptions opt = default_options ();
  opt.set_cell_outline_layer ("OUTLINE (12/0)");
  run_test (_this, "def11", "lef:test.lef+def:test.def", "au.oas.gz", opt);
}

TEST(21)
{
  db::LEFDEFReaderOptions opt = default_options ();
  opt.set_cell_outline_layer ("OUTLINE (20/0)");
  run_test (_this, "def12", "lef:test.lef+def:test.def", "au.oas.gz", opt);
}

TEST(22)
{
  db::LEFDEFReaderOptions opt = default_options ();
  run_test (_this, "def13", "map:test.map+lef:test.lef_5.8+def:top.def.gz", "au.oas.gz", opt);
}

TEST(100)
{
  run_test (_this, "issue-172", "lef:in.lef+def:in.def", "au.oas.gz", default_options (), false);
}

TEST(101)
{
  db::LEFDEFReaderOptions opt = default_options ();
  opt.set_produce_pin_names (true);
  opt.set_pin_property_name (2);
  opt.set_cell_outline_layer ("OUTLINE (13/0)");
  run_test (_this, "issue-489", "lef:in.lef+def:in.def", "au.oas", opt, false);
}

TEST(102)
{
  db::LEFDEFReaderOptions opt = default_options ();
  opt.set_produce_pin_names (true);
  opt.set_pin_property_name (3);
  opt.set_cell_outline_layer ("OUTLINE (8/0)");
  run_test (_this, "issue-489b", "lef:in_tech.lef+lef:in.lef", "au.oas.gz", opt, false);
}

TEST(103)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (4/0)");
  run_test (_this, "issue-517", "def:in.def", "au.oas.gz", options, false);
}

TEST(104_doxy_vias)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (4/0)");
  run_test (_this, "doxy_vias", "def:test.def", "au.oas.gz", options, false);
}

TEST(105_specialnets_geo)
{
  run_test (_this, "specialnets_geo", "lef:test.lef+def:test.def", "au.oas.gz", default_options (), false);

  db::LEFDEFReaderOptions options = default_options ();
  options.set_produce_special_routing (false);
  run_test (_this, "specialnets_geo", "lef:test.lef+def:test.def", "au_no_spnet.oas.gz", options, false);

  options.set_produce_special_routing (true);
  options.set_special_routing_datatype (10);
  options.set_special_routing_suffix (".SPNET");

  options.set_via_geometry_datatype (11);
  options.set_via_geometry_suffix (".VIA");

  run_test (_this, "specialnets_geo", "lef:test.lef+def:test.def", "au_spnet_mapped.oas.gz", options, false);
}

TEST(106_wrongdirection)
{
  run_test (_this, "wrongdirection", "lef:test.lef+def:test.def", "au.oas.gz", default_options (), false);
}

TEST(107_specialwidths)
{
  run_test (_this, "specialwidths", "lef:test.lef+def:test.def", "au.oas.gz", default_options (), false);
}

TEST(108_scanchain)
{
  run_test (_this, "scanchain", "def:test.def", "au.oas.gz", default_options (), false);
}

TEST(109_foreigncell)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_cell_outline_layer ("OUTLINE (43/0)");

  run_test (_this, "foreigncell", "gds:foreign.gds+lef:in_tech.lef+lef:in.lef+def:in.def", "au.oas.gz", options, false);

  run_test (_this, "foreigncell", "gds:foreign.gds+lef:in_tech.lef+lef:in2.lef+def:in.def", "au_default.oas.gz", options, false);

  options.set_macro_resolution_mode (1);

  run_test (_this, "foreigncell", "gds:foreign.gds+lef:in_tech.lef+lef:in2.lef+def:in.def", "au_ignore_foreign.oas.gz", options, false);

  options.set_macro_resolution_mode (2);

  run_test (_this, "foreigncell", "gds:foreign.gds+lef:in_tech.lef+lef:in.lef+def:in.def", "au_always_foreign.oas.gz", options, false);
}

TEST(110_lefpins)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_produce_lef_pins (false);
  options.set_cell_outline_layer ("OUTLINE (8/0)");
  run_test (_this, "lefpins", "lef:in_tech.lef+lef:in.lef+def:in.def", "au_no_lefpins.oas.gz", options, false);

  options.set_produce_lef_pins (true);
  options.set_lef_pins_datatype (10);
  options.set_lef_pins_suffix (".LEFPIN");

  run_test (_this, "lefpins", "lef:in_tech.lef+lef:in.lef+def:in.def", "au_lefpins_mapped.oas.gz", options, false);
}

TEST(111_mapfile)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_map_file ("test.map");

  run_test (_this, "mapfile", "read:in.def", "au.oas.gz", options, false);
}

TEST(112_via_properties)
{
  db::LEFDEFReaderOptions options = default_options ();
  db::LayerMap lm = db::LayerMap::from_string_file_format ("metal1: 1\nvia1: 2\nmetal2: 3");
  options.set_layer_map (lm);

  db::LayerMap lm_read = run_test (_this, "via_properties", "lef:in.lef+def:in.def", "au.oas.gz", options, false);
  EXPECT_EQ (lm_read.to_string (),
    "layer_map('OUTLINE : OUTLINE (4/0)';'metal1.VIA : metal1 (1/0)';'metal2.VIA : metal2 (3/0)';'via1.VIA : via1 (2/0)')"
  )
}

TEST(113_masks_1)
{
  db::LEFDEFReaderOptions options = default_options ();
  options.set_routing_suffix ("");
  options.set_routing_datatype_per_mask (1, 100);
  options.set_routing_datatype_per_mask (2, 200);
  options.set_special_routing_suffix ("");
  options.set_special_routing_datatype_per_mask (1, 101);
  options.set_special_routing_datatype_per_mask (2, 201);
  options.set_via_geometry_suffix ("");
  options.set_via_geometry_datatype_per_mask (1, 102);
  options.set_via_geometry_datatype_per_mask (2, 202);
  options.set_pins_suffix ("");
  options.set_pins_datatype_per_mask (1, 110);
  options.set_pins_datatype_per_mask (2, 210);
  options.set_cell_outline_layer ("OUTLINE (4/0)");

  db::LayerMap lm = db::LayerMap::from_string_file_format ("M1: 3\nM0PO: 1\nVIA0: 2");
  options.set_layer_map (lm);

  db::LayerMap lm_read = run_test (_this, "masks-1", "lef:in_tech.lef+def:in.def", "au.oas.gz", options, false);

  EXPECT_EQ (lm_read.to_string_file_format (),
    "OUTLINE : OUTLINE (4/0)\n"
    "'M0PO.SPNET:1' : M0PO (1/101)\n"
    "'M1.SPNET:2' : M1 (3/201)\n"
    "'M1.SPNET:1' : M1 (3/101)\n"
    "'M0PO.VIA:2' : M0PO (1/202)\n"
    "'M1.VIA:1' : M1 (3/102)\n"
    "'VIA0.VIA:1' : VIA0 (2/102)\n"
    "'M0PO.SPNET:2' : M0PO (1/201)\n"
    "M0PO.PIN : M0PO (1/2)\n"
    "M0PO.LABEL : M0PO.LABEL (1/1)\n"
    "'M0PO.PIN:2' : M0PO (1/210)\n"
    "'M1.PIN:1' : M1 (3/110)\n"
    "M1.LABEL : M1.LABEL (3/1)\n"
    "'M1.NET:1' : M1 (3/100)\n"
    "'M1.NET:2' : M1 (3/200)\n"
    "'M0PO.VIA:1' : M0PO (1/102)\n"
    "'M1.VIA:2' : M1 (3/202)\n"
    "'VIA0.VIA:2' : VIA0 (2/202)\n"
    "'M0PO.NET:1' : M0PO (1/100)\n"
  )

  options = default_options ();
  lm_read = run_test (_this, "masks-1", "map:in.map+lef:in_tech.lef+def:in.def", "au_map.oas.gz", options, false);

  EXPECT_EQ (lm_read.to_string_file_format (),
    "OUTLINE : OUTLINE (4/0)\n"
    "'M0PO.NET:1' : 'M0PO.NET:1' (1/100)\n"
    "'M0PO.NET:2' : 'M0PO.NET:2' (1/200)\n"
    "'M0PO.SPNET:1' : 'M0PO.SPNET:1' (1/101)\n"
    "'M0PO.SPNET:2' : 'M0PO.SPNET:2' (1/201)\n"
    "'M0PO.VIA:1' : 'M0PO.VIA:1' (1/102)\n"
    "'M0PO.VIA:2' : 'M0PO.VIA:2' (1/202)\n"
    "M0PO.LABEL : M0PO.LABEL (1/1)\n"
    "M0PO.PIN : M0PO.PIN (1/2)\n"
    "'M0PO.PIN:1' : 'M0PO.PIN:1' (1/110)\n"
    "'M0PO.PIN:2' : 'M0PO.PIN:2' (1/210)\n"
    "'M1.NET:1' : 'M1.NET:1' (3/100)\n"
    "'M1.NET:2' : 'M1.NET:2' (3/200)\n"
    "'M1.SPNET:1' : 'M1.SPNET:1' (3/101)\n"
    "'M1.SPNET:2' : 'M1.SPNET:2' (3/201)\n"
    "'M1.VIA:1' : 'M1.VIA:1' (3/102)\n"
    "'M1.VIA:2' : 'M1.VIA:2' (3/202)\n"
    "M1.LABEL : M1.LABEL (3/1)\n"
    "M1.PIN : M1.PIN (3/2)\n"
    "'M1.PIN:1' : 'M1.PIN:1' (3/110)\n"
    "'M1.PIN:2' : 'M1.PIN:2' (3/210)\n"
    "'VIA0.NET:1' : 'VIA0.NET:1' (2/100)\n"
    "'VIA0.NET:2' : 'VIA0.NET:2' (2/200)\n"
    "'VIA0.SPNET:1' : 'VIA0.SPNET:1' (2/101)\n"
    "'VIA0.SPNET:2' : 'VIA0.SPNET:2' (2/201)\n"
    "'VIA0.VIA:1' : 'VIA0.VIA:1' (2/102)\n"
    "'VIA0.VIA:2' : 'VIA0.VIA:2' (2/202)\n"
    "VIA0.LABEL : VIA0.LABEL (2/1)\n"
    "VIA0.PIN : VIA0.PIN (2/2)\n"
    "'VIA0.PIN:1' : 'VIA0.PIN:1' (2/110)\n"
    "'VIA0.PIN:2' : 'VIA0.PIN:2' (2/210)\n"
  )
}

TEST(114_lef_skips_end_library)
{
  db::LEFDEFReaderOptions opt = default_options ();
  opt.set_produce_pin_names (true);
  opt.set_pin_property_name (2);
  opt.set_cell_outline_layer ("OUTLINE (13/0)");
  run_test (_this, "lef-skips-end-library", "lef:in.lef+def:in.def", "au.oas", opt, false);
}

TEST(200_lefdef_plugin)
{
  db::Layout ly;

  std::string fn_path (tl::testsrc ());
  fn_path += "/testdata/lefdef/masks-1/";

  db::LEFDEFReaderOptions lefdef_opt = default_options ();
  lefdef_opt.set_map_file ("in.map");
  db::LoadLayoutOptions opt;
  opt.set_options (lefdef_opt);

  {
    tl::InputStream is (fn_path + "in.def");
    db::Reader reader (is);
    reader.read (ly, opt);
  }

  db::compare_layouts (_this, ly, fn_path + "au_plugin_def.oas.gz", db::WriteOAS);
}

TEST(201_lefdef_plugin_explicit_lef)
{
  db::Layout ly;

  std::string fn_path (tl::testsrc ());
  fn_path += "/testdata/lefdef/masks-1/";

  db::LEFDEFReaderOptions lefdef_opt = default_options ();
  lefdef_opt.set_map_file ("in.map");
  std::vector<std::string> lf;
  lf.push_back ("hidden/in_tech.lef");
  lefdef_opt.set_lef_files (lf);
  lefdef_opt.set_read_lef_with_def (false);
  db::LoadLayoutOptions opt;
  opt.set_options (lefdef_opt);

  {
    tl::InputStream is (fn_path + "in.def");
    db::Reader reader (is);
    reader.read (ly, opt);
  }

  db::compare_layouts (_this, ly, fn_path + "au_plugin_alt_lef.oas.gz", db::WriteOAS);
}
