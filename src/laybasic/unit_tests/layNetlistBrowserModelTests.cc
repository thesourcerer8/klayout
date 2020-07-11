
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

#include "layNetlistBrowserModel.h"
#include "tlUnitTest.h"

TEST (1)
{
  db::LayoutToNetlist l2n;
  l2n.load (tl::testsrc () + "/testdata/lay/l2n_browser.l2n");

  lay::NetColorizer colorizer;
  std::auto_ptr<lay::NetlistBrowserModel> model (new lay::NetlistBrowserModel (0, &l2n, &colorizer));

  EXPECT_EQ (model->hasChildren (QModelIndex ()), true);
  //  two circuits
  EXPECT_EQ (model->rowCount (QModelIndex ()), 2);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, QModelIndex ()), Qt::UserRole).toString ()), "INV2");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, QModelIndex ()), Qt::DisplayRole).toString ()), "INV2");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, QModelIndex ()), Qt::DisplayRole).toString ()), "RINGO");
  EXPECT_EQ (model->parent (model->index (0, 0, QModelIndex ())).isValid (), false);
  EXPECT_EQ (model->parent (model->index (1, 0, QModelIndex ())).isValid (), false);

  QModelIndex ringoIndex = model->index (1, 0, QModelIndex ());
  QModelIndex inv2Index = model->index (0, 0, QModelIndex ());

  EXPECT_EQ (model->hasChildren (inv2Index), true);
  //  4 subnodes
  EXPECT_EQ (model->rowCount (inv2Index), 3);
  //  5 pins, 5 nets, 0 subcircuits, 4 devices
  QModelIndex sn_pins = model->index (0, 0, inv2Index);
  QModelIndex sn_nets = model->index (1, 0, inv2Index);
  QModelIndex sn_devices = model->index (2, 0, inv2Index);
  //  Pins
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_pins), Qt::UserRole).toString ()), "IN");
  EXPECT_EQ (model->parent (model->index (0, 0, sn_pins)) == model->parent (model->index (0, 3, sn_pins)), true);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_pins), Qt::DisplayRole).toString ()), "IN");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, sn_pins), Qt::DisplayRole).toString ()), "$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, sn_pins), Qt::DisplayRole).toString ()), "OUT");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 0, sn_pins), Qt::DisplayRole).toString ()), "$3");
  EXPECT_EQ (tl::to_string (model->data (model->index (4, 0, sn_pins), Qt::DisplayRole).toString ()), "$4");
  //  Nets
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::UserRole).toString ()), "NIN");
  EXPECT_EQ (model->parent (model->index (0, 0, sn_nets)) == model->parent (model->index (0, 3, sn_nets)), true);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::DisplayRole).toString ()), "NIN");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_nets), Qt::DisplayRole).toString ()), "NIN (3)");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, sn_nets), Qt::DisplayRole).toString ()), "NOUT");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, sn_nets), Qt::DisplayRole).toString ()), "NOUT (3)");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, sn_nets), Qt::DisplayRole).toString ()), "$2");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 2, sn_nets), Qt::DisplayRole).toString ()), "$2 (5)");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 0, sn_nets), Qt::DisplayRole).toString ()), "$4");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 2, sn_nets), Qt::DisplayRole).toString ()), "$4 (3)");
  EXPECT_EQ (tl::to_string (model->data (model->index (4, 0, sn_nets), Qt::DisplayRole).toString ()), "$5");
  EXPECT_EQ (tl::to_string (model->data (model->index (4, 2, sn_nets), Qt::DisplayRole).toString ()), "$5 (3)");
  //  No Subcircuits
  //  Devices
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_devices), Qt::UserRole).toString ()), "$1|PMOS");
  EXPECT_EQ (model->parent (model->index (0, 0, sn_devices)) == model->parent (model->index (0, 3, sn_devices)), true);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_devices), Qt::DisplayRole).toString ()), "PMOS [L=0.25, W=0.95, AS=0.49875, AD=0.26125, PS=2.95, PD=1.5]");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_devices), Qt::DisplayRole).toString ()), "$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, sn_devices), Qt::DisplayRole).toString ()), "PMOS [L=0.25, W=0.95, AS=0.26125, AD=0.49875, PS=1.5, PD=2.95]");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, sn_devices), Qt::DisplayRole).toString ()), "$2");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, sn_devices), Qt::DisplayRole).toString ()), "NMOS [L=0.25, W=0.95, AS=0.49875, AD=0.26125, PS=2.95, PD=1.5]");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 2, sn_devices), Qt::DisplayRole).toString ()), "$3");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 0, sn_devices), Qt::DisplayRole).toString ()), "NMOS [L=0.25, W=0.95, AS=0.26125, AD=0.49875, PS=1.5, PD=2.95]");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 2, sn_devices), Qt::DisplayRole).toString ()), "$4");

  EXPECT_EQ (model->hasChildren (ringoIndex), true);
  //  0 pins, 12 nets, 10 subcircuits, 0 devices
  EXPECT_EQ (model->rowCount (ringoIndex), 2);
  sn_nets = model->index (0, 0, ringoIndex);
  QModelIndex sn_subcircuits = model->index (1, 0, ringoIndex);
  //  Pins
  //  Nets
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::UserRole).toString ()), "FB");
  EXPECT_EQ (model->parent (model->index (0, 0, sn_nets)) == model->parent (model->index (0, 3, sn_nets)), true);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_nets), Qt::DisplayRole).toString ()), "FB (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, sn_nets), Qt::DisplayRole).toString ()), "VDD (10)");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 2, sn_nets), Qt::DisplayRole).toString ()), "VSS (10)");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 2, sn_nets), Qt::DisplayRole).toString ()), "$4 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (4, 2, sn_nets), Qt::DisplayRole).toString ()), "$5 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (5, 2, sn_nets), Qt::DisplayRole).toString ()), "$6 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (6, 2, sn_nets), Qt::DisplayRole).toString ()), "$7 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (7, 2, sn_nets), Qt::DisplayRole).toString ()), "$8 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (8, 2, sn_nets), Qt::DisplayRole).toString ()), "$9 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (9, 2, sn_nets), Qt::DisplayRole).toString ()), "$10 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (10, 2, sn_nets), Qt::DisplayRole).toString ()), "$11 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (11, 2, sn_nets), Qt::DisplayRole).toString ()), "$12 (2)");
  //  Subcircuits
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_subcircuits), Qt::UserRole).toString ()), "INV2|$1");
  EXPECT_EQ (model->parent (model->index (0, 0, sn_subcircuits)) == model->parent (model->index (0, 3, sn_subcircuits)), true);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_subcircuits), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=0'>INV2</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_subcircuits), Qt::DisplayRole).toString ()), "$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (9, 0, sn_subcircuits), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=0'>INV2</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (9, 2, sn_subcircuits), Qt::DisplayRole).toString ()), "$10");
  //  Devices

  //  OUT pin of INV2 has a single child node which is the "NOUT" net
  QModelIndex inv2PinOutIndex = model->index (2, 0, model->index (0, 0, inv2Index));
  EXPECT_EQ (model->parent (inv2PinOutIndex) == model->index (0, 0, inv2Index), true);
  EXPECT_EQ (model->hasChildren (inv2PinOutIndex), true);
  EXPECT_EQ (model->rowCount (inv2PinOutIndex), 1);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PinOutIndex), Qt::DisplayRole).toString ()), "NOUT");

  QModelIndex inv2PinOutIndexNet = model->index (0, 0, inv2PinOutIndex);
  EXPECT_EQ (model->parent (inv2PinOutIndexNet) == inv2PinOutIndex, true);
  EXPECT_EQ (model->hasChildren (inv2PinOutIndexNet), true);
  EXPECT_EQ (model->rowCount (inv2PinOutIndexNet), 3);

  //  NOUT net has 1 pin, 2 devices, 0 subcircuits
  QModelIndex inv2NOutIndex = model->index (1, 0, model->index (1, 0, inv2Index));
  EXPECT_EQ (model->parent (inv2NOutIndex) == model->index (1, 0, inv2Index), true);
  EXPECT_EQ (model->hasChildren (inv2NOutIndex), true);
  EXPECT_EQ (model->rowCount (inv2NOutIndex), 3);

  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2NOutIndex), Qt::UserRole).toString ()), "D|PMOS|$2");
  EXPECT_EQ (model->parent (model->index (0, 0, inv2NOutIndex)) == model->parent (model->index (0, 3, inv2NOutIndex)), true);
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2NOutIndex), Qt::DisplayRole).toString ()), "D / PMOS [L=0.25, W=0.95, AS=0.26125, AD=0.49875, PS=1.5, PD=2.95]");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, inv2NOutIndex), Qt::DisplayRole).toString ()), "$2");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2NOutIndex), Qt::DisplayRole).toString ()), "D / NMOS [L=0.25, W=0.95, AS=0.26125, AD=0.49875, PS=1.5, PD=2.95]");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, inv2NOutIndex), Qt::DisplayRole).toString ()), "$4");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, inv2NOutIndex), Qt::DisplayRole).toString ()), "OUT");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 2, inv2NOutIndex), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (model->parent (model->index (2, 0, inv2NOutIndex)) == model->parent (model->index (2, 3, inv2NOutIndex)), true);

  //  no children for pins on nets
  QModelIndex inv2NOutPinOutIndex = model->index (2, 0, inv2NOutIndex);
  EXPECT_EQ (model->parent (inv2NOutPinOutIndex) == inv2NOutIndex, true);
  EXPECT_EQ (model->hasChildren (inv2NOutPinOutIndex), false);
  EXPECT_EQ (model->rowCount (inv2NOutPinOutIndex), 0);

  //  a MOS3 transistor has three other terminals
  QModelIndex inv2NOutDeviceIndex = model->index (0, 0, inv2NOutIndex);
  QModelIndex b = model->index (0, 0, inv2NOutIndex);
  EXPECT_EQ (b.parent () == inv2NOutDeviceIndex.parent (), true);
  EXPECT_EQ (b.model () == inv2NOutDeviceIndex.model (), true);
  EXPECT_EQ (model->parent (inv2NOutDeviceIndex) == inv2NOutIndex, true);
  EXPECT_EQ (model->hasChildren (inv2NOutDeviceIndex), true);
  EXPECT_EQ (model->rowCount (inv2NOutDeviceIndex), 3);

  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2NOutDeviceIndex), Qt::UserRole).toString ()), "S|$5");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2NOutDeviceIndex), Qt::DisplayRole).toString ()), "S");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2NOutDeviceIndex), Qt::DisplayRole).toString ()), "G");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, inv2NOutDeviceIndex), Qt::DisplayRole).toString ()), "D (already seen)");

  QModelIndex inv2NOutDeviceGateIndex = model->index (1, 0, inv2NOutDeviceIndex);
  EXPECT_EQ (model->parent (inv2NOutDeviceGateIndex) == inv2NOutDeviceIndex, true);
  EXPECT_EQ (model->hasChildren (inv2NOutDeviceGateIndex), true); // @@@ -> children: nets
  EXPECT_EQ (model->rowCount (inv2NOutDeviceGateIndex), 1);

  //  FB net has 0 pin, 0 devices, 2 subcircuits
  QModelIndex ringoFbIndex = model->index (0, 0, sn_nets);
  EXPECT_EQ (model->parent (ringoFbIndex) == sn_nets, true);
  EXPECT_EQ (model->hasChildren (ringoFbIndex), true);
  EXPECT_EQ (model->rowCount (ringoFbIndex), 2);

  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, ringoFbIndex), Qt::UserRole).toString ()), "IN|INV2|$2");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, ringoFbIndex), Qt::DisplayRole).toString ()), "IN / <a href='int:netlist?path=0'>INV2</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, ringoFbIndex), Qt::DisplayRole).toString ()), "$2");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, ringoFbIndex), Qt::DisplayRole).toString ()), "$1 / <a href='int:netlist?path=0'>INV2</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, ringoFbIndex), Qt::DisplayRole).toString ()), "$1");

  QModelIndex ringoFbSubcircuit2Index = model->index (0, 0, ringoFbIndex);
  EXPECT_EQ (model->parent (ringoFbSubcircuit2Index) == ringoFbIndex, true);
  EXPECT_EQ (model->hasChildren (ringoFbSubcircuit2Index), true);
  EXPECT_EQ (model->rowCount (ringoFbSubcircuit2Index), 5);

  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, ringoFbSubcircuit2Index), Qt::UserRole).toString ()), "IN|FB");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "IN (already seen)");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=1,0,0'>FB</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "$1 (already seen)");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "OUT");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 2, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=1,0,3'>$4</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 0, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "$3");
  EXPECT_EQ (tl::to_string (model->data (model->index (3, 2, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=1,0,2'>VSS</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (4, 0, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "$4");
  EXPECT_EQ (tl::to_string (model->data (model->index (4, 2, ringoFbSubcircuit2Index), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=1,0,1'>VDD</a>");

  QModelIndex ringoFbSubcircuit2InPinIndex = model->index (1, 0, ringoFbSubcircuit2Index);
  EXPECT_EQ (model->parent (ringoFbSubcircuit2InPinIndex) == ringoFbSubcircuit2Index, true);
  EXPECT_EQ (model->hasChildren (ringoFbSubcircuit2InPinIndex), false);
  EXPECT_EQ (model->rowCount (ringoFbSubcircuit2InPinIndex), 0);

  //  Subcircuit 1 of RINGO has 5 pins

  QModelIndex ringoSubcircuit1Index = model->index (0, 0, sn_subcircuits);
  EXPECT_EQ (model->parent (ringoSubcircuit1Index) == sn_subcircuits, true);
  EXPECT_EQ (model->hasChildren (ringoSubcircuit1Index), true);
  EXPECT_EQ (model->rowCount (ringoSubcircuit1Index), 6);

  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, ringoSubcircuit1Index), Qt::UserRole).toString ()), "OUT");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 0, ringoSubcircuit1Index), Qt::DisplayRole).toString ()), "OUT");
  EXPECT_EQ (tl::to_string (model->data (model->index (2, 2, ringoSubcircuit1Index), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (5, 0, ringoSubcircuit1Index), Qt::DisplayRole).toString ()), "INV2");

  QModelIndex ringoSubcircuit1OutPinIndex = model->index (2, 0, ringoSubcircuit1Index);
  EXPECT_EQ (model->parent (ringoSubcircuit1OutPinIndex) == ringoSubcircuit1Index, true);
  EXPECT_EQ (model->hasChildren (ringoSubcircuit1OutPinIndex), false);
  EXPECT_EQ (model->rowCount (ringoSubcircuit1OutPinIndex), 0);

  //  Device 1 of INV2 has 3 pins

  QModelIndex inv2Device1Index = model->index (0, 0, sn_devices);
  EXPECT_EQ (model->parent (inv2Device1Index) == sn_devices, true);
  EXPECT_EQ (model->hasChildren (inv2Device1Index), true);
  EXPECT_EQ (model->rowCount (inv2Device1Index), 3);

  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2Device1Index), Qt::UserRole).toString ()), "G|NIN");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2Device1Index), Qt::DisplayRole).toString ()), "G");

  QModelIndex inv2Device1GateIndex = model->index (1, 0, inv2Device1Index);
  EXPECT_EQ (model->parent (inv2Device1GateIndex) == inv2Device1Index, true);
  EXPECT_EQ (model->hasChildren (inv2Device1GateIndex), true);
  EXPECT_EQ (model->rowCount (inv2Device1GateIndex), 1);
}

