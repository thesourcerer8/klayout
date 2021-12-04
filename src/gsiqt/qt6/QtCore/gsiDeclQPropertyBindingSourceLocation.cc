
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2021 Matthias Koefferlein

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
*  @file gsiDeclQPropertyBindingSourceLocation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPropertyBindingSourceLocation>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QPropertyBindingSourceLocation

//  Constructor QPropertyBindingSourceLocation::QPropertyBindingSourceLocation()


static void _init_ctor_QPropertyBindingSourceLocation_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPropertyBindingSourceLocation> ();
}

static void _call_ctor_QPropertyBindingSourceLocation_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPropertyBindingSourceLocation *> (new QPropertyBindingSourceLocation ());
}



namespace gsi
{

static gsi::Methods methods_QPropertyBindingSourceLocation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPropertyBindingSourceLocation::QPropertyBindingSourceLocation()\nThis method creates an object of class QPropertyBindingSourceLocation.", &_init_ctor_QPropertyBindingSourceLocation_0, &_call_ctor_QPropertyBindingSourceLocation_0);
  return methods;
}

gsi::Class<QPropertyBindingSourceLocation> decl_QPropertyBindingSourceLocation ("QtCore", "QPropertyBindingSourceLocation",
  methods_QPropertyBindingSourceLocation (),
  "@qt\n@brief Binding of QPropertyBindingSourceLocation");


GSI_QTCORE_PUBLIC gsi::Class<QPropertyBindingSourceLocation> &qtdecl_QPropertyBindingSourceLocation () { return decl_QPropertyBindingSourceLocation; }

}
