
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

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
*  @file gsiDeclQNetworkConfiguration.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QNetworkConfiguration>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QNetworkConfiguration

//  Constructor QNetworkConfiguration::QNetworkConfiguration()


static void _init_ctor_QNetworkConfiguration_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QNetworkConfiguration> ();
}

static void _call_ctor_QNetworkConfiguration_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkConfiguration *> (new QNetworkConfiguration ());
}


//  Constructor QNetworkConfiguration::QNetworkConfiguration(const QNetworkConfiguration &other)


static void _init_ctor_QNetworkConfiguration_3508 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkConfiguration & > (argspec_0);
  decl->set_return_new<QNetworkConfiguration> ();
}

static void _call_ctor_QNetworkConfiguration_3508 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkConfiguration &arg1 = gsi::arg_reader<const QNetworkConfiguration & >() (args, heap);
  ret.write<QNetworkConfiguration *> (new QNetworkConfiguration (arg1));
}


// QNetworkConfiguration::BearerType QNetworkConfiguration::bearerType()


static void _init_f_bearerType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkConfiguration::BearerType>::target_type > ();
}

static void _call_f_bearerType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkConfiguration::BearerType>::target_type > ((qt_gsi::Converter<QNetworkConfiguration::BearerType>::target_type)qt_gsi::CppToQtAdaptor<QNetworkConfiguration::BearerType>(((QNetworkConfiguration *)cls)->bearerType ()));
}


// QNetworkConfiguration::BearerType QNetworkConfiguration::bearerTypeFamily()


static void _init_f_bearerTypeFamily_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkConfiguration::BearerType>::target_type > ();
}

static void _call_f_bearerTypeFamily_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkConfiguration::BearerType>::target_type > ((qt_gsi::Converter<QNetworkConfiguration::BearerType>::target_type)qt_gsi::CppToQtAdaptor<QNetworkConfiguration::BearerType>(((QNetworkConfiguration *)cls)->bearerTypeFamily ()));
}


// QString QNetworkConfiguration::bearerTypeName()


static void _init_f_bearerTypeName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_bearerTypeName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkConfiguration *)cls)->bearerTypeName ());
}


// QList<QNetworkConfiguration> QNetworkConfiguration::children()


static void _init_f_children_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QNetworkConfiguration> > ();
}

static void _call_f_children_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QNetworkConfiguration> > ((QList<QNetworkConfiguration>)((QNetworkConfiguration *)cls)->children ());
}


// int QNetworkConfiguration::connectTimeout()


static void _init_f_connectTimeout_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_connectTimeout_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QNetworkConfiguration *)cls)->connectTimeout ());
}


// QString QNetworkConfiguration::identifier()


static void _init_f_identifier_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_identifier_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkConfiguration *)cls)->identifier ());
}


// bool QNetworkConfiguration::isRoamingAvailable()


static void _init_f_isRoamingAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRoamingAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkConfiguration *)cls)->isRoamingAvailable ());
}


// bool QNetworkConfiguration::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QNetworkConfiguration *)cls)->isValid ());
}


// QString QNetworkConfiguration::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QNetworkConfiguration *)cls)->name ());
}


// bool QNetworkConfiguration::operator!=(const QNetworkConfiguration &other)


static void _init_f_operator_excl__eq__c3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkConfiguration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkConfiguration &arg1 = gsi::arg_reader<const QNetworkConfiguration & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkConfiguration *)cls)->operator!= (arg1));
}


// QNetworkConfiguration &QNetworkConfiguration::operator=(const QNetworkConfiguration &other)


static void _init_f_operator_eq__3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkConfiguration & > (argspec_0);
  decl->set_return<QNetworkConfiguration & > ();
}

static void _call_f_operator_eq__3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkConfiguration &arg1 = gsi::arg_reader<const QNetworkConfiguration & >() (args, heap);
  ret.write<QNetworkConfiguration & > ((QNetworkConfiguration &)((QNetworkConfiguration *)cls)->operator= (arg1));
}


// bool QNetworkConfiguration::operator==(const QNetworkConfiguration &other)


static void _init_f_operator_eq__eq__c3508 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QNetworkConfiguration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3508 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkConfiguration &arg1 = gsi::arg_reader<const QNetworkConfiguration & >() (args, heap);
  ret.write<bool > ((bool)((QNetworkConfiguration *)cls)->operator== (arg1));
}


// QNetworkConfiguration::Purpose QNetworkConfiguration::purpose()


static void _init_f_purpose_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkConfiguration::Purpose>::target_type > ();
}

static void _call_f_purpose_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkConfiguration::Purpose>::target_type > ((qt_gsi::Converter<QNetworkConfiguration::Purpose>::target_type)qt_gsi::CppToQtAdaptor<QNetworkConfiguration::Purpose>(((QNetworkConfiguration *)cls)->purpose ()));
}