TEST (2)
{
  db::LayoutVsSchematic lvs;
  lvs.load (tl::testsrc () + "/testdata/lay/lvsdb_browser.lvsdb");

  lay::NetColorizer colorizer;
  std::auto_ptr<lay::NetlistBrowserModel> model (new lay::NetlistBrowserModel (0, &lvs, &colorizer));

  EXPECT_EQ (model->hasChildren (QModelIndex ()), true);
  //  two circuits
  EXPECT_EQ (model->rowCount (QModelIndex ()), 4);

  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, QModelIndex ()), Qt::UserRole).toString ()), "INV2PAIRX");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, QModelIndex ()), Qt::DisplayRole).toString ()), "- ⇔ INV2PAIRX");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, QModelIndex ()), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, QModelIndex ()), Qt::DisplayRole).toString ()), "INV2PAIRX");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, QModelIndex ()), Qt::DisplayRole).toString ()), "INV2");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, QModelIndex ()), Qt::DisplayRole).toString ()), "INV2");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 3, QModelIndex ()), Qt::DisplayRole).toString ()), "INV2");
  EXPECT_EQ (model->parent (model->index (0, 0, QModelIndex ())).isValid (), false);
  EXPECT_EQ (model->parent (model->index (1, 0, QModelIndex ())).isValid (), false);

  EXPECT_EQ (model->hasChildren (model->index (0, 0, QModelIndex ())), false);
  EXPECT_EQ (model->rowCount (model->index (0, 0, QModelIndex ())), 0);

  QModelIndex inv2Index = model->index (1, 0, QModelIndex ());

  //  INV2 circuit node
  EXPECT_EQ (model->hasChildren (inv2Index), true);
  EXPECT_EQ (model->rowCount (inv2Index), 3);
  EXPECT_EQ (model->parent (inv2Index).isValid (), false);

  QModelIndex sn_pins = model->index (0, 0, inv2Index);
  QModelIndex sn_nets = model->index (1, 0, inv2Index);
  QModelIndex sn_devices = model->index (2, 0, inv2Index);
  EXPECT_EQ (model->rowCount (sn_pins), 6);
  EXPECT_EQ (model->rowCount (sn_nets), 6);
  EXPECT_EQ (model->rowCount (sn_devices), 2);

  //  first of pins in INV2 circuit
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_pins), Qt::UserRole).toString ()), "$0|$0");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_pins), Qt::DisplayRole).toString ()), "$0");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_pins), Qt::DisplayRole).toString ()), "$0");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, sn_pins), Qt::DisplayRole).toString ()), "$0");

  //  INV2, pin 0 node
  QModelIndex inv2Pin0Index = model->index (0, 0, sn_pins);
  EXPECT_EQ (model->hasChildren (inv2Pin0Index), true);
  EXPECT_EQ (model->rowCount (inv2Pin0Index), 1);
  EXPECT_EQ (model->parent (inv2Pin0Index) == sn_pins, true);

  //  INV2, pin 0 has one net node
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2Pin0Index), Qt::UserRole).toString ()), "$1|1");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2Pin0Index), Qt::DisplayRole).toString ()), "$1 ⇔ 1");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, inv2Pin0Index), Qt::DisplayRole).toString ()), "$1 (2)");
  std::pair<const db::Net *, const db::Net *> nets = model->net_from_index (model->index (0, 0, inv2Pin0Index));
  EXPECT_EQ (nets.first != 0, true);
  if (nets.first != 0) {
    EXPECT_EQ (nets.first->expanded_name (), "$1");
  }
  EXPECT_EQ (nets.second != 0, true);
  if (nets.second != 0) {
    EXPECT_EQ (nets.second->expanded_name (), "1");
  }
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, inv2Pin0Index), Qt::DisplayRole).toString ()), "1 (2)");

  //  first of nets in INV2 circuit
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::UserRole).toString ()), "$1|1");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::DisplayRole).toString ()), "$1 ⇔ 1");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_nets), Qt::DisplayRole).toString ()), "$1 (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, sn_nets), Qt::DisplayRole).toString ()), "1 (2)");

  //  INV2, net 1 node
  QModelIndex inv2Net0Index = model->index (0, 0, sn_nets);
  EXPECT_EQ (model->hasChildren (inv2Net0Index), true);
  EXPECT_EQ (model->rowCount (inv2Net0Index), 2);
  EXPECT_EQ (model->parent (inv2Net0Index) == sn_nets, true);

  //  INV2, net 1 has one pin and one terminal at BULK
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2Net0Index), Qt::UserRole).toString ()), "B|B|PMOS|PMOS|$1|$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2Net0Index), Qt::DisplayRole).toString ()), "B / PMOS [L=0.25, W=3.5]");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, inv2Net0Index), Qt::DisplayRole).toString ()), "$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, inv2Net0Index), Qt::DisplayRole).toString ()), "$1");

  //  This terminal connects to a device with four other terminals ..
  QModelIndex inv2Net0TerminalIndex = model->index (0, 0, inv2Net0Index);
  EXPECT_EQ (model->hasChildren (inv2Net0TerminalIndex), true);
  EXPECT_EQ (model->rowCount (inv2Net0TerminalIndex), 4);
  EXPECT_EQ (model->parent (inv2Net0TerminalIndex) == inv2Net0Index, true);
  //  .. whose second terminal is gate
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2Net0TerminalIndex), Qt::UserRole).toString ()), "G|G|IN|2");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2Net0TerminalIndex), Qt::DisplayRole).toString ()), "G");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, inv2Net0TerminalIndex), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=1,1,2'>IN</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 3, inv2Net0TerminalIndex), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=1,1,2'>2</a>");

  //  The Pin
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2Net0Index), Qt::UserRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2Net0Index), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, inv2Net0Index), Qt::DisplayRole).toString ()), "$0");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 3, inv2Net0Index), Qt::DisplayRole).toString ()), "$0");

  //  This pin does not have children
  QModelIndex inv2Net0PinIndex = model->index (1, 0, inv2Net0Index);
  EXPECT_EQ (model->hasChildren (inv2Net0PinIndex), false);
  EXPECT_EQ (model->rowCount (inv2Net0PinIndex), 0);
  EXPECT_EQ (model->parent (inv2Net0PinIndex) == inv2Net0Index, true);

  //  second of nets in INV2 circuit
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, sn_nets), Qt::UserRole).toString ()), "BULK|6");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, sn_nets), Qt::DisplayRole).toString ()), "BULK ⇔ 6");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, sn_nets), Qt::DisplayRole).toString ()), "BULK (2)");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 3, sn_nets), Qt::DisplayRole).toString ()), "6 (2)");

  //  first of devices in INV2 circuit
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_devices), Qt::UserRole).toString ()), "$1|$1|PMOS|PMOS");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_devices), Qt::DisplayRole).toString ()), "PMOS");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_devices), Qt::DisplayRole).toString ()), "$1 / PMOS [L=0.25, W=3.5]");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, sn_devices), Qt::DisplayRole).toString ()), "$1 / PMOS [L=0.25, W=3.5]");

  QModelIndex inv2PairIndex = model->index (2, 0, QModelIndex ());
  EXPECT_EQ (model->parent (inv2PairIndex).isValid (), false);

  //  INV2PAIR circuit node
  EXPECT_EQ (model->hasChildren (inv2PairIndex), true);
  EXPECT_EQ (model->rowCount (inv2PairIndex), 3);

  sn_pins = model->index (0, 0, inv2PairIndex);
  sn_nets = model->index (1, 0, inv2PairIndex);

  //  first of pins in INV2 circuit
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_pins), Qt::UserRole).toString ()), "$4");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_pins), Qt::DisplayRole).toString ()), "- ⇔ $4");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_pins), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, sn_pins), Qt::DisplayRole).toString ()), "$4");

  //  INV2, pin 0 node
  QModelIndex inv2PairPin0Index = model->index (0, 0, sn_pins);
  EXPECT_EQ (model->hasChildren (inv2PairPin0Index), true);
  EXPECT_EQ (model->rowCount (inv2PairPin0Index), 1);
  EXPECT_EQ (model->parent (inv2PairPin0Index) == sn_pins, true);

  //  INV2, pin 0 has one net node
  //  The pin isnt't connected to any net, left side because there is no match, right side because the pin isn't connected
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PairPin0Index), Qt::UserRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PairPin0Index), Qt::DisplayRole).toString ()), "-");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, inv2PairPin0Index), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, inv2PairPin0Index), Qt::DisplayRole).toString ()), "");

  //  first of nets in INV2 circuit
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::UserRole).toString ()), "$4");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, sn_nets), Qt::DisplayRole).toString ()), "$4 ⇔ -");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, sn_nets), Qt::DisplayRole).toString ()), "$4 (3)");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, sn_nets), Qt::DisplayRole).toString ()), "");

  //  This net has only left side which has one pin and two subcircuits
  QModelIndex inv2PairNet0Index = model->index (0, 0, sn_nets);
  EXPECT_EQ (model->hasChildren (inv2PairNet0Index), true);
  EXPECT_EQ (model->rowCount (inv2PairNet0Index), 3);
  EXPECT_EQ (model->parent (inv2PairNet0Index) == sn_nets, true);

  //  The pin
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PairNet0Index), Qt::UserRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PairNet0Index), Qt::DisplayRole).toString ()), "");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, inv2PairNet0Index), Qt::DisplayRole).toString ()), "$3");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, inv2PairNet0Index), Qt::DisplayRole).toString ()), "");

  //  This pin does not have children
  QModelIndex inv2PairNet0Pin0Index = model->index (0, 0, inv2PairNet0Index);
  EXPECT_EQ (model->hasChildren (inv2PairNet0Pin0Index), false);
  EXPECT_EQ (model->rowCount (inv2PairNet0Pin0Index), 0);
  EXPECT_EQ (model->parent (inv2PairNet0Pin0Index) == inv2PairNet0Index, true);

  //  The first subcircuit
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2PairNet0Index), Qt::UserRole).toString ()), "OUT|INV2|$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 0, inv2PairNet0Index), Qt::DisplayRole).toString ()), "OUT ⇔ - / <a href='int:netlist?path=1'>INV2 ⇔ -</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 2, inv2PairNet0Index), Qt::DisplayRole).toString ()), "$1");
  EXPECT_EQ (tl::to_string (model->data (model->index (1, 3, inv2PairNet0Index), Qt::DisplayRole).toString ()), "");

  //  This subcircuit has 6 other pins
  QModelIndex inv2PairNet0SubCircuit0Index = model->index (1, 0, inv2PairNet0Index);
  EXPECT_EQ (model->hasChildren (inv2PairNet0SubCircuit0Index), true);
  EXPECT_EQ (model->rowCount (inv2PairNet0SubCircuit0Index), 6);
  EXPECT_EQ (model->parent (inv2PairNet0SubCircuit0Index) == inv2PairNet0Index, true);

  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PairNet0SubCircuit0Index), Qt::UserRole).toString ()), "$7");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 0, inv2PairNet0SubCircuit0Index), Qt::DisplayRole).toString ()), "$0 ⇔ -");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 2, inv2PairNet0SubCircuit0Index), Qt::DisplayRole).toString ()), "<a href='int:netlist?path=2,1,5'>$7</a>");
  EXPECT_EQ (tl::to_string (model->data (model->index (0, 3, inv2PairNet0SubCircuit0Index), Qt::DisplayRole).toString ()), "");
}

