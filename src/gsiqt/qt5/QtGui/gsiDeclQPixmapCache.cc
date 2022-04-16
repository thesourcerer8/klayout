
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
*  @file gsiDeclQPixmapCache.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPixmapCache>
#include <QPixmap>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPixmapCache

//  Constructor QPixmapCache::QPixmapCache()


static void _init_ctor_QPixmapCache_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPixmapCache> ();
}

static void _call_ctor_QPixmapCache_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPixmapCache *> (new QPixmapCache ());
}


// static int QPixmapCache::cacheLimit()


static void _init_f_cacheLimit_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_cacheLimit_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)QPixmapCache::cacheLimit ());
}


// static void QPixmapCache::clear()


static void _init_f_clear_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clear_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QPixmapCache::clear ();
}


// static QPixmap *QPixmapCache::find(const QString &key)


static void _init_f_find_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QPixmap * > ();
}

static void _call_f_find_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QPixmap * > ((QPixmap *)QPixmapCache::find (arg1));
}


// static bool QPixmapCache::find(const QString &key, QPixmap &pixmap)


static void _init_f_find_3239 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pixmap");
  decl->add_arg<QPixmap & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_find_3239 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QPixmap &arg2 = gsi::arg_reader<QPixmap & >() (args, heap);
  ret.write<bool > ((bool)QPixmapCache::find (arg1, arg2));
}


// static bool QPixmapCache::find(const QString &key, QPixmap *pixmap)


static void _init_f_find_3243 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pixmap");
  decl->add_arg<QPixmap * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_find_3243 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QPixmap *arg2 = gsi::arg_reader<QPixmap * >() (args, heap);
  ret.write<bool > ((bool)QPixmapCache::find (arg1, arg2));
}


// static bool QPixmapCache::insert(const QString &key, const QPixmap &pixmap)


static void _init_f_insert_3934 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_insert_3934 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QPixmap &arg2 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<bool > ((bool)QPixmapCache::insert (arg1, arg2));
}


// static void QPixmapCache::remove(const QString &key)


static void _init_f_remove_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_remove_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QPixmapCache::remove (arg1);
}


// static void QPixmapCache::setCacheLimit(int)


static void _init_f_setCacheLimit_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCacheLimit_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QPixmapCache::setCacheLimit (arg1);
}



namespace gsi
{

static gsi::Methods methods_QPixmapCache () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPixmapCache::QPixmapCache()\nThis method creates an object of class QPixmapCache.", &_init_ctor_QPixmapCache_0, &_call_ctor_QPixmapCache_0);
  methods += new qt_gsi::GenericStaticMethod (":cacheLimit", "@brief Static method int QPixmapCache::cacheLimit()\nThis method is static and can be called without an instance.", &_init_f_cacheLimit_0, &_call_f_cacheLimit_0);
  methods += new qt_gsi::GenericStaticMethod ("clear", "@brief Static method void QPixmapCache::clear()\nThis method is static and can be called without an instance.", &_init_f_clear_0, &_call_f_clear_0);
  methods += new qt_gsi::GenericStaticMethod ("find", "@brief Static method QPixmap *QPixmapCache::find(const QString &key)\nThis method is static and can be called without an instance.", &_init_f_find_2025, &_call_f_find_2025);
  methods += new qt_gsi::GenericStaticMethod ("find", "@brief Static method bool QPixmapCache::find(const QString &key, QPixmap &pixmap)\nThis method is static and can be called without an instance.", &_init_f_find_3239, &_call_f_find_3239);
  methods += new qt_gsi::GenericStaticMethod ("find", "@brief Static method bool QPixmapCache::find(const QString &key, QPixmap *pixmap)\nThis method is static and can be called without an instance.", &_init_f_find_3243, &_call_f_find_3243);
  methods += new qt_gsi::GenericStaticMethod ("insert", "@brief Static method bool QPixmapCache::insert(const QString &key, const QPixmap &pixmap)\nThis method is static and can be called without an instance.", &_init_f_insert_3934, &_call_f_insert_3934);
  methods += new qt_gsi::GenericStaticMethod ("remove", "@brief Static method void QPixmapCache::remove(const QString &key)\nThis method is static and can be called without an instance.", &_init_f_remove_2025, &_call_f_remove_2025);
  methods += new qt_gsi::GenericStaticMethod ("setCacheLimit|cacheLimit=", "@brief Static method void QPixmapCache::setCacheLimit(int)\nThis method is static and can be called without an instance.", &_init_f_setCacheLimit_767, &_call_f_setCacheLimit_767);
  return methods;
}

gsi::Class<QPixmapCache> decl_QPixmapCache ("QtGui", "QPixmapCache",
  methods_QPixmapCache (),
  "@qt\n@brief Binding of QPixmapCache");


GSI_QTGUI_PUBLIC gsi::Class<QPixmapCache> &qtdecl_QPixmapCache () { return decl_QPixmapCache; }

}