// bool QNetworkConfiguration::setConnectTimeout(int timeout)


static void _init_f_setConnectTimeout_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setConnectTimeout_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QNetworkConfiguration *)cls)->setConnectTimeout (arg1));
}


// QFlags<QNetworkConfiguration::StateFlag> QNetworkConfiguration::state()


static void _init_f_state_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QNetworkConfiguration::StateFlag> > ();
}

static void _call_f_state_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QNetworkConfiguration::StateFlag> > ((QFlags<QNetworkConfiguration::StateFlag>)((QNetworkConfiguration *)cls)->state ());
}


// void QNetworkConfiguration::swap(QNetworkConfiguration &other)


static void _init_f_swap_2813 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QNetworkConfiguration & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_2813 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QNetworkConfiguration &arg1 = gsi::arg_reader<QNetworkConfiguration & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QNetworkConfiguration *)cls)->swap (arg1);
}


// QNetworkConfiguration::Type QNetworkConfiguration::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QNetworkConfiguration::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QNetworkConfiguration::Type>::target_type > ((qt_gsi::Converter<QNetworkConfiguration::Type>::target_type)qt_gsi::CppToQtAdaptor<QNetworkConfiguration::Type>(((QNetworkConfiguration *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QNetworkConfiguration () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkConfiguration::QNetworkConfiguration()\nThis method creates an object of class QNetworkConfiguration.", &_init_ctor_QNetworkConfiguration_0, &_call_ctor_QNetworkConfiguration_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QNetworkConfiguration::QNetworkConfiguration(const QNetworkConfiguration &other)\nThis method creates an object of class QNetworkConfiguration.", &_init_ctor_QNetworkConfiguration_3508, &_call_ctor_QNetworkConfiguration_3508);
  methods += new qt_gsi::GenericMethod ("bearerType", "@brief Method QNetworkConfiguration::BearerType QNetworkConfiguration::bearerType()\n", true, &_init_f_bearerType_c0, &_call_f_bearerType_c0);
  methods += new qt_gsi::GenericMethod ("bearerTypeFamily", "@brief Method QNetworkConfiguration::BearerType QNetworkConfiguration::bearerTypeFamily()\n", true, &_init_f_bearerTypeFamily_c0, &_call_f_bearerTypeFamily_c0);
  methods += new qt_gsi::GenericMethod ("bearerTypeName", "@brief Method QString QNetworkConfiguration::bearerTypeName()\n", true, &_init_f_bearerTypeName_c0, &_call_f_bearerTypeName_c0);
  methods += new qt_gsi::GenericMethod ("children", "@brief Method QList<QNetworkConfiguration> QNetworkConfiguration::children()\n", true, &_init_f_children_c0, &_call_f_children_c0);
  methods += new qt_gsi::GenericMethod ("connectTimeout", "@brief Method int QNetworkConfiguration::connectTimeout()\n", true, &_init_f_connectTimeout_c0, &_call_f_connectTimeout_c0);
  methods += new qt_gsi::GenericMethod ("identifier", "@brief Method QString QNetworkConfiguration::identifier()\n", true, &_init_f_identifier_c0, &_call_f_identifier_c0);
  methods += new qt_gsi::GenericMethod ("isRoamingAvailable?", "@brief Method bool QNetworkConfiguration::isRoamingAvailable()\n", true, &_init_f_isRoamingAvailable_c0, &_call_f_isRoamingAvailable_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QNetworkConfiguration::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QString QNetworkConfiguration::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QNetworkConfiguration::operator!=(const QNetworkConfiguration &other)\n", true, &_init_f_operator_excl__eq__c3508, &_call_f_operator_excl__eq__c3508);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QNetworkConfiguration &QNetworkConfiguration::operator=(const QNetworkConfiguration &other)\n", false, &_init_f_operator_eq__3508, &_call_f_operator_eq__3508);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QNetworkConfiguration::operator==(const QNetworkConfiguration &other)\n", true, &_init_f_operator_eq__eq__c3508, &_call_f_operator_eq__eq__c3508);
  methods += new qt_gsi::GenericMethod ("purpose", "@brief Method QNetworkConfiguration::Purpose QNetworkConfiguration::purpose()\n", true, &_init_f_purpose_c0, &_call_f_purpose_c0);
  methods += new qt_gsi::GenericMethod ("setConnectTimeout", "@brief Method bool QNetworkConfiguration::setConnectTimeout(int timeout)\n", false, &_init_f_setConnectTimeout_767, &_call_f_setConnectTimeout_767);
  methods += new qt_gsi::GenericMethod ("state", "@brief Method QFlags<QNetworkConfiguration::StateFlag> QNetworkConfiguration::state()\n", true, &_init_f_state_c0, &_call_f_state_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QNetworkConfiguration::swap(QNetworkConfiguration &other)\n", false, &_init_f_swap_2813, &_call_f_swap_2813);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QNetworkConfiguration::Type QNetworkConfiguration::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QNetworkConfiguration> decl_QNetworkConfiguration ("QtNetwork", "QNetworkConfiguration",
  methods_QNetworkConfiguration (),
  "@qt\n@brief Binding of QNetworkConfiguration");


