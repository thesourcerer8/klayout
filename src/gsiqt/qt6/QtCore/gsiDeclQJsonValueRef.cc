
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
*  @file gsiDeclQJsonValueRef.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QJsonValueRef>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonValue>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QJsonValueRef

//  Constructor QJsonValueRef::QJsonValueRef(QJsonArray *array, qsizetype idx)


static void _init_ctor_QJsonValueRef_2958 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("array");
  decl->add_arg<QJsonArray * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("idx");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return_new<QJsonValueRef> ();
}

static void _call_ctor_QJsonValueRef_2958 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonArray *arg1 = gsi::arg_reader<QJsonArray * >() (args, heap);
  qsizetype arg2 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QJsonValueRef *> (new QJsonValueRef (arg1, arg2));
}


//  Constructor QJsonValueRef::QJsonValueRef(QJsonObject *object, qsizetype idx)


static void _init_ctor_QJsonValueRef_3046 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QJsonObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("idx");
  decl->add_arg<qsizetype > (argspec_1);
  decl->set_return_new<QJsonValueRef> ();
}

static void _call_ctor_QJsonValueRef_3046 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QJsonObject *arg1 = gsi::arg_reader<QJsonObject * >() (args, heap);
  qsizetype arg2 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<QJsonValueRef *> (new QJsonValueRef (arg1, arg2));
}


//  Constructor QJsonValueRef::QJsonValueRef(const QJsonValueRef &)


static void _init_ctor_QJsonValueRef_2598 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QJsonValueRef & > (argspec_0);
  decl->set_return_new<QJsonValueRef> ();
}

static void _call_ctor_QJsonValueRef_2598 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValueRef &arg1 = gsi::arg_reader<const QJsonValueRef & >() (args, heap);
  ret.write<QJsonValueRef *> (new QJsonValueRef (arg1));
}


// bool QJsonValueRef::isArray()


static void _init_f_isArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isArray ());
}


// bool QJsonValueRef::isBool()


static void _init_f_isBool_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBool_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isBool ());
}


// bool QJsonValueRef::isDouble()


static void _init_f_isDouble_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDouble_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isDouble ());
}


// bool QJsonValueRef::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isNull ());
}


// bool QJsonValueRef::isObject()


static void _init_f_isObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isObject ());
}


// bool QJsonValueRef::isString()


static void _init_f_isString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isString ());
}


// bool QJsonValueRef::isUndefined()


static void _init_f_isUndefined_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUndefined_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->isUndefined ());
}


// QJsonValueRef &QJsonValueRef::operator =(const QJsonValue &val)


static void _init_f_operator_eq__2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("val");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<QJsonValueRef & > ();
}

static void _call_f_operator_eq__2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<QJsonValueRef & > ((QJsonValueRef &)((QJsonValueRef *)cls)->operator = (arg1));
}


// QJsonValueRef &QJsonValueRef::operator =(const QJsonValueRef &val)


static void _init_f_operator_eq__2598 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("val");
  decl->add_arg<const QJsonValueRef & > (argspec_0);
  decl->set_return<QJsonValueRef & > ();
}

static void _call_f_operator_eq__2598 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValueRef &arg1 = gsi::arg_reader<const QJsonValueRef & >() (args, heap);
  ret.write<QJsonValueRef & > ((QJsonValueRef &)((QJsonValueRef *)cls)->operator = (arg1));
}


// bool QJsonValueRef::operator!=(const QJsonValue &other)


static void _init_f_operator_excl__eq__c2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->operator!= (arg1));
}


// bool QJsonValueRef::operator==(const QJsonValue &other)


static void _init_f_operator_eq__eq__c2313 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QJsonValue & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2313 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QJsonValue &arg1 = gsi::arg_reader<const QJsonValue & >() (args, heap);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->operator== (arg1));
}


// const QJsonValue QJsonValueRef::operator[](QStringView key)


static void _init_f_operator_index__c1559 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<QStringView > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c1559 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QStringView arg1 = gsi::arg_reader<QStringView >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonValueRef *)cls)->operator[] (arg1));
}


// const QJsonValue QJsonValueRef::operator[](QLatin1String key)


