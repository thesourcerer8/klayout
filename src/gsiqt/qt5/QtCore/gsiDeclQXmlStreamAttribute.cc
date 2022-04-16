
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
*  @file gsiDeclQXmlStreamAttribute.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamAttribute>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamAttribute

//  Constructor QXmlStreamAttribute::QXmlStreamAttribute()


static void _init_ctor_QXmlStreamAttribute_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamAttribute> ();
}

static void _call_ctor_QXmlStreamAttribute_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamAttribute *> (new QXmlStreamAttribute ());
}


//  Constructor QXmlStreamAttribute::QXmlStreamAttribute(const QString &qualifiedName, const QString &value)


static void _init_ctor_QXmlStreamAttribute_3942 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qualifiedName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return_new<QXmlStreamAttribute> ();
}

static void _call_ctor_QXmlStreamAttribute_3942 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QXmlStreamAttribute *> (new QXmlStreamAttribute (arg1, arg2));
}


//  Constructor QXmlStreamAttribute::QXmlStreamAttribute(const QString &namespaceUri, const QString &name, const QString &value)


static void _init_ctor_QXmlStreamAttribute_5859 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("namespaceUri");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("name");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("value");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return_new<QXmlStreamAttribute> ();
}

static void _call_ctor_QXmlStreamAttribute_5859 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QXmlStreamAttribute *> (new QXmlStreamAttribute (arg1, arg2, arg3));
}


//  Constructor QXmlStreamAttribute::QXmlStreamAttribute(const QXmlStreamAttribute &)


static void _init_ctor_QXmlStreamAttribute_3267 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamAttribute & > (argspec_0);
  decl->set_return_new<QXmlStreamAttribute> ();
}

static void _call_ctor_QXmlStreamAttribute_3267 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamAttribute &arg1 = gsi::arg_reader<const QXmlStreamAttribute & >() (args, heap);
  ret.write<QXmlStreamAttribute *> (new QXmlStreamAttribute (arg1));
}


// bool QXmlStreamAttribute::isDefault()


static void _init_f_isDefault_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDefault_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QXmlStreamAttribute *)cls)->isDefault ());
}


// QStringRef QXmlStreamAttribute::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttribute *)cls)->name ());
}


// QStringRef QXmlStreamAttribute::namespaceUri()


static void _init_f_namespaceUri_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_namespaceUri_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttribute *)cls)->namespaceUri ());
}


// bool QXmlStreamAttribute::operator!=(const QXmlStreamAttribute &other)


static void _init_f_operator_excl__eq__c3267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamAttribute & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamAttribute &arg1 = gsi::arg_reader<const QXmlStreamAttribute & >() (args, heap);
  ret.write<bool > ((bool)((QXmlStreamAttribute *)cls)->operator!= (arg1));
}


// QXmlStreamAttribute &QXmlStreamAttribute::operator=(const QXmlStreamAttribute &)


static void _init_f_operator_eq__3267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamAttribute & > (argspec_0);
  decl->set_return<QXmlStreamAttribute & > ();
}

static void _call_f_operator_eq__3267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamAttribute &arg1 = gsi::arg_reader<const QXmlStreamAttribute & >() (args, heap);
  ret.write<QXmlStreamAttribute & > ((QXmlStreamAttribute &)((QXmlStreamAttribute *)cls)->operator= (arg1));
}


// bool QXmlStreamAttribute::operator==(const QXmlStreamAttribute &other)


static void _init_f_operator_eq__eq__c3267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamAttribute & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamAttribute &arg1 = gsi::arg_reader<const QXmlStreamAttribute & >() (args, heap);
  ret.write<bool > ((bool)((QXmlStreamAttribute *)cls)->operator== (arg1));
}


// QStringRef QXmlStreamAttribute::prefix()


static void _init_f_prefix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_prefix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttribute *)cls)->prefix ());
}


// QStringRef QXmlStreamAttribute::qualifiedName()


static void _init_f_qualifiedName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_qualifiedName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttribute *)cls)->qualifiedName ());
}


// QStringRef QXmlStreamAttribute::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamAttribute *)cls)->value ());
}



namespace gsi
{

static gsi::Methods methods_QXmlStreamAttribute () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamAttribute::QXmlStreamAttribute()\nThis method creates an object of class QXmlStreamAttribute.", &_init_ctor_QXmlStreamAttribute_0, &_call_ctor_QXmlStreamAttribute_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamAttribute::QXmlStreamAttribute(const QString &qualifiedName, const QString &value)\nThis method creates an object of class QXmlStreamAttribute.", &_init_ctor_QXmlStreamAttribute_3942, &_call_ctor_QXmlStreamAttribute_3942);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamAttribute::QXmlStreamAttribute(const QString &namespaceUri, const QString &name, const QString &value)\nThis method creates an object of class QXmlStreamAttribute.", &_init_ctor_QXmlStreamAttribute_5859, &_call_ctor_QXmlStreamAttribute_5859);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamAttribute::QXmlStreamAttribute(const QXmlStreamAttribute &)\nThis method creates an object of class QXmlStreamAttribute.", &_init_ctor_QXmlStreamAttribute_3267, &_call_ctor_QXmlStreamAttribute_3267);
  methods += new qt_gsi::GenericMethod ("isDefault?", "@brief Method bool QXmlStreamAttribute::isDefault()\n", true, &_init_f_isDefault_c0, &_call_f_isDefault_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QStringRef QXmlStreamAttribute::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("namespaceUri", "@brief Method QStringRef QXmlStreamAttribute::namespaceUri()\n", true, &_init_f_namespaceUri_c0, &_call_f_namespaceUri_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QXmlStreamAttribute::operator!=(const QXmlStreamAttribute &other)\n", true, &_init_f_operator_excl__eq__c3267, &_call_f_operator_excl__eq__c3267);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlStreamAttribute &QXmlStreamAttribute::operator=(const QXmlStreamAttribute &)\n", false, &_init_f_operator_eq__3267, &_call_f_operator_eq__3267);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QXmlStreamAttribute::operator==(const QXmlStreamAttribute &other)\n", true, &_init_f_operator_eq__eq__c3267, &_call_f_operator_eq__eq__c3267);
  methods += new qt_gsi::GenericMethod ("prefix", "@brief Method QStringRef QXmlStreamAttribute::prefix()\n", true, &_init_f_prefix_c0, &_call_f_prefix_c0);
  methods += new qt_gsi::GenericMethod ("qualifiedName", "@brief Method QStringRef QXmlStreamAttribute::qualifiedName()\n", true, &_init_f_qualifiedName_c0, &_call_f_qualifiedName_c0);
  methods += new qt_gsi::GenericMethod ("value", "@brief Method QStringRef QXmlStreamAttribute::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QXmlStreamAttribute> decl_QXmlStreamAttribute ("QtCore", "QXmlStreamAttribute",
  methods_QXmlStreamAttribute (),
  "@qt\n@brief Binding of QXmlStreamAttribute");


GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamAttribute> &qtdecl_QXmlStreamAttribute () { return decl_QXmlStreamAttribute; }

}

