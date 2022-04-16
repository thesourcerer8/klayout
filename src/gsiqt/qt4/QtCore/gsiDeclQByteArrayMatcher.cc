
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
*  @file gsiDeclQByteArrayMatcher.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QByteArrayMatcher>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QByteArrayMatcher

//  Constructor QByteArrayMatcher::QByteArrayMatcher()


static void _init_ctor_QByteArrayMatcher_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QByteArrayMatcher> ();
}

static void _call_ctor_QByteArrayMatcher_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArrayMatcher *> (new QByteArrayMatcher ());
}


//  Constructor QByteArrayMatcher::QByteArrayMatcher(const QByteArray &pattern)


static void _init_ctor_QByteArrayMatcher_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QByteArrayMatcher> ();
}

static void _call_ctor_QByteArrayMatcher_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QByteArrayMatcher *> (new QByteArrayMatcher (arg1));
}


//  Constructor QByteArrayMatcher::QByteArrayMatcher(const char *pattern, int length)


static void _init_ctor_QByteArrayMatcher_2390 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length");
  decl->add_arg<int > (argspec_1);
  decl->set_return_new<QByteArrayMatcher> ();
}

static void _call_ctor_QByteArrayMatcher_2390 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QByteArrayMatcher *> (new QByteArrayMatcher (arg1, arg2));
}


//  Constructor QByteArrayMatcher::QByteArrayMatcher(const QByteArrayMatcher &other)


static void _init_ctor_QByteArrayMatcher_3017 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QByteArrayMatcher & > (argspec_0);
  decl->set_return_new<QByteArrayMatcher> ();
}

static void _call_ctor_QByteArrayMatcher_3017 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArrayMatcher &arg1 = gsi::arg_reader<const QByteArrayMatcher & >() (args, heap);
  ret.write<QByteArrayMatcher *> (new QByteArrayMatcher (arg1));
}


// int QByteArrayMatcher::indexIn(const char *str, int len, int from)


static void _init_f_indexIn_c3049 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("str");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("from", true, "0");
  decl->add_arg<int > (argspec_2);
  decl->set_return<int > ();
}

static void _call_f_indexIn_c3049 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<int > ((int)((QByteArrayMatcher *)cls)->indexIn (arg1, arg2, arg3));
}


// QByteArrayMatcher &QByteArrayMatcher::operator=(const QByteArrayMatcher &other)


static void _init_f_operator_eq__3017 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QByteArrayMatcher & > (argspec_0);
  decl->set_return<QByteArrayMatcher & > ();
}

static void _call_f_operator_eq__3017 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArrayMatcher &arg1 = gsi::arg_reader<const QByteArrayMatcher & >() (args, heap);
  ret.write<QByteArrayMatcher & > ((QByteArrayMatcher &)((QByteArrayMatcher *)cls)->operator= (arg1));
}


// QByteArray QByteArrayMatcher::pattern()


static void _init_f_pattern_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_pattern_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QByteArrayMatcher *)cls)->pattern ());
}


// void QByteArrayMatcher::setPattern(const QByteArray &pattern)


static void _init_f_setPattern_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPattern_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QByteArrayMatcher *)cls)->setPattern (arg1);
}



namespace gsi
{

static gsi::Methods methods_QByteArrayMatcher () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QByteArrayMatcher::QByteArrayMatcher()\nThis method creates an object of class QByteArrayMatcher.", &_init_ctor_QByteArrayMatcher_0, &_call_ctor_QByteArrayMatcher_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QByteArrayMatcher::QByteArrayMatcher(const QByteArray &pattern)\nThis method creates an object of class QByteArrayMatcher.", &_init_ctor_QByteArrayMatcher_2309, &_call_ctor_QByteArrayMatcher_2309);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QByteArrayMatcher::QByteArrayMatcher(const char *pattern, int length)\nThis method creates an object of class QByteArrayMatcher.", &_init_ctor_QByteArrayMatcher_2390, &_call_ctor_QByteArrayMatcher_2390);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QByteArrayMatcher::QByteArrayMatcher(const QByteArrayMatcher &other)\nThis method creates an object of class QByteArrayMatcher.", &_init_ctor_QByteArrayMatcher_3017, &_call_ctor_QByteArrayMatcher_3017);
  methods += new qt_gsi::GenericMethod ("indexIn", "@brief Method int QByteArrayMatcher::indexIn(const char *str, int len, int from)\n", true, &_init_f_indexIn_c3049, &_call_f_indexIn_c3049);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QByteArrayMatcher &QByteArrayMatcher::operator=(const QByteArrayMatcher &other)\n", false, &_init_f_operator_eq__3017, &_call_f_operator_eq__3017);
  methods += new qt_gsi::GenericMethod (":pattern", "@brief Method QByteArray QByteArrayMatcher::pattern()\n", true, &_init_f_pattern_c0, &_call_f_pattern_c0);
  methods += new qt_gsi::GenericMethod ("setPattern|pattern=", "@brief Method void QByteArrayMatcher::setPattern(const QByteArray &pattern)\n", false, &_init_f_setPattern_2309, &_call_f_setPattern_2309);
  return methods;
}

gsi::Class<QByteArrayMatcher> decl_QByteArrayMatcher ("QtCore", "QByteArrayMatcher",
  methods_QByteArrayMatcher (),
  "@qt\n@brief Binding of QByteArrayMatcher");


GSI_QTCORE_PUBLIC gsi::Class<QByteArrayMatcher> &qtdecl_QByteArrayMatcher () { return decl_QByteArrayMatcher; }

}

