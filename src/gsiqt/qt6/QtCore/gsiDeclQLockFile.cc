
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
*  @file gsiDeclQLockFile.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QLockFile>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QLockFile

//  Constructor QLockFile::QLockFile(const QString &fileName)


static void _init_ctor_QLockFile_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QLockFile> ();
}

static void _call_ctor_QLockFile_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QLockFile *> (new QLockFile (arg1));
}


// QLockFile::LockError QLockFile::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QLockFile::LockError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QLockFile::LockError>::target_type > ((qt_gsi::Converter<QLockFile::LockError>::target_type)qt_gsi::CppToQtAdaptor<QLockFile::LockError>(((QLockFile *)cls)->error ()));
}


// QString QLockFile::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QLockFile *)cls)->fileName ());
}


// bool QLockFile::getLockInfo(qint64 *pid, QString *hostname, QString *appname)


static void _init_f_getLockInfo_c3624 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pid");
  decl->add_arg<qint64 * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("hostname");
  decl->add_arg<QString * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("appname");
  decl->add_arg<QString * > (argspec_2);
  decl->set_return<bool > ();
}

static void _call_f_getLockInfo_c3624 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 *arg1 = gsi::arg_reader<qint64 * >() (args, heap);
  QString *arg2 = gsi::arg_reader<QString * >() (args, heap);
  QString *arg3 = gsi::arg_reader<QString * >() (args, heap);
  ret.write<bool > ((bool)((QLockFile *)cls)->getLockInfo (arg1, arg2, arg3));
}


// bool QLockFile::isLocked()


static void _init_f_isLocked_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLocked_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLockFile *)cls)->isLocked ());
}


// bool QLockFile::lock()


static void _init_f_lock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_lock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLockFile *)cls)->lock ());
}


// bool QLockFile::removeStaleLockFile()


static void _init_f_removeStaleLockFile_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_removeStaleLockFile_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QLockFile *)cls)->removeStaleLockFile ());
}


// void QLockFile::setStaleLockTime(int)


static void _init_f_setStaleLockTime_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStaleLockTime_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLockFile *)cls)->setStaleLockTime (arg1);
}


// int QLockFile::staleLockTime()


static void _init_f_staleLockTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_staleLockTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QLockFile *)cls)->staleLockTime ());
}


// bool QLockFile::tryLock(int timeout)


static void _init_f_tryLock_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeout", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_tryLock_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  ret.write<bool > ((bool)((QLockFile *)cls)->tryLock (arg1));
}


// void QLockFile::unlock()


static void _init_f_unlock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unlock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QLockFile *)cls)->unlock ();
}



namespace gsi
{

static gsi::Methods methods_QLockFile () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QLockFile::QLockFile(const QString &fileName)\nThis method creates an object of class QLockFile.", &_init_ctor_QLockFile_2025, &_call_ctor_QLockFile_2025);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QLockFile::LockError QLockFile::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("fileName", "@brief Method QString QLockFile::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("getLockInfo", "@brief Method bool QLockFile::getLockInfo(qint64 *pid, QString *hostname, QString *appname)\n", true, &_init_f_getLockInfo_c3624, &_call_f_getLockInfo_c3624);
  methods += new qt_gsi::GenericMethod ("isLocked?", "@brief Method bool QLockFile::isLocked()\n", true, &_init_f_isLocked_c0, &_call_f_isLocked_c0);
  methods += new qt_gsi::GenericMethod ("lock", "@brief Method bool QLockFile::lock()\n", false, &_init_f_lock_0, &_call_f_lock_0);
  methods += new qt_gsi::GenericMethod ("removeStaleLockFile", "@brief Method bool QLockFile::removeStaleLockFile()\n", false, &_init_f_removeStaleLockFile_0, &_call_f_removeStaleLockFile_0);
  methods += new qt_gsi::GenericMethod ("setStaleLockTime|staleLockTime=", "@brief Method void QLockFile::setStaleLockTime(int)\n", false, &_init_f_setStaleLockTime_767, &_call_f_setStaleLockTime_767);
  methods += new qt_gsi::GenericMethod (":staleLockTime", "@brief Method int QLockFile::staleLockTime()\n", true, &_init_f_staleLockTime_c0, &_call_f_staleLockTime_c0);
  methods += new qt_gsi::GenericMethod ("tryLock", "@brief Method bool QLockFile::tryLock(int timeout)\n", false, &_init_f_tryLock_767, &_call_f_tryLock_767);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method void QLockFile::unlock()\n", false, &_init_f_unlock_0, &_call_f_unlock_0);
  return methods;
}

gsi::Class<QLockFile> decl_QLockFile ("QtCore", "QLockFile",
  methods_QLockFile (),
  "@qt\n@brief Binding of QLockFile");


GSI_QTCORE_PUBLIC gsi::Class<QLockFile> &qtdecl_QLockFile () { return decl_QLockFile; }

}


//  Implementation of the enum wrapper class for QLockFile::LockError
namespace qt_gsi
{

static gsi::Enum<QLockFile::LockError> decl_QLockFile_LockError_Enum ("QtCore", "QLockFile_LockError",
    gsi::enum_const ("NoError", QLockFile::NoError, "@brief Enum constant QLockFile::NoError") +
    gsi::enum_const ("LockFailedError", QLockFile::LockFailedError, "@brief Enum constant QLockFile::LockFailedError") +
    gsi::enum_const ("PermissionError", QLockFile::PermissionError, "@brief Enum constant QLockFile::PermissionError") +
    gsi::enum_const ("UnknownError", QLockFile::UnknownError, "@brief Enum constant QLockFile::UnknownError"),
  "@qt\n@brief This class represents the QLockFile::LockError enum");

static gsi::QFlagsClass<QLockFile::LockError > decl_QLockFile_LockError_Enums ("QtCore", "QLockFile_QFlags_LockError",
  "@qt\n@brief This class represents the QFlags<QLockFile::LockError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QLockFile> inject_QLockFile_LockError_Enum_in_parent (decl_QLockFile_LockError_Enum.defs ());
static gsi::ClassExt<QLockFile> decl_QLockFile_LockError_Enum_as_child (decl_QLockFile_LockError_Enum, "LockError");
static gsi::ClassExt<QLockFile> decl_QLockFile_LockError_Enums_as_child (decl_QLockFile_LockError_Enums, "QFlags_LockError");

}

