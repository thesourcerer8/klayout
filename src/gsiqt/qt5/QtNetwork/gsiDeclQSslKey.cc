
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
*  @file gsiDeclQSslKey.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslKey>
#include <QIODevice>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslKey

//  Constructor QSslKey::QSslKey()


static void _init_ctor_QSslKey_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSslKey> ();
}

static void _call_ctor_QSslKey_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslKey *> (new QSslKey ());
}


//  Constructor QSslKey::QSslKey(const QByteArray &encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray &passPhrase)


static void _init_ctor_QSslKey_10374 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("encoded");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("algorithm");
  decl->add_arg<const qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("type", true, "QSsl::PrivateKey");
  decl->add_arg<const qt_gsi::Converter<QSsl::KeyType>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("passPhrase", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_4);
  decl->set_return_new<QSslKey> ();
}

static void _call_ctor_QSslKey_10374 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type & >() (args, heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  const qt_gsi::Converter<QSsl::KeyType>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::KeyType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::KeyType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::KeyType>(heap, QSsl::PrivateKey), heap);
  const QByteArray &arg5 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QSslKey *> (new QSslKey (arg1, qt_gsi::QtToCppAdaptor<QSsl::KeyAlgorithm>(arg2).cref(), qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg3).cref(), qt_gsi::QtToCppAdaptor<QSsl::KeyType>(arg4).cref(), arg5));
}


//  Constructor QSslKey::QSslKey(QIODevice *device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray &passPhrase)


static void _init_ctor_QSslKey_9512 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("device");
  decl->add_arg<QIODevice * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("algorithm");
  decl->add_arg<const qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("format", true, "QSsl::Pem");
  decl->add_arg<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("type", true, "QSsl::PrivateKey");
  decl->add_arg<const qt_gsi::Converter<QSsl::KeyType>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("passPhrase", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_4);
  decl->set_return_new<QSslKey> ();
}

static void _call_ctor_QSslKey_9512 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QIODevice *arg1 = gsi::arg_reader<QIODevice * >() (args, heap);
  const qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type & >() (args, heap);
  const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::EncodingFormat>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::EncodingFormat>(heap, QSsl::Pem), heap);
  const qt_gsi::Converter<QSsl::KeyType>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::KeyType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::KeyType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::KeyType>(heap, QSsl::PrivateKey), heap);
  const QByteArray &arg5 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QSslKey *> (new QSslKey (arg1, qt_gsi::QtToCppAdaptor<QSsl::KeyAlgorithm>(arg2).cref(), qt_gsi::QtToCppAdaptor<QSsl::EncodingFormat>(arg3).cref(), qt_gsi::QtToCppAdaptor<QSsl::KeyType>(arg4).cref(), arg5));
}


//  Constructor QSslKey::QSslKey(Qt::HANDLE handle, QSsl::KeyType type)


static void _init_ctor_QSslKey_2723 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("handle");
  decl->add_arg<Qt::HANDLE > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("type", true, "QSsl::PrivateKey");
  decl->add_arg<const qt_gsi::Converter<QSsl::KeyType>::target_type & > (argspec_1);
  decl->set_return_new<QSslKey> ();
}

static void _call_ctor_QSslKey_2723 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  Qt::HANDLE arg1 = gsi::arg_reader<Qt::HANDLE >() (args, heap);
  const qt_gsi::Converter<QSsl::KeyType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QSsl::KeyType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QSsl::KeyType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QSsl::KeyType>(heap, QSsl::PrivateKey), heap);
  ret.write<QSslKey *> (new QSslKey (arg1, qt_gsi::QtToCppAdaptor<QSsl::KeyType>(arg2).cref()));
}


//  Constructor QSslKey::QSslKey(const QSslKey &other)


static void _init_ctor_QSslKey_1997 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslKey & > (argspec_0);
  decl->set_return_new<QSslKey> ();
}

static void _call_ctor_QSslKey_1997 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslKey &arg1 = gsi::arg_reader<const QSslKey & >() (args, heap);
  ret.write<QSslKey *> (new QSslKey (arg1));
}


// QSsl::KeyAlgorithm QSslKey::algorithm()


static void _init_f_algorithm_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type > ();
}

static void _call_f_algorithm_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type > ((qt_gsi::Converter<QSsl::KeyAlgorithm>::target_type)qt_gsi::CppToQtAdaptor<QSsl::KeyAlgorithm>(((QSslKey *)cls)->algorithm ()));
}


// void QSslKey::clear()


static void _init_f_clear_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslKey *)cls)->clear ();
}


// Qt::HANDLE QSslKey::handle()


static void _init_f_handle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<Qt::HANDLE > ();
}

static void _call_f_handle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<Qt::HANDLE > ((Qt::HANDLE)((QSslKey *)cls)->handle ());
}


// bool QSslKey::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSslKey *)cls)->isNull ());
}


// int QSslKey::length()


static void _init_f_length_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_length_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSslKey *)cls)->length ());
}


// bool QSslKey::operator!=(const QSslKey &key)


