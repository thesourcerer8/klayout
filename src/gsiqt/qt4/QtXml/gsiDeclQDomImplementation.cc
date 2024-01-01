
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
*  @file gsiDeclQDomImplementation.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomImplementation>
#include <QDomDocument>
#include <QDomDocumentType>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomImplementation

//  Constructor QDomImplementation::QDomImplementation()


static void _init_ctor_QDomImplementation_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomImplementation> ();
}

static void _call_ctor_QDomImplementation_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomImplementation *> (new QDomImplementation ());
}


//  Constructor QDomImplementation::QDomImplementation(const QDomImplementation &)


static void _init_ctor_QDomImplementation_3160 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomImplementation & > (argspec_0);
  decl->set_return_new<QDomImplementation> ();
}

static void _call_ctor_QDomImplementation_3160 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomImplementation &arg1 = gsi::arg_reader<const QDomImplementation & >() (args, heap);
  ret.write<QDomImplementation *> (new QDomImplementation (arg1));
}


// QDomDocument QDomImplementation::createDocument(const QString &nsURI, const QString &qName, const QDomDocumentType &doctype)


static void _init_f_createDocument_6765 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("nsURI");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("qName");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("doctype");
  decl->add_arg<const QDomDocumentType & > (argspec_2);
  decl->set_return<QDomDocument > ();
}

static void _call_f_createDocument_6765 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QDomDocumentType &arg3 = gsi::arg_reader<const QDomDocumentType & >() (args, heap);
  ret.write<QDomDocument > ((QDomDocument)((QDomImplementation *)cls)->createDocument (arg1, arg2, arg3));
}


// QDomDocumentType QDomImplementation::createDocumentType(const QString &qName, const QString &publicId, const QString &systemId)


static void _init_f_createDocumentType_5859 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("qName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("publicId");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("systemId");
  decl->add_arg<const QString & > (argspec_2);
  decl->set_return<QDomDocumentType > ();
}

static void _call_f_createDocumentType_5859 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QDomDocumentType > ((QDomDocumentType)((QDomImplementation *)cls)->createDocumentType (arg1, arg2, arg3));
}


// bool QDomImplementation::hasFeature(const QString &feature, const QString &version)


static void _init_f_hasFeature_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("feature");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("version");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_hasFeature_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QDomImplementation *)cls)->hasFeature (arg1, arg2));
}


// bool QDomImplementation::isNull()


static void _init_f_isNull_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QDomImplementation *)cls)->isNull ());
}


// bool QDomImplementation::operator!=(const QDomImplementation &)


static void _init_f_operator_excl__eq__c3160 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomImplementation & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3160 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomImplementation &arg1 = gsi::arg_reader<const QDomImplementation & >() (args, heap);
  ret.write<bool > ((bool)((QDomImplementation *)cls)->operator!= (arg1));
}


// QDomImplementation &QDomImplementation::operator=(const QDomImplementation &)


static void _init_f_operator_eq__3160 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomImplementation & > (argspec_0);
  decl->set_return<QDomImplementation & > ();
}

static void _call_f_operator_eq__3160 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomImplementation &arg1 = gsi::arg_reader<const QDomImplementation & >() (args, heap);
  ret.write<QDomImplementation & > ((QDomImplementation &)((QDomImplementation *)cls)->operator= (arg1));
}


// bool QDomImplementation::operator==(const QDomImplementation &)


static void _init_f_operator_eq__eq__c3160 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomImplementation & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3160 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomImplementation &arg1 = gsi::arg_reader<const QDomImplementation & >() (args, heap);
  ret.write<bool > ((bool)((QDomImplementation *)cls)->operator== (arg1));
}


// static QDomImplementation::InvalidDataPolicy QDomImplementation::invalidDataPolicy()


static void _init_f_invalidDataPolicy_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomImplementation::InvalidDataPolicy>::target_type > ();
}

static void _call_f_invalidDataPolicy_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomImplementation::InvalidDataPolicy>::target_type > ((qt_gsi::Converter<QDomImplementation::InvalidDataPolicy>::target_type)qt_gsi::CppToQtAdaptor<QDomImplementation::InvalidDataPolicy>(QDomImplementation::invalidDataPolicy ()));
}


// static void QDomImplementation::setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy policy)


static void _init_f_setInvalidDataPolicy_4112 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("policy");
  decl->add_arg<const qt_gsi::Converter<QDomImplementation::InvalidDataPolicy>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setInvalidDataPolicy_4112 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QDomImplementation::InvalidDataPolicy>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QDomImplementation::InvalidDataPolicy>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QDomImplementation::setInvalidDataPolicy (qt_gsi::QtToCppAdaptor<QDomImplementation::InvalidDataPolicy>(arg1).cref());
}



