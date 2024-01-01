
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
*  @file gsiDeclQHstsPolicy.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHstsPolicy>
#include <QDateTime>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHstsPolicy

//  Constructor QHstsPolicy::QHstsPolicy()


static void _init_ctor_QHstsPolicy_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QHstsPolicy> ();
}

static void _call_ctor_QHstsPolicy_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QHstsPolicy *> (new QHstsPolicy ());
}


//  Constructor QHstsPolicy::QHstsPolicy(const QDateTime &expiry, QFlags<QHstsPolicy::PolicyFlag> flags, const QString &host, QUrl::ParsingMode mode)


static void _init_ctor_QHstsPolicy_9302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("expiry");
  decl->add_arg<const QDateTime & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("flags");
  decl->add_arg<QFlags<QHstsPolicy::PolicyFlag> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("host");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("mode", true, "QUrl::DecodedMode");
  decl->add_arg<const qt_gsi::Converter<QUrl::ParsingMode>::target_type & > (argspec_3);
  decl->set_return_new<QHstsPolicy> ();
}

static void _call_ctor_QHstsPolicy_9302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  QFlags<QHstsPolicy::PolicyFlag> arg2 = gsi::arg_reader<QFlags<QHstsPolicy::PolicyFlag> >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<QUrl::ParsingMode>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<QUrl::ParsingMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QUrl::ParsingMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QUrl::ParsingMode>(heap, QUrl::DecodedMode), heap);
  ret.write<QHstsPolicy *> (new QHstsPolicy (arg1, arg2, arg3, qt_gsi::QtToCppAdaptor<QUrl::ParsingMode>(arg4).cref()));
}


//  Constructor QHstsPolicy::QHstsPolicy(const QHstsPolicy &rhs)


static void _init_ctor_QHstsPolicy_2436 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QHstsPolicy & > (argspec_0);
  decl->set_return_new<QHstsPolicy> ();
}

static void _call_ctor_QHstsPolicy_2436 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHstsPolicy &arg1 = gsi::arg_reader<const QHstsPolicy & >() (args, heap);
  ret.write<QHstsPolicy *> (new QHstsPolicy (arg1));
}


// QDateTime QHstsPolicy::expiry()


static void _init_f_expiry_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDateTime > ();
}

static void _call_f_expiry_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDateTime > ((QDateTime)((QHstsPolicy *)cls)->expiry ());
}


// QString QHstsPolicy::host(QFlags<QUrl::ComponentFormattingOption> options)


static void _init_f_host_c4267 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("options", true, "QUrl::FullyDecoded");
  decl->add_arg<QFlags<QUrl::ComponentFormattingOption> > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_host_c4267 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QUrl::ComponentFormattingOption> arg1 = args ? gsi::arg_reader<QFlags<QUrl::ComponentFormattingOption> >() (args, heap) : gsi::arg_maker<QFlags<QUrl::ComponentFormattingOption> >() (QUrl::FullyDecoded, heap);
  ret.write<QString > ((QString)((QHstsPolicy *)cls)->host (arg1));
}


// bool QHstsPolicy::includesSubDomains()


static void _init_f_includesSubDomains_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_includesSubDomains_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHstsPolicy *)cls)->includesSubDomains ());
}


// bool QHstsPolicy::isExpired()


static void _init_f_isExpired_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isExpired_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QHstsPolicy *)cls)->isExpired ());
}


// QHstsPolicy &QHstsPolicy::operator=(const QHstsPolicy &rhs)


static void _init_f_operator_eq__2436 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QHstsPolicy & > (argspec_0);
  decl->set_return<QHstsPolicy & > ();
}

static void _call_f_operator_eq__2436 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHstsPolicy &arg1 = gsi::arg_reader<const QHstsPolicy & >() (args, heap);
  ret.write<QHstsPolicy & > ((QHstsPolicy &)((QHstsPolicy *)cls)->operator= (arg1));
}


// void QHstsPolicy::setExpiry(const QDateTime &expiry)


static void _init_f_setExpiry_2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("expiry");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setExpiry_2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHstsPolicy *)cls)->setExpiry (arg1);
}


// void QHstsPolicy::setHost(const QString &host, QUrl::ParsingMode mode)


static void _init_f_setHost_3970 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("host");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode", true, "QUrl::DecodedMode");
  decl->add_arg<const qt_gsi::Converter<QUrl::ParsingMode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setHost_3970 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const qt_gsi::Converter<QUrl::ParsingMode>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QUrl::ParsingMode>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QUrl::ParsingMode>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QUrl::ParsingMode>(heap, QUrl::DecodedMode), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHstsPolicy *)cls)->setHost (arg1, qt_gsi::QtToCppAdaptor<QUrl::ParsingMode>(arg2).cref());
}


// void QHstsPolicy::setIncludesSubDomains(bool include)


static void _init_f_setIncludesSubDomains_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("include");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIncludesSubDomains_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHstsPolicy *)cls)->setIncludesSubDomains (arg1);
}