static void _init_f_operator_excl__eq__c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QSslKey & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslKey &arg1 = gsi::arg_reader<const QSslKey & >() (args, heap);
  ret.write<bool > ((bool)((QSslKey *)cls)->operator!= (arg1));
}


// QSslKey &QSslKey::operator=(const QSslKey &other)


static void _init_f_operator_eq__1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslKey & > (argspec_0);
  decl->set_return<QSslKey & > ();
}

static void _call_f_operator_eq__1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslKey &arg1 = gsi::arg_reader<const QSslKey & >() (args, heap);
  ret.write<QSslKey & > ((QSslKey &)((QSslKey *)cls)->operator= (arg1));
}


// bool QSslKey::operator==(const QSslKey &key)


static void _init_f_operator_eq__eq__c1997 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QSslKey & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c1997 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslKey &arg1 = gsi::arg_reader<const QSslKey & >() (args, heap);
  ret.write<bool > ((bool)((QSslKey *)cls)->operator== (arg1));
}


// void QSslKey::swap(QSslKey &other)


static void _init_f_swap_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QSslKey & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSslKey &arg1 = gsi::arg_reader<QSslKey & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslKey *)cls)->swap (arg1);
}


// QByteArray QSslKey::toDer(const QByteArray &passPhrase)


static void _init_f_toDer_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("passPhrase", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_toDer_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QByteArray > ((QByteArray)((QSslKey *)cls)->toDer (arg1));
}


// QByteArray QSslKey::toPem(const QByteArray &passPhrase)


static void _init_f_toPem_c2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("passPhrase", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_toPem_c2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QByteArray > ((QByteArray)((QSslKey *)cls)->toPem (arg1));
}


// QSsl::KeyType QSslKey::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSsl::KeyType>::target_type > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSsl::KeyType>::target_type > ((qt_gsi::Converter<QSsl::KeyType>::target_type)qt_gsi::CppToQtAdaptor<QSsl::KeyType>(((QSslKey *)cls)->type ()));
}



namespace gsi
{

static gsi::Methods methods_QSslKey () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslKey::QSslKey()\nThis method creates an object of class QSslKey.", &_init_ctor_QSslKey_0, &_call_ctor_QSslKey_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslKey::QSslKey(const QByteArray &encoded, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray &passPhrase)\nThis method creates an object of class QSslKey.", &_init_ctor_QSslKey_10374, &_call_ctor_QSslKey_10374);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslKey::QSslKey(QIODevice *device, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format, QSsl::KeyType type, const QByteArray &passPhrase)\nThis method creates an object of class QSslKey.", &_init_ctor_QSslKey_9512, &_call_ctor_QSslKey_9512);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslKey::QSslKey(Qt::HANDLE handle, QSsl::KeyType type)\nThis method creates an object of class QSslKey.", &_init_ctor_QSslKey_2723, &_call_ctor_QSslKey_2723);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslKey::QSslKey(const QSslKey &other)\nThis method creates an object of class QSslKey.", &_init_ctor_QSslKey_1997, &_call_ctor_QSslKey_1997);
  methods += new qt_gsi::GenericMethod ("algorithm", "@brief Method QSsl::KeyAlgorithm QSslKey::algorithm()\n", true, &_init_f_algorithm_c0, &_call_f_algorithm_c0);
  methods += new qt_gsi::GenericMethod ("clear", "@brief Method void QSslKey::clear()\n", false, &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericMethod ("handle", "@brief Method Qt::HANDLE QSslKey::handle()\n", true, &_init_f_handle_c0, &_call_f_handle_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSslKey::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("length", "@brief Method int QSslKey::length()\n", true, &_init_f_length_c0, &_call_f_length_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSslKey::operator!=(const QSslKey &key)\n", true, &_init_f_operator_excl__eq__c1997, &_call_f_operator_excl__eq__c1997);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSslKey &QSslKey::operator=(const QSslKey &other)\n", false, &_init_f_operator_eq__1997, &_call_f_operator_eq__1997);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSslKey::operator==(const QSslKey &key)\n", true, &_init_f_operator_eq__eq__c1997, &_call_f_operator_eq__eq__c1997);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QSslKey::swap(QSslKey &other)\n", false, &_init_f_swap_1302, &_call_f_swap_1302);
  methods += new qt_gsi::GenericMethod ("toDer", "@brief Method QByteArray QSslKey::toDer(const QByteArray &passPhrase)\n", true, &_init_f_toDer_c2309, &_call_f_toDer_c2309);
  methods += new qt_gsi::GenericMethod ("toPem", "@brief Method QByteArray QSslKey::toPem(const QByteArray &passPhrase)\n", true, &_init_f_toPem_c2309, &_call_f_toPem_c2309);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method QSsl::KeyType QSslKey::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QSslKey> decl_QSslKey ("QtNetwork", "QSslKey",
  methods_QSslKey (),
  "@qt\n@brief Binding of QSslKey");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslKey> &qtdecl_QSslKey () { return decl_QSslKey; }

}