namespace gsi
{

static gsi::Methods methods_QDomImplementation () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomImplementation::QDomImplementation()\nThis method creates an object of class QDomImplementation.", &_init_ctor_QDomImplementation_0, &_call_ctor_QDomImplementation_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomImplementation::QDomImplementation(const QDomImplementation &)\nThis method creates an object of class QDomImplementation.", &_init_ctor_QDomImplementation_3160, &_call_ctor_QDomImplementation_3160);
  methods += new qt_gsi::GenericMethod ("createDocument", "@brief Method QDomDocument QDomImplementation::createDocument(const QString &nsURI, const QString &qName, const QDomDocumentType &doctype)\n", false, &_init_f_createDocument_6765, &_call_f_createDocument_6765);
  methods += new qt_gsi::GenericMethod ("createDocumentType", "@brief Method QDomDocumentType QDomImplementation::createDocumentType(const QString &qName, const QString &publicId, const QString &systemId)\n", false, &_init_f_createDocumentType_5859, &_call_f_createDocumentType_5859);
  methods += new qt_gsi::GenericMethod ("hasFeature", "@brief Method bool QDomImplementation::hasFeature(const QString &feature, const QString &version)\n", true, &_init_f_hasFeature_c3942, &_call_f_hasFeature_c3942);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QDomImplementation::isNull()\n", false, &_init_f_isNull_0, &_call_f_isNull_0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QDomImplementation::operator!=(const QDomImplementation &)\n", true, &_init_f_operator_excl__eq__c3160, &_call_f_operator_excl__eq__c3160);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomImplementation &QDomImplementation::operator=(const QDomImplementation &)\n", false, &_init_f_operator_eq__3160, &_call_f_operator_eq__3160);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QDomImplementation::operator==(const QDomImplementation &)\n", true, &_init_f_operator_eq__eq__c3160, &_call_f_operator_eq__eq__c3160);
  methods += new qt_gsi::GenericStaticMethod (":invalidDataPolicy", "@brief Static method QDomImplementation::InvalidDataPolicy QDomImplementation::invalidDataPolicy()\nThis method is static and can be called without an instance.", &_init_f_invalidDataPolicy_0, &_call_f_invalidDataPolicy_0);
  methods += new qt_gsi::GenericStaticMethod ("setInvalidDataPolicy|invalidDataPolicy=", "@brief Static method void QDomImplementation::setInvalidDataPolicy(QDomImplementation::InvalidDataPolicy policy)\nThis method is static and can be called without an instance.", &_init_f_setInvalidDataPolicy_4112, &_call_f_setInvalidDataPolicy_4112);
  return methods;
}

gsi::Class<QDomImplementation> decl_QDomImplementation ("QtXml", "QDomImplementation",
  methods_QDomImplementation (),
  "@qt\n@brief Binding of QDomImplementation");


GSI_QTXML_PUBLIC gsi::Class<QDomImplementation> &qtdecl_QDomImplementation () { return decl_QDomImplementation; }

}


//  Implementation of the enum wrapper class for QDomImplementation::InvalidDataPolicy
namespace qt_gsi
{

static gsi::Enum<QDomImplementation::InvalidDataPolicy> decl_QDomImplementation_InvalidDataPolicy_Enum ("QtXml", "QDomImplementation_InvalidDataPolicy",
    gsi::enum_const ("AcceptInvalidChars", QDomImplementation::AcceptInvalidChars, "@brief Enum constant QDomImplementation::AcceptInvalidChars") +
    gsi::enum_const ("DropInvalidChars", QDomImplementation::DropInvalidChars, "@brief Enum constant QDomImplementation::DropInvalidChars") +
    gsi::enum_const ("ReturnNullNode", QDomImplementation::ReturnNullNode, "@brief Enum constant QDomImplementation::ReturnNullNode"),
  "@qt\n@brief This class represents the QDomImplementation::InvalidDataPolicy enum");

static gsi::QFlagsClass<QDomImplementation::InvalidDataPolicy > decl_QDomImplementation_InvalidDataPolicy_Enums ("QtXml", "QDomImplementation_QFlags_InvalidDataPolicy",
  "@qt\n@brief This class represents the QFlags<QDomImplementation::InvalidDataPolicy> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QDomImplementation> inject_QDomImplementation_InvalidDataPolicy_Enum_in_parent (decl_QDomImplementation_InvalidDataPolicy_Enum.defs ());
static gsi::ClassExt<QDomImplementation> decl_QDomImplementation_InvalidDataPolicy_Enum_as_child (decl_QDomImplementation_InvalidDataPolicy_Enum, "InvalidDataPolicy");
static gsi::ClassExt<QDomImplementation> decl_QDomImplementation_InvalidDataPolicy_Enums_as_child (decl_QDomImplementation_InvalidDataPolicy_Enums, "QFlags_InvalidDataPolicy");

}

