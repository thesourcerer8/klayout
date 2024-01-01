
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
*  @file gsiDeclQStyleOptionToolBox.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionToolBox>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionToolBox

//  Constructor QStyleOptionToolBox::QStyleOptionToolBox()


static void _init_ctor_QStyleOptionToolBox_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionToolBox> ();
}

static void _call_ctor_QStyleOptionToolBox_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionToolBox *> (new QStyleOptionToolBox ());
}


//  Constructor QStyleOptionToolBox::QStyleOptionToolBox(const QStyleOptionToolBox &other)


static void _init_ctor_QStyleOptionToolBox_3267 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionToolBox & > (argspec_0);
  decl->set_return_new<QStyleOptionToolBox> ();
}

static void _call_ctor_QStyleOptionToolBox_3267 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBox &arg1 = gsi::arg_reader<const QStyleOptionToolBox & >() (args, heap);
  ret.write<QStyleOptionToolBox *> (new QStyleOptionToolBox (arg1));
}


// QStyleOptionToolBox &QStyleOptionToolBox::operator=(const QStyleOptionToolBox &)


static void _init_f_operator_eq__3267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStyleOptionToolBox & > (argspec_0);
  decl->set_return<QStyleOptionToolBox & > ();
}

static void _call_f_operator_eq__3267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionToolBox &arg1 = gsi::arg_reader<const QStyleOptionToolBox & >() (args, heap);
  ret.write<QStyleOptionToolBox & > ((QStyleOptionToolBox &)((QStyleOptionToolBox *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionToolBox () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBox::QStyleOptionToolBox()\nThis method creates an object of class QStyleOptionToolBox.", &_init_ctor_QStyleOptionToolBox_0, &_call_ctor_QStyleOptionToolBox_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionToolBox::QStyleOptionToolBox(const QStyleOptionToolBox &other)\nThis method creates an object of class QStyleOptionToolBox.", &_init_ctor_QStyleOptionToolBox_3267, &_call_ctor_QStyleOptionToolBox_3267);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionToolBox &QStyleOptionToolBox::operator=(const QStyleOptionToolBox &)\n", false, &_init_f_operator_eq__3267, &_call_f_operator_eq__3267);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionToolBox> decl_QStyleOptionToolBox (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionToolBox",
  methods_QStyleOptionToolBox (),
  "@qt\n@brief Binding of QStyleOptionToolBox");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionToolBox> &qtdecl_QStyleOptionToolBox () { return decl_QStyleOptionToolBox; }

}