// void QHstsPolicy::swap(QHstsPolicy &other)


static void _init_f_swap_1741 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QHstsPolicy & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1741 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QHstsPolicy &arg1 = gsi::arg_reader<QHstsPolicy & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHstsPolicy *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QHstsPolicy () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHstsPolicy::QHstsPolicy()\nThis method creates an object of class QHstsPolicy.", &_init_ctor_QHstsPolicy_0, &_call_ctor_QHstsPolicy_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHstsPolicy::QHstsPolicy(const QDateTime &expiry, QFlags<QHstsPolicy::PolicyFlag> flags, const QString &host, QUrl::ParsingMode mode)\nThis method creates an object of class QHstsPolicy.", &_init_ctor_QHstsPolicy_9302, &_call_ctor_QHstsPolicy_9302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHstsPolicy::QHstsPolicy(const QHstsPolicy &rhs)\nThis method creates an object of class QHstsPolicy.", &_init_ctor_QHstsPolicy_2436, &_call_ctor_QHstsPolicy_2436);
  methods += new qt_gsi::GenericMethod ("expiry", "@brief Method QDateTime QHstsPolicy::expiry()\n", true, &_init_f_expiry_c0, &_call_f_expiry_c0);
  methods += new qt_gsi::GenericMethod ("host", "@brief Method QString QHstsPolicy::host(QFlags<QUrl::ComponentFormattingOption> options)\n", true, &_init_f_host_c4267, &_call_f_host_c4267);
  methods += new qt_gsi::GenericMethod ("includesSubDomains", "@brief Method bool QHstsPolicy::includesSubDomains()\n", true, &_init_f_includesSubDomains_c0, &_call_f_includesSubDomains_c0);
  methods += new qt_gsi::GenericMethod ("isExpired?", "@brief Method bool QHstsPolicy::isExpired()\n", true, &_init_f_isExpired_c0, &_call_f_isExpired_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QHstsPolicy &QHstsPolicy::operator=(const QHstsPolicy &rhs)\n", false, &_init_f_operator_eq__2436, &_call_f_operator_eq__2436);
  methods += new qt_gsi::GenericMethod ("setExpiry", "@brief Method void QHstsPolicy::setExpiry(const QDateTime &expiry)\n", false, &_init_f_setExpiry_2175, &_call_f_setExpiry_2175);
  methods += new qt_gsi::GenericMethod ("setHost", "@brief Method void QHstsPolicy::setHost(const QString &host, QUrl::ParsingMode mode)\n", false, &_init_f_setHost_3970, &_call_f_setHost_3970);
  methods += new qt_gsi::GenericMethod ("setIncludesSubDomains", "@brief Method void QHstsPolicy::setIncludesSubDomains(bool include)\n", false, &_init_f_setIncludesSubDomains_864, &_call_f_setIncludesSubDomains_864);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QHstsPolicy::swap(QHstsPolicy &other)\n", false, &_init_f_swap_1741, &_call_f_swap_1741);
  return methods;
}

gsi::Class<QHstsPolicy> decl_QHstsPolicy ("QtNetwork", "QHstsPolicy",
  methods_QHstsPolicy (),
  "@qt\n@brief Binding of QHstsPolicy");


GSI_QTNETWORK_PUBLIC gsi::Class<QHstsPolicy> &qtdecl_QHstsPolicy () { return decl_QHstsPolicy; }

}


//  Implementation of the enum wrapper class for QHstsPolicy::PolicyFlag
namespace qt_gsi
{

static gsi::Enum<QHstsPolicy::PolicyFlag> decl_QHstsPolicy_PolicyFlag_Enum ("QtNetwork", "QHstsPolicy_PolicyFlag",
    gsi::enum_const ("IncludeSubDomains", QHstsPolicy::IncludeSubDomains, "@brief Enum constant QHstsPolicy::IncludeSubDomains"),
  "@qt\n@brief This class represents the QHstsPolicy::PolicyFlag enum");

static gsi::QFlagsClass<QHstsPolicy::PolicyFlag > decl_QHstsPolicy_PolicyFlag_Enums ("QtNetwork", "QHstsPolicy_QFlags_PolicyFlag",
  "@qt\n@brief This class represents the QFlags<QHstsPolicy::PolicyFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHstsPolicy> inject_QHstsPolicy_PolicyFlag_Enum_in_parent (decl_QHstsPolicy_PolicyFlag_Enum.defs ());
static gsi::ClassExt<QHstsPolicy> decl_QHstsPolicy_PolicyFlag_Enum_as_child (decl_QHstsPolicy_PolicyFlag_Enum, "PolicyFlag");
static gsi::ClassExt<QHstsPolicy> decl_QHstsPolicy_PolicyFlag_Enums_as_child (decl_QHstsPolicy_PolicyFlag_Enums, "QFlags_PolicyFlag");

}

