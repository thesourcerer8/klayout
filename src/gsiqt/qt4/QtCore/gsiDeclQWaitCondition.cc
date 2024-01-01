
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
*  @file gsiDeclQWaitCondition.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWaitCondition>
#include <QMutex>
#include <QReadWriteLock>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QWaitCondition

//  Constructor QWaitCondition::QWaitCondition()


static void _init_ctor_QWaitCondition_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QWaitCondition> ();
}

static void _call_ctor_QWaitCondition_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QWaitCondition *> (new QWaitCondition ());
}


// bool QWaitCondition::wait(QMutex *mutex, unsigned long int time)


static void _init_f_wait_3474 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mutex");
  decl->add_arg<QMutex * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("time", true, "ULONG_MAX");
  decl->add_arg<unsigned long int > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_wait_3474 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMutex *arg1 = gsi::arg_reader<QMutex * >() (args, heap);
  unsigned long int arg2 = args ? gsi::arg_reader<unsigned long int >() (args, heap) : gsi::arg_maker<unsigned long int >() (ULONG_MAX, heap);
  ret.write<bool > ((bool)((QWaitCondition *)cls)->wait (arg1, arg2));
}


// bool QWaitCondition::wait(QReadWriteLock *readWriteLock, unsigned long int time)


static void _init_f_wait_4239 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("readWriteLock");
  decl->add_arg<QReadWriteLock * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("time", true, "ULONG_MAX");
  decl->add_arg<unsigned long int > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_wait_4239 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QReadWriteLock *arg1 = gsi::arg_reader<QReadWriteLock * >() (args, heap);
  unsigned long int arg2 = args ? gsi::arg_reader<unsigned long int >() (args, heap) : gsi::arg_maker<unsigned long int >() (ULONG_MAX, heap);
  ret.write<bool > ((bool)((QWaitCondition *)cls)->wait (arg1, arg2));
}


// void QWaitCondition::wakeAll()


static void _init_f_wakeAll_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_wakeAll_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWaitCondition *)cls)->wakeAll ();
}


// void QWaitCondition::wakeOne()


static void _init_f_wakeOne_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_wakeOne_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QWaitCondition *)cls)->wakeOne ();
}



namespace gsi
{

static gsi::Methods methods_QWaitCondition () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWaitCondition::QWaitCondition()\nThis method creates an object of class QWaitCondition.", &_init_ctor_QWaitCondition_0, &_call_ctor_QWaitCondition_0);
  methods += new qt_gsi::GenericMethod ("wait", "@brief Method bool QWaitCondition::wait(QMutex *mutex, unsigned long int time)\n", false, &_init_f_wait_3474, &_call_f_wait_3474);
  methods += new qt_gsi::GenericMethod ("wait", "@brief Method bool QWaitCondition::wait(QReadWriteLock *readWriteLock, unsigned long int time)\n", false, &_init_f_wait_4239, &_call_f_wait_4239);
  methods += new qt_gsi::GenericMethod ("wakeAll", "@brief Method void QWaitCondition::wakeAll()\n", false, &_init_f_wakeAll_0, &_call_f_wakeAll_0);
  methods += new qt_gsi::GenericMethod ("wakeOne", "@brief Method void QWaitCondition::wakeOne()\n", false, &_init_f_wakeOne_0, &_call_f_wakeOne_0);
  return methods;
}

gsi::Class<QWaitCondition> decl_QWaitCondition ("QtCore", "QWaitCondition",
  methods_QWaitCondition (),
  "@qt\n@brief Binding of QWaitCondition");


GSI_QTCORE_PUBLIC gsi::Class<QWaitCondition> &qtdecl_QWaitCondition () { return decl_QWaitCondition; }

}

