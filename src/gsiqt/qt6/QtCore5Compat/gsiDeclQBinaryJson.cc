
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

/**
*  @file gsiDeclQBinaryJson.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QBinaryJson>
#include "gsiQt.h"
#include "gsiQtCore5CompatCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// namespace QBinaryJson

class QBinaryJson_Namespace { };

namespace gsi
{
gsi::Class<QBinaryJson_Namespace> decl_QBinaryJson_Namespace ("QtCore5Compat", "QBinaryJson",
  gsi::Methods(),
  "@qt\n@brief This class represents the QBinaryJson namespace");
}


//  Implementation of the enum wrapper class for QBinaryJson::DataValidation
namespace qt_gsi
{

static gsi::Enum<QBinaryJson::DataValidation> decl_QBinaryJson_DataValidation_Enum ("QtCore5Compat", "QBinaryJson_DataValidation",
    gsi::enum_const ("Validate", QBinaryJson::Validate, "@brief Enum constant QBinaryJson::Validate") +
    gsi::enum_const ("BypassValidation", QBinaryJson::BypassValidation, "@brief Enum constant QBinaryJson::BypassValidation"),
  "@qt\n@brief This class represents the QBinaryJson::DataValidation enum");

static gsi::QFlagsClass<QBinaryJson::DataValidation > decl_QBinaryJson_DataValidation_Enums ("QtCore5Compat", "QBinaryJson_QFlags_DataValidation",
  "@qt\n@brief This class represents the QFlags<QBinaryJson::DataValidation> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QBinaryJson_Namespace> inject_QBinaryJson_DataValidation_Enum_in_parent (decl_QBinaryJson_DataValidation_Enum.defs ());
static gsi::ClassExt<QBinaryJson_Namespace> decl_QBinaryJson_DataValidation_Enum_as_child (decl_QBinaryJson_DataValidation_Enum, "DataValidation");
static gsi::ClassExt<QBinaryJson_Namespace> decl_QBinaryJson_DataValidation_Enums_as_child (decl_QBinaryJson_DataValidation_Enums, "QFlags_DataValidation");

}

