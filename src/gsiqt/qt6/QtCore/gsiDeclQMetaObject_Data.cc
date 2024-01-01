
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
*  @file gsiDeclQMetaObject_Data.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMetaObject::Data

//  Constructor QMetaObject::Data::Data()


static void _init_ctor_QMetaObject_Data_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaObject::Data> ();
}

static void _call_ctor_QMetaObject_Data_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaObject::Data *> (new QMetaObject::Data ());
}



namespace gsi
{

static gsi::Methods methods_QMetaObject_Data () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaObject::Data::Data()\nThis method creates an object of class QMetaObject::Data.", &_init_ctor_QMetaObject_Data_0, &_call_ctor_QMetaObject_Data_0);
  return methods;
}

gsi::Class<QMetaObject::Data> decl_QMetaObject_Data ("QtCore", "QMetaObject_Data",
  methods_QMetaObject_Data (),
  "@qt\n@brief Binding of QMetaObject::Data");

gsi::ClassExt<QMetaObject> decl_QMetaObject_Data_as_child (decl_QMetaObject_Data, "Data");

GSI_QTCORE_PUBLIC gsi::Class<QMetaObject::Data> &qtdecl_QMetaObject_Data () { return decl_QMetaObject_Data; }

}

