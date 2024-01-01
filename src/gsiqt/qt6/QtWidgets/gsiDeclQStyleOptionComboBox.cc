
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
*  @file gsiDeclQStyleOptionComboBox.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionComboBox>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionComboBox

//  Constructor QStyleOptionComboBox::QStyleOptionComboBox()


static void _init_ctor_QStyleOptionComboBox_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionComboBox> ();
}

static void _call_ctor_QStyleOptionComboBox_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionComboBox *> (new QStyleOptionComboBox ());
}


//  Constructor QStyleOptionComboBox::QStyleOptionComboBox(const QStyleOptionComboBox &other)


static void _init_ctor_QStyleOptionComboBox_3349 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionComboBox & > (argspec_0);
  decl->set_return_new<QStyleOptionComboBox> ();
}

static void _call_ctor_QStyleOptionComboBox_3349 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionComboBox &arg1 = gsi::arg_reader<const QStyleOptionComboBox & >() (args, heap);
  ret.write<QStyleOptionComboBox *> (new QStyleOptionComboBox (arg1));
}


// QStyleOptionComboBox &QStyleOptionComboBox::operator=(const QStyleOptionComboBox &)


static void _init_f_operator_eq__3349 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QStyleOptionComboBox & > (argspec_0);
  decl->set_return<QStyleOptionComboBox & > ();
}

static void _call_f_operator_eq__3349 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionComboBox &arg1 = gsi::arg_reader<const QStyleOptionComboBox & >() (args, heap);
  ret.write<QStyleOptionComboBox & > ((QStyleOptionComboBox &)((QStyleOptionComboBox *)cls)->operator= (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionComboBox () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionComboBox::QStyleOptionComboBox()\nThis method creates an object of class QStyleOptionComboBox.", &_init_ctor_QStyleOptionComboBox_0, &_call_ctor_QStyleOptionComboBox_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionComboBox::QStyleOptionComboBox(const QStyleOptionComboBox &other)\nThis method creates an object of class QStyleOptionComboBox.", &_init_ctor_QStyleOptionComboBox_3349, &_call_ctor_QStyleOptionComboBox_3349);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QStyleOptionComboBox &QStyleOptionComboBox::operator=(const QStyleOptionComboBox &)\n", false, &_init_f_operator_eq__3349, &_call_f_operator_eq__3349);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionComboBox> decl_QStyleOptionComboBox (qtdecl_QStyleOptionComplex (), "QtWidgets", "QStyleOptionComboBox",
  methods_QStyleOptionComboBox (),
  "@qt\n@brief Binding of QStyleOptionComboBox");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionComboBox> &qtdecl_QStyleOptionComboBox () { return decl_QStyleOptionComboBox; }

}

