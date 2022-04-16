
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
*  @file gsiDeclQSslPreSharedKeyAuthenticator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslPreSharedKeyAuthenticator>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslPreSharedKeyAuthenticator

//  Constructor QSslPreSharedKeyAuthenticator::QSslPreSharedKeyAuthenticator()


static void _init_ctor_QSslPreSharedKeyAuthenticator_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSslPreSharedKeyAuthenticator> ();
}

static void _call_ctor_QSslPreSharedKeyAuthenticator_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslPreSharedKeyAuthenticator *> (new QSslPreSharedKeyAuthenticator ());
}


//  Constructor QSslPreSharedKeyAuthenticator::QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator &authenticator)


static void _init_ctor_QSslPreSharedKeyAuthenticator_4262 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("authenticator");
  decl->add_arg<const QSslPreSharedKeyAuthenticator & > (argspec_0);
  decl->set_return_new<QSslPreSharedKeyAuthenticator> ();
}

static void _call_ctor_QSslPreSharedKeyAuthenticator_4262 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslPreSharedKeyAuthenticator &arg1 = gsi::arg_reader<const QSslPreSharedKeyAuthenticator & >() (args, heap);
  ret.write<QSslPreSharedKeyAuthenticator *> (new QSslPreSharedKeyAuthenticator (arg1));
}


// QByteArray QSslPreSharedKeyAuthenticator::identity()


static void _init_f_identity_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_identity_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslPreSharedKeyAuthenticator *)cls)->identity ());
}


// QByteArray QSslPreSharedKeyAuthenticator::identityHint()


static void _init_f_identityHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_identityHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslPreSharedKeyAuthenticator *)cls)->identityHint ());
}


// int QSslPreSharedKeyAuthenticator::maximumIdentityLength()


static void _init_f_maximumIdentityLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_maximumIdentityLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSslPreSharedKeyAuthenticator *)cls)->maximumIdentityLength ());
}


// int QSslPreSharedKeyAuthenticator::maximumPreSharedKeyLength()


static void _init_f_maximumPreSharedKeyLength_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_maximumPreSharedKeyLength_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QSslPreSharedKeyAuthenticator *)cls)->maximumPreSharedKeyLength ());
}


// QSslPreSharedKeyAuthenticator &QSslPreSharedKeyAuthenticator::operator=(const QSslPreSharedKeyAuthenticator &authenticator)


static void _init_f_operator_eq__4262 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("authenticator");
  decl->add_arg<const QSslPreSharedKeyAuthenticator & > (argspec_0);
  decl->set_return<QSslPreSharedKeyAuthenticator & > ();
}

static void _call_f_operator_eq__4262 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslPreSharedKeyAuthenticator &arg1 = gsi::arg_reader<const QSslPreSharedKeyAuthenticator & >() (args, heap);
  ret.write<QSslPreSharedKeyAuthenticator & > ((QSslPreSharedKeyAuthenticator &)((QSslPreSharedKeyAuthenticator *)cls)->operator= (arg1));
}


// QByteArray QSslPreSharedKeyAuthenticator::preSharedKey()


static void _init_f_preSharedKey_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_preSharedKey_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QSslPreSharedKeyAuthenticator *)cls)->preSharedKey ());
}


// void QSslPreSharedKeyAuthenticator::setIdentity(const QByteArray &identity)


static void _init_f_setIdentity_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("identity");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIdentity_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslPreSharedKeyAuthenticator *)cls)->setIdentity (arg1);
}


// void QSslPreSharedKeyAuthenticator::setPreSharedKey(const QByteArray &preSharedKey)


static void _init_f_setPreSharedKey_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("preSharedKey");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPreSharedKey_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslPreSharedKeyAuthenticator *)cls)->setPreSharedKey (arg1);
}


// void QSslPreSharedKeyAuthenticator::swap(QSslPreSharedKeyAuthenticator &other)


static void _init_f_swap_3567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QSslPreSharedKeyAuthenticator & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_3567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSslPreSharedKeyAuthenticator &arg1 = gsi::arg_reader<QSslPreSharedKeyAuthenticator & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslPreSharedKeyAuthenticator *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QSslPreSharedKeyAuthenticator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslPreSharedKeyAuthenticator::QSslPreSharedKeyAuthenticator()\nThis method creates an object of class QSslPreSharedKeyAuthenticator.", &_init_ctor_QSslPreSharedKeyAuthenticator_0, &_call_ctor_QSslPreSharedKeyAuthenticator_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslPreSharedKeyAuthenticator::QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator &authenticator)\nThis method creates an object of class QSslPreSharedKeyAuthenticator.", &_init_ctor_QSslPreSharedKeyAuthenticator_4262, &_call_ctor_QSslPreSharedKeyAuthenticator_4262);
  methods += new qt_gsi::GenericMethod (":identity", "@brief Method QByteArray QSslPreSharedKeyAuthenticator::identity()\n", true, &_init_f_identity_c0, &_call_f_identity_c0);
  methods += new qt_gsi::GenericMethod ("identityHint", "@brief Method QByteArray QSslPreSharedKeyAuthenticator::identityHint()\n", true, &_init_f_identityHint_c0, &_call_f_identityHint_c0);
  methods += new qt_gsi::GenericMethod ("maximumIdentityLength", "@brief Method int QSslPreSharedKeyAuthenticator::maximumIdentityLength()\n", true, &_init_f_maximumIdentityLength_c0, &_call_f_maximumIdentityLength_c0);
  methods += new qt_gsi::GenericMethod ("maximumPreSharedKeyLength", "@brief Method int QSslPreSharedKeyAuthenticator::maximumPreSharedKeyLength()\n", true, &_init_f_maximumPreSharedKeyLength_c0, &_call_f_maximumPreSharedKeyLength_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSslPreSharedKeyAuthenticator &QSslPreSharedKeyAuthenticator::operator=(const QSslPreSharedKeyAuthenticator &authenticator)\n", false, &_init_f_operator_eq__4262, &_call_f_operator_eq__4262);
  methods += new qt_gsi::GenericMethod (":preSharedKey", "@brief Method QByteArray QSslPreSharedKeyAuthenticator::preSharedKey()\n", true, &_init_f_preSharedKey_c0, &_call_f_preSharedKey_c0);
  methods += new qt_gsi::GenericMethod ("setIdentity|identity=", "@brief Method void QSslPreSharedKeyAuthenticator::setIdentity(const QByteArray &identity)\n", false, &_init_f_setIdentity_2309, &_call_f_setIdentity_2309);
  methods += new qt_gsi::GenericMethod ("setPreSharedKey|preSharedKey=", "@brief Method void QSslPreSharedKeyAuthenticator::setPreSharedKey(const QByteArray &preSharedKey)\n", false, &_init_f_setPreSharedKey_2309, &_call_f_setPreSharedKey_2309);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QSslPreSharedKeyAuthenticator::swap(QSslPreSharedKeyAuthenticator &other)\n", false, &_init_f_swap_3567, &_call_f_swap_3567);
  return methods;
}

gsi::Class<QSslPreSharedKeyAuthenticator> decl_QSslPreSharedKeyAuthenticator ("QtNetwork", "QSslPreSharedKeyAuthenticator",
  methods_QSslPreSharedKeyAuthenticator (),
  "@qt\n@brief Binding of QSslPreSharedKeyAuthenticator");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslPreSharedKeyAuthenticator> &qtdecl_QSslPreSharedKeyAuthenticator () { return decl_QSslPreSharedKeyAuthenticator; }

}