GSI_QTNETWORK_PUBLIC gsi::Class<QNetworkConfiguration> &qtdecl_QNetworkConfiguration () { return decl_QNetworkConfiguration; }

}


//  Implementation of the enum wrapper class for QNetworkConfiguration::BearerType
namespace qt_gsi
{

static gsi::Enum<QNetworkConfiguration::BearerType> decl_QNetworkConfiguration_BearerType_Enum ("QtNetwork", "QNetworkConfiguration_BearerType",
    gsi::enum_const ("BearerUnknown", QNetworkConfiguration::BearerUnknown, "@brief Enum constant QNetworkConfiguration::BearerUnknown") +
    gsi::enum_const ("BearerEthernet", QNetworkConfiguration::BearerEthernet, "@brief Enum constant QNetworkConfiguration::BearerEthernet") +
    gsi::enum_const ("BearerWLAN", QNetworkConfiguration::BearerWLAN, "@brief Enum constant QNetworkConfiguration::BearerWLAN") +
    gsi::enum_const ("Bearer2G", QNetworkConfiguration::Bearer2G, "@brief Enum constant QNetworkConfiguration::Bearer2G") +
    gsi::enum_const ("BearerCDMA2000", QNetworkConfiguration::BearerCDMA2000, "@brief Enum constant QNetworkConfiguration::BearerCDMA2000") +
    gsi::enum_const ("BearerWCDMA", QNetworkConfiguration::BearerWCDMA, "@brief Enum constant QNetworkConfiguration::BearerWCDMA") +
    gsi::enum_const ("BearerHSPA", QNetworkConfiguration::BearerHSPA, "@brief Enum constant QNetworkConfiguration::BearerHSPA") +
    gsi::enum_const ("BearerBluetooth", QNetworkConfiguration::BearerBluetooth, "@brief Enum constant QNetworkConfiguration::BearerBluetooth") +
    gsi::enum_const ("BearerWiMAX", QNetworkConfiguration::BearerWiMAX, "@brief Enum constant QNetworkConfiguration::BearerWiMAX") +
    gsi::enum_const ("BearerEVDO", QNetworkConfiguration::BearerEVDO, "@brief Enum constant QNetworkConfiguration::BearerEVDO") +
    gsi::enum_const ("BearerLTE", QNetworkConfiguration::BearerLTE, "@brief Enum constant QNetworkConfiguration::BearerLTE") +
    gsi::enum_const ("Bearer3G", QNetworkConfiguration::Bearer3G, "@brief Enum constant QNetworkConfiguration::Bearer3G") +
    gsi::enum_const ("Bearer4G", QNetworkConfiguration::Bearer4G, "@brief Enum constant QNetworkConfiguration::Bearer4G"),
  "@qt\n@brief This class represents the QNetworkConfiguration::BearerType enum");

static gsi::QFlagsClass<QNetworkConfiguration::BearerType > decl_QNetworkConfiguration_BearerType_Enums ("QtNetwork", "QNetworkConfiguration_QFlags_BearerType",
  "@qt\n@brief This class represents the QFlags<QNetworkConfiguration::BearerType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkConfiguration> inject_QNetworkConfiguration_BearerType_Enum_in_parent (decl_QNetworkConfiguration_BearerType_Enum.defs ());
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_BearerType_Enum_as_child (decl_QNetworkConfiguration_BearerType_Enum, "BearerType");
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_BearerType_Enums_as_child (decl_QNetworkConfiguration_BearerType_Enums, "QFlags_BearerType");

}


//  Implementation of the enum wrapper class for QNetworkConfiguration::Purpose
namespace qt_gsi
{

static gsi::Enum<QNetworkConfiguration::Purpose> decl_QNetworkConfiguration_Purpose_Enum ("QtNetwork", "QNetworkConfiguration_Purpose",
    gsi::enum_const ("UnknownPurpose", QNetworkConfiguration::UnknownPurpose, "@brief Enum constant QNetworkConfiguration::UnknownPurpose") +
    gsi::enum_const ("PublicPurpose", QNetworkConfiguration::PublicPurpose, "@brief Enum constant QNetworkConfiguration::PublicPurpose") +
    gsi::enum_const ("PrivatePurpose", QNetworkConfiguration::PrivatePurpose, "@brief Enum constant QNetworkConfiguration::PrivatePurpose") +
    gsi::enum_const ("ServiceSpecificPurpose", QNetworkConfiguration::ServiceSpecificPurpose, "@brief Enum constant QNetworkConfiguration::ServiceSpecificPurpose"),
  "@qt\n@brief This class represents the QNetworkConfiguration::Purpose enum");

static gsi::QFlagsClass<QNetworkConfiguration::Purpose > decl_QNetworkConfiguration_Purpose_Enums ("QtNetwork", "QNetworkConfiguration_QFlags_Purpose",
  "@qt\n@brief This class represents the QFlags<QNetworkConfiguration::Purpose> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkConfiguration> inject_QNetworkConfiguration_Purpose_Enum_in_parent (decl_QNetworkConfiguration_Purpose_Enum.defs ());
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_Purpose_Enum_as_child (decl_QNetworkConfiguration_Purpose_Enum, "Purpose");
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_Purpose_Enums_as_child (decl_QNetworkConfiguration_Purpose_Enums, "QFlags_Purpose");

}


//  Implementation of the enum wrapper class for QNetworkConfiguration::StateFlag
namespace qt_gsi
{

static gsi::Enum<QNetworkConfiguration::StateFlag> decl_QNetworkConfiguration_StateFlag_Enum ("QtNetwork", "QNetworkConfiguration_StateFlag",
    gsi::enum_const ("Undefined", QNetworkConfiguration::Undefined, "@brief Enum constant QNetworkConfiguration::Undefined") +
    gsi::enum_const ("Defined", QNetworkConfiguration::Defined, "@brief Enum constant QNetworkConfiguration::Defined") +
    gsi::enum_const ("Discovered", QNetworkConfiguration::Discovered, "@brief Enum constant QNetworkConfiguration::Discovered") +
    gsi::enum_const ("Active", QNetworkConfiguration::Active, "@brief Enum constant QNetworkConfiguration::Active"),
  "@qt\n@brief This class represents the QNetworkConfiguration::StateFlag enum");

static gsi::QFlagsClass<QNetworkConfiguration::StateFlag > decl_QNetworkConfiguration_StateFlag_Enums ("QtNetwork", "QNetworkConfiguration_QFlags_StateFlag",
  "@qt\n@brief This class represents the QFlags<QNetworkConfiguration::StateFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkConfiguration> inject_QNetworkConfiguration_StateFlag_Enum_in_parent (decl_QNetworkConfiguration_StateFlag_Enum.defs ());
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_StateFlag_Enum_as_child (decl_QNetworkConfiguration_StateFlag_Enum, "StateFlag");
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_StateFlag_Enums_as_child (decl_QNetworkConfiguration_StateFlag_Enums, "QFlags_StateFlag");

}


//  Implementation of the enum wrapper class for QNetworkConfiguration::Type
namespace qt_gsi
{

static gsi::Enum<QNetworkConfiguration::Type> decl_QNetworkConfiguration_Type_Enum ("QtNetwork", "QNetworkConfiguration_Type",
    gsi::enum_const ("InternetAccessPoint", QNetworkConfiguration::InternetAccessPoint, "@brief Enum constant QNetworkConfiguration::InternetAccessPoint") +
    gsi::enum_const ("ServiceNetwork", QNetworkConfiguration::ServiceNetwork, "@brief Enum constant QNetworkConfiguration::ServiceNetwork") +
    gsi::enum_const ("UserChoice", QNetworkConfiguration::UserChoice, "@brief Enum constant QNetworkConfiguration::UserChoice") +
    gsi::enum_const ("Invalid", QNetworkConfiguration::Invalid, "@brief Enum constant QNetworkConfiguration::Invalid"),
  "@qt\n@brief This class represents the QNetworkConfiguration::Type enum");

static gsi::QFlagsClass<QNetworkConfiguration::Type > decl_QNetworkConfiguration_Type_Enums ("QtNetwork", "QNetworkConfiguration_QFlags_Type",
  "@qt\n@brief This class represents the QFlags<QNetworkConfiguration::Type> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QNetworkConfiguration> inject_QNetworkConfiguration_Type_Enum_in_parent (decl_QNetworkConfiguration_Type_Enum.defs ());
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_Type_Enum_as_child (decl_QNetworkConfiguration_Type_Enum, "Type");
static gsi::ClassExt<QNetworkConfiguration> decl_QNetworkConfiguration_Type_Enums_as_child (decl_QNetworkConfiguration_Type_Enums, "QFlags_Type");

}

