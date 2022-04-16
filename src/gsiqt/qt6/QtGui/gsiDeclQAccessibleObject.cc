
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
*  @file gsiDeclQAccessibleObject.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleObject>
#include <QAccessibleHyperlinkInterface>
#include <QAccessibleInterface>
#include <QAccessibleTableCellInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include <QWindow>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleObject

// QAccessibleInterface *QAccessibleObject::childAt(int x, int y)


static void _init_f_childAt_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_childAt_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleObject *)cls)->childAt (arg1, arg2));
}


// bool QAccessibleObject::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAccessibleObject *)cls)->isValid ());
}


// QObject *QAccessibleObject::object()


static void _init_f_object_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_object_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAccessibleObject *)cls)->object ());
}


// QRect QAccessibleObject::rect()


static void _init_f_rect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_rect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QAccessibleObject *)cls)->rect ());
}


// void QAccessibleObject::setText(QAccessible::Text t, const QString &text)


static void _init_f_setText_3977 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("t");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Text>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("text");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setText_3977 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QAccessible::Text>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QAccessible::Text>::target_type & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleObject *)cls)->setText (qt_gsi::QtToCppAdaptor<QAccessible::Text>(arg1).cref(), arg2);
}



namespace gsi
{

static gsi::Methods methods_QAccessibleObject () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("childAt", "@brief Method QAccessibleInterface *QAccessibleObject::childAt(int x, int y)\nThis is a reimplementation of QAccessibleInterface::childAt", true, &_init_f_childAt_c1426, &_call_f_childAt_c1426);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QAccessibleObject::isValid()\nThis is a reimplementation of QAccessibleInterface::isValid", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("object", "@brief Method QObject *QAccessibleObject::object()\nThis is a reimplementation of QAccessibleInterface::object", true, &_init_f_object_c0, &_call_f_object_c0);
  methods += new qt_gsi::GenericMethod ("rect", "@brief Method QRect QAccessibleObject::rect()\nThis is a reimplementation of QAccessibleInterface::rect", true, &_init_f_rect_c0, &_call_f_rect_c0);
  methods += new qt_gsi::GenericMethod ("setText", "@brief Method void QAccessibleObject::setText(QAccessible::Text t, const QString &text)\nThis is a reimplementation of QAccessibleInterface::setText", false, &_init_f_setText_3977, &_call_f_setText_3977);
  return methods;
}

gsi::Class<QAccessibleInterface> &qtdecl_QAccessibleInterface ();

gsi::Class<QAccessibleObject> decl_QAccessibleObject (qtdecl_QAccessibleInterface (), "QtGui", "QAccessibleObject",
  methods_QAccessibleObject (),
  "@qt\n@brief Binding of QAccessibleObject");


GSI_QTGUI_PUBLIC gsi::Class<QAccessibleObject> &qtdecl_QAccessibleObject () { return decl_QAccessibleObject; }

}

