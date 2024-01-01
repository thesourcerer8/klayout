
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
*  @file gsiDeclQJsonValueRefPtr.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonValueRefPtr>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValueRef>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonValueRefPtr

//  Constructor QJsonValueRefPtr::QJsonValueRefPtr(QJsonArray *array, int idx)


static void _init_ctor_QJsonValueRefPtr_2283 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<QJsonArray * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("idx");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QJsonValueRefPtr> ();
}

static void _call_ctor_QJsonValueRefPtr_2283 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray *arg1 = gsi::arg_reader<QJsonArray * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonValueRefPtr *> (new QJsonValueRefPtr (arg1, arg2));
}


//  Constructor QJsonValueRefPtr::QJsonValueRefPtr(QJsonObject *object, int idx)


static void _init_ctor_QJsonValueRefPtr_2371 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QJsonObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("idx");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QJsonValueRefPtr> ();
}

static void _call_ctor_QJsonValueRefPtr_2371 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonObject *arg1 = gsi::arg_reader<QJsonObject * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QJsonValueRefPtr *> (new QJsonValueRefPtr (arg1, arg2));
}


// QJsonValueRef &QJsonValueRefPtr::operator*()


static void _init_f_operator_star__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRef & > ();
}

static void _call_f_operator_star__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRef & > ((QJsonValueRef &)((QJsonValueRefPtr *)cls)->operator* ());
}


// QJsonValueRef *QJsonValueRefPtr::operator->()


static void _init_f_operator_minus__gt__0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonValueRef * > ();
}

static void _call_f_operator_minus__gt__0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonValueRef * > ((QJsonValueRef *)((QJsonValueRefPtr *)cls)->operator-> ());
}



namespace gsi
{

static gsi::Methods methods_QJsonValueRefPtr () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValueRefPtr::QJsonValueRefPtr(QJsonArray *array, int idx)\nThis method creates an object of class QJsonValueRefPtr.", &_init_ctor_QJsonValueRefPtr_2283, &_call_ctor_QJsonValueRefPtr_2283);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValueRefPtr::QJsonValueRefPtr(QJsonObject *object, int idx)\nThis method creates an object of class QJsonValueRefPtr.", &_init_ctor_QJsonValueRefPtr_2371, &_call_ctor_QJsonValueRefPtr_2371);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QJsonValueRef &QJsonValueRefPtr::operator*()\n", false, &_init_f_operator_star__0, &_call_f_operator_star__0);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method QJsonValueRef *QJsonValueRefPtr::operator->()\n", false, &_init_f_operator_minus__gt__0, &_call_f_operator_minus__gt__0);
  return methods;
}

gsi::Class<QJsonValueRefPtr> decl_QJsonValueRefPtr ("QtCore", "QJsonValueRefPtr",
  methods_QJsonValueRefPtr (),
  "@qt\n@brief Binding of QJsonValueRefPtr");


GSI_QTCORE_PUBLIC gsi::Class<QJsonValueRefPtr> &qtdecl_QJsonValueRefPtr () { return decl_QJsonValueRefPtr; }

}

