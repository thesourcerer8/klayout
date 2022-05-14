
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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

#include "gsiDecl.h"
#include "layLayoutView.h"

namespace gsi
{

static lay::LayoutView *new_view2 (bool editable, db::Manager *manager, unsigned int options)
{
  return new lay::LayoutView (manager, editable, 0 /*plugin parent*/, options);
}

extern Class<lay::LayoutView> decl_LayoutViewBase;

Class<lay::LayoutView> decl_LayoutView (decl_LayoutViewBase, "lay", "LayoutView",
  gsi::constructor ("new", &new_view2, gsi::arg ("editable", false), gsi::arg ("manager", (db::Manager *) 0, "nil"), gsi::arg ("options", (unsigned int) 0),
    "@brief Creates a standalone view\n"
    "\n"
    "This constructor is for special purposes only. To create a view in the context of a main window, "
    "use \\MainWindow#create_view and related methods.\n"
    "\n"
    "@param editable True to make the view editable\n"
    "@param manager The \\Manager object to enable undo/redo\n"
    "@param options A combination of the values in the LV_... constants\n"
    "\n"
    "This constructor has been introduced in version 0.25.\n"
    "It has been enhanced with the arguments in version 0.27.\n"
  ),
  "@brief The view object presenting one or more layout objects\n"
  "\n"
  "The visual part of the view is the tab panel in the main window. The non-visual part "
  "are the redraw thread, the layout handles, cell lists, layer view lists etc. "
  "This object controls these aspects of the view and controls the appearance of the data. "
);

static lay::LayoutView *get_view (lay::CellViewRef *cv)
{
  return cv->view ()->ui ();
}

static ClassExt<lay::CellViewRef> extdecl_CellView (
  method_ext ("view", &get_view,
    "@brief Gets the view the cellview resides in\n"
    "This reference will be nil if the cellview is not a valid one.\n"
    "This method has been added in version 0.25.\n"
  )
);

static lay::LayoutView *get_view_from_lp (lay::LayerPropertiesNode *node)
{
  return node->view ()->ui ();
}

static ClassExt<lay::LayerPropertiesNode> extdecl_LayerPropertiesNode (
  method_ext ("view", &get_view_from_lp,
    "@brief Gets the view this node lives in\n"
    "\n"
    "This reference can be nil if the node is a orphan node that lives outside a view."
  )
);

}

