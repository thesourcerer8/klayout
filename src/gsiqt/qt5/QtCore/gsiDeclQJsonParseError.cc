
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

/**
*  @file gsiDeclQJsonParseError.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonParseError>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QJsonParseError

//  Constructor QJsonParseError::QJsonParseError()


static void _init_ctor_QJsonParseError_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QJsonParseError> ();
}

static void _call_ctor_QJsonParseError_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonParseError *> (new QJsonParseError ());
}


// QString QJsonParseError::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QJsonParseError *)cls)->errorString ());
}



namespace gsi
{

static gsi::Methods methods_QJsonParseError () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonParseError::QJsonParseError()\nThis method creates an object of class QJsonParseError.", &_init_ctor_QJsonParseError_0, &_call_ctor_QJsonParseError_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QJsonParseError::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  return methods;
}

gsi::Class<QJsonParseError> decl_QJsonParseError ("QtCore", "QJsonParseError",
  methods_QJsonParseError (),
  "@qt\n@brief Binding of QJsonParseError");


GSI_QTCORE_PUBLIC gsi::Class<QJsonParseError> &qtdecl_QJsonParseError () { return decl_QJsonParseError; }

}