static void _init_f_operator_index__c1701 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<QLatin1String > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c1701 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QLatin1String arg1 = gsi::arg_reader<QLatin1String >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonValueRef *)cls)->operator[] (arg1));
}


// const QJsonValue QJsonValueRef::operator[](qsizetype i)


static void _init_f_operator_index__c1442 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("i");
  decl->add_arg<qsizetype > (argspec_0);
  decl->set_return<const QJsonValue > ();
}

static void _call_f_operator_index__c1442 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qsizetype arg1 = gsi::arg_reader<qsizetype >() (args, heap);
  ret.write<const QJsonValue > ((const QJsonValue)((QJsonValueRef *)cls)->operator[] (arg1));
}


// QJsonArray QJsonValueRef::toArray()


static void _init_f_toArray_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonArray > ();
}

static void _call_f_toArray_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonArray > ((QJsonArray)((QJsonValueRef *)cls)->toArray ());
}


// bool QJsonValueRef::toBool(bool defaultValue)


static void _init_f_toBool_c864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "false");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_toBool_c864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (false, heap);
  ret.write<bool > ((bool)((QJsonValueRef *)cls)->toBool (arg1));
}


// double QJsonValueRef::toDouble(double defaultValue)


static void _init_f_toDouble_c1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "0");
  decl->add_arg<double > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_toDouble_c1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = args ? gsi::arg_reader<double >() (args, heap) : gsi::arg_maker<double >() (0, heap);
  ret.write<double > ((double)((QJsonValueRef *)cls)->toDouble (arg1));
}


// int QJsonValueRef::toInt(int defaultValue)


static void _init_f_toInt_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_toInt_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<int > ((int)((QJsonValueRef *)cls)->toInt (arg1));
}


// qint64 QJsonValueRef::toInteger(qint64 defaultValue)


static void _init_f_toInteger_c986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "0");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_toInteger_c986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args ? gsi::arg_reader<qint64 >() (args, heap) : gsi::arg_maker<qint64 >() (0, heap);
  ret.write<qint64 > ((qint64)((QJsonValueRef *)cls)->toInteger (arg1));
}


// QJsonObject QJsonValueRef::toObject()


static void _init_f_toObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject > ();
}

static void _call_f_toObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject > ((QJsonObject)((QJsonValueRef *)cls)->toObject ());
}


// QString QJsonValueRef::toString(const QString &defaultValue)


static void _init_f_toString_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("defaultValue", true, "{}");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toString_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() ({}, heap);
  ret.write<QString > ((QString)((QJsonValueRef *)cls)->toString (arg1));
}


// QVariant QJsonValueRef::toVariant()


static void _init_f_toVariant_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_toVariant_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QJsonValueRef *)cls)->toVariant ());
}


