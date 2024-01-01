
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2024 Matthias Koefferlein

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




#include "layBitmap.h"
#include "tlUnitTest.h"

static std::string 
to_string (const lay::Bitmap &bm)
{
  std::string r;

  for (unsigned int j = bm.height (); j > 0; --j) {
    std::string s;
    for (unsigned int k = 0; k < bm.width (); ++k) {
      s += (bm.scanline (j - 1)[k / 32] & (1 << (k % 32))) != 0 ? "#" : "-";
    }
    r += s;
    r += "\n";
  }

  return r;
}

TEST(1) 
{
  lay::Bitmap b1 (8, 8, 1.0);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n");

  b1.fill (4, 3, 6);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "---###--\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n");

  lay::Bitmap b2;
  b2 = b1;
  EXPECT_EQ (to_string (b1), to_string (b2));

  b1 = lay::Bitmap ();
  EXPECT_EQ (to_string (b1), "");

  b1 = b2;
  EXPECT_EQ (to_string (b1), to_string (b2));
}

TEST(2) 
{
  lay::Bitmap b1 (8, 8, 1.0);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n");

  lay::Bitmap b2 (3, 2, 1.0);
  b2.fill (0, 0, 3);
  b2.fill (1, 1, 3);
  EXPECT_EQ (to_string (b2), "-##\n###\n");

  b1.merge (&b2, 0, 0);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "-##-----\n"
                             "###-----\n");

  b1.merge (&b2, 1, 1);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--##----\n"
                             "-###----\n"
                             "###-----\n");

  b1.clear ();
  b1.merge (&b2, -1, -1);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "##------\n");

  b1.clear ();
  b1.merge (&b2, 6, 2);
  EXPECT_EQ (to_string (b1), "--------\n"
                             "--------\n"
                             "--------\n"
                             "--------\n"
                             "-------#\n"
                             "------##\n"
                             "--------\n"
                             "--------\n");

  b1 = lay::Bitmap (40, 8, 1.0);
  EXPECT_EQ (to_string (b1), "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n");

  b2 = lay::Bitmap (40, 8, 1.0);
  b2.fill (1, 4, 36);
  b2.fill (2, 5, 15);
  b2.fill (2, 34, 35);
  EXPECT_EQ (to_string (b2), "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "-----##########-------------------#-----\n"
                             "----################################----\n"
                             "----------------------------------------\n");

  b1.merge (&b2, -1, -1);
  EXPECT_EQ (to_string (b1), "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----##########-------------------#------\n"
                             "---################################-----\n");

  b1.clear ();
  b1.merge (&b2, -32, -1);
  EXPECT_EQ (to_string (b1), "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "--#-------------------------------------\n"
                             "####------------------------------------\n");

  b1.clear ();
  b1.merge (&b2, -33, -1);
  EXPECT_EQ (to_string (b1), "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "-#--------------------------------------\n"
                             "###-------------------------------------\n");

  b1.clear ();
  b1.merge (&b2, 1, -1);
  EXPECT_EQ (to_string (b1), "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "----------------------------------------\n"
                             "------##########-------------------#----\n"
                             "-----################################---\n");

}