TEST (3)
{
  db::LayoutToNetlist l2n;
  l2n.load (tl::testsrc () + "/testdata/lay/l2n_browser.l2n");

  lay::NetColorizer colorizer;
  std::auto_ptr<lay::NetlistBrowserModel> model (new lay::NetlistBrowserModel (0, &l2n, &colorizer));

  db::Circuit *root = l2n.netlist ()->circuit_by_name ("RINGO");
  EXPECT_EQ (root != 0, true);

  lay::NetlistObjectPath path;
  EXPECT_EQ (model->index_from_netpath (path).isValid (), false);

  path.root.first = root;

  db::Net *net = root->net_by_name ("FB");
  EXPECT_EQ (net != 0, true);

  path.net.first = net;

  QModelIndex index = model->index_from_netpath (path);
  EXPECT_EQ (index.isValid (), true);

  EXPECT_EQ (tl::to_string (model->data (index, Qt::UserRole).toString ()), "FB");
}

TEST (4)
{
  db::LayoutToNetlist l2n;
  l2n.load (tl::testsrc () + "/testdata/lay/l2n_browser.l2n");

  lay::NetColorizer colorizer;
  std::auto_ptr<lay::NetlistBrowserModel> model (new lay::NetlistBrowserModel (0, &l2n, &colorizer));

  db::Circuit *root = l2n.netlist ()->circuit_by_name ("RINGO");
  EXPECT_EQ (root != 0, true);

  lay::NetlistObjectPath path;
  path.root.first = root;

  db::SubCircuit *sc1 = root->begin_subcircuits ().operator-> ();
  EXPECT_EQ (sc1 != 0, true);
  path.path.push_back (std::make_pair (sc1, (db::SubCircuit *) 0));

  db::Net *net = sc1->circuit_ref ()->net_by_name ("NOUT");
  EXPECT_EQ (net != 0, true);

  path.net.first = net;

  QModelIndex index = model->index_from_netpath (path);
  EXPECT_EQ (index.isValid (), true);

  EXPECT_EQ (tl::to_string (model->data (index, Qt::UserRole).toString ()), "NOUT");
}