// QJsonValue::Type QJsonValueRef::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QJsonValue::Type>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QJsonValue::Type>::target_type > ((qt_gsi::Converter<QJsonValue::Type>::target_type)qt_gsi::CppToQtAdaptor<QJsonValue::Type>(((QJsonValueRef *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QJsonValueRef () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValueRef::QJsonValueRef(QJsonArray *array, qsizetype idx)\nThis method creates an object of class QJsonValueRef.", &_init_ctor_QJsonValueRef_2958, &_call_ctor_QJsonValueRef_2958);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValueRef::QJsonValueRef(QJsonObject *object, qsizetype idx)\nThis method creates an object of class QJsonValueRef.", &_init_ctor_QJsonValueRef_3046, &_call_ctor_QJsonValueRef_3046);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QJsonValueRef::QJsonValueRef(const QJsonValueRef &)\nThis method creates an object of class QJsonValueRef.", &_init_ctor_QJsonValueRef_2598, &_call_ctor_QJsonValueRef_2598);
  methods += new qt_gsi::GenericMethod ("isArray?", "@brief Method bool QJsonValueRef::isArray()\n", true, &_init_f_isArray_c0, &_call_f_isArray_c0);
  methods += new qt_gsi::GenericMethod ("isBool?", "@brief Method bool QJsonValueRef::isBool()\n", true, &_init_f_isBool_c0, &_call_f_isBool_c0);
  methods += new qt_gsi::GenericMethod ("isDouble?", "@brief Method bool QJsonValueRef::isDouble()\n", true, &_init_f_isDouble_c0, &_call_f_isDouble_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QJsonValueRef::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isObject?", "@brief Method bool QJsonValueRef::isObject()\n", true, &_init_f_isObject_c0, &_call_f_isObject_c0);
  methods += new qt_gsi::GenericMethod ("isString?", "@brief Method bool QJsonValueRef::isString()\n", true, &_init_f_isString_c0, &_call_f_isString_c0);
  methods += new qt_gsi::GenericMethod ("isUndefined?", "@brief Method bool QJsonValueRef::isUndefined()\n", true, &_init_f_isUndefined_c0, &_call_f_isUndefined_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QJsonValueRef &QJsonValueRef::operator =(const QJsonValue &val)\n", false, &_init_f_operator_eq__2313, &_call_f_operator_eq__2313);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QJsonValueRef &QJsonValueRef::operator =(const QJsonValueRef &val)\n", false, &_init_f_operator_eq__2598, &_call_f_operator_eq__2598);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QJsonValueRef::operator!=(const QJsonValue &other)\n", true, &_init_f_operator_excl__eq__c2313, &_call_f_operator_excl__eq__c2313);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QJsonValueRef::operator==(const QJsonValue &other)\n", true, &_init_f_operator_eq__eq__c2313, &_call_f_operator_eq__eq__c2313);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonValueRef::operator[](QStringView key)\n", true, &_init_f_operator_index__c1559, &_call_f_operator_index__c1559);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonValueRef::operator[](QLatin1String key)\n", true, &_init_f_operator_index__c1701, &_call_f_operator_index__c1701);
  methods += new qt_gsi::GenericMethod ("[]", "@brief Method const QJsonValue QJsonValueRef::operator[](qsizetype i)\n", true, &_init_f_operator_index__c1442, &_call_f_operator_index__c1442);
  methods += new qt_gsi::GenericMethod ("toArray", "@brief Method QJsonArray QJsonValueRef::toArray()\n", true, &_init_f_toArray_c0, &_call_f_toArray_c0);
  methods += new qt_gsi::GenericMethod ("toBool", "@brief Method bool QJsonValueRef::toBool(bool defaultValue)\n", true, &_init_f_toBool_c864, &_call_f_toBool_c864);
  methods += new qt_gsi::GenericMethod ("toDouble", "@brief Method double QJsonValueRef::toDouble(double defaultValue)\n", true, &_init_f_toDouble_c1071, &_call_f_toDouble_c1071);
  methods += new qt_gsi::GenericMethod ("toInt", "@brief Method int QJsonValueRef::toInt(int defaultValue)\n", true, &_init_f_toInt_c767, &_call_f_toInt_c767);
  methods += new qt_gsi::GenericMethod ("toInteger", "@brief Method qint64 QJsonValueRef::toInteger(qint64 defaultValue)\n", true, &_init_f_toInteger_c986, &_call_f_toInteger_c986);
  methods += new qt_gsi::GenericMethod ("toObject", "@brief Method QJsonObject QJsonValueRef::toObject()\n", true, &_init_f_toObject_c0, &_call_f_toObject_c0);
  methods += new qt_gsi::GenericMethod ("toString", "@brief Method QString QJsonValueRef::toString(const QString &defaultValue)\n", true, &_init_f_toString_c2025, &_call_f_toString_c2025);
  methods += new qt_gsi::GenericMethod ("toVariant", "@brief Method QVariant QJsonValueRef::toVariant()\n", true, &_init_f_toVariant_c0, &_call_f_toVariant_c0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QJsonValue::Type QJsonValueRef::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QJsonValueRef> decl_QJsonValueRef ("QtCore", "QJsonValueRef",
  methods_QJsonValueRef (),
  "@qt\n@brief Binding of QJsonValueRef");


GSI_QTCORE_PUBLIC gsi::Class<QJsonValueRef> &qtdecl_QJsonValueRef () { return decl_QJsonValueRef; }

}

