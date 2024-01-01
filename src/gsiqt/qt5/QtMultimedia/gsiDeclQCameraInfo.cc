
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
*  @file gsiDeclQCameraInfo.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraInfo>
#include <QCamera>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraInfo

//  Constructor QCameraInfo::QCameraInfo(const QByteArray &name)


static void _init_ctor_QCameraInfo_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name", true, "QByteArray()");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QCameraInfo> ();
}

static void _call_ctor_QCameraInfo_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args ? gsi::arg_reader<const QByteArray & >() (args, heap) : gsi::arg_maker<const QByteArray & >() (QByteArray(), heap);
  ret.write<QCameraInfo *> (new QCameraInfo (arg1));
}


//  Constructor QCameraInfo::QCameraInfo(const QCamera &camera)


static void _init_ctor_QCameraInfo_1979 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("camera");
  decl->add_arg<const QCamera & > (argspec_0);
  decl->set_return_new<QCameraInfo> ();
}

static void _call_ctor_QCameraInfo_1979 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCamera &arg1 = gsi::arg_reader<const QCamera & >() (args, heap);
  ret.write<QCameraInfo *> (new QCameraInfo (arg1));
}


//  Constructor QCameraInfo::QCameraInfo(const QCameraInfo &other)


static void _init_ctor_QCameraInfo_2375 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraInfo & > (argspec_0);
  decl->set_return_new<QCameraInfo> ();
}

static void _call_ctor_QCameraInfo_2375 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraInfo &arg1 = gsi::arg_reader<const QCameraInfo & >() (args, heap);
  ret.write<QCameraInfo *> (new QCameraInfo (arg1));
}


// QString QCameraInfo::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCameraInfo *)cls)->description ());
}


// QString QCameraInfo::deviceName()


static void _init_f_deviceName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_deviceName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCameraInfo *)cls)->deviceName ());
}


// bool QCameraInfo::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraInfo *)cls)->isNull ());
}


// bool QCameraInfo::operator!=(const QCameraInfo &other)


static void _init_f_operator_excl__eq__c2375 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraInfo & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2375 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraInfo &arg1 = gsi::arg_reader<const QCameraInfo & >() (args, heap);
  ret.write<bool > ((bool)((QCameraInfo *)cls)->operator!= (arg1));
}


// QCameraInfo &QCameraInfo::operator=(const QCameraInfo &other)


static void _init_f_operator_eq__2375 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraInfo & > (argspec_0);
  decl->set_return<QCameraInfo & > ();
}

static void _call_f_operator_eq__2375 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraInfo &arg1 = gsi::arg_reader<const QCameraInfo & >() (args, heap);
  ret.write<QCameraInfo & > ((QCameraInfo &)((QCameraInfo *)cls)->operator= (arg1));
}


// bool QCameraInfo::operator==(const QCameraInfo &other)


static void _init_f_operator_eq__eq__c2375 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraInfo & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2375 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraInfo &arg1 = gsi::arg_reader<const QCameraInfo & >() (args, heap);
  ret.write<bool > ((bool)((QCameraInfo *)cls)->operator== (arg1));
}


// int QCameraInfo::orientation()


static void _init_f_orientation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_orientation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QCameraInfo *)cls)->orientation ());
}


// QCamera::Position QCameraInfo::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QCamera::Position>::target_type > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QCamera::Position>::target_type > ((qt_gsi::Converter<QCamera::Position>::target_type)qt_gsi::CppToQtAdaptor<QCamera::Position>(((QCameraInfo *)cls)->position ()));
}


// static QList<QCameraInfo> QCameraInfo::availableCameras(QCamera::Position position)


static void _init_f_availableCameras_2071 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("position", true, "QCamera::UnspecifiedPosition");
  decl->add_arg<const qt_gsi::Converter<QCamera::Position>::target_type & > (argspec_0);
  decl->set_return<QList<QCameraInfo> > ();
}

static void _call_f_availableCameras_2071 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCamera::Position>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QCamera::Position>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QCamera::Position>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QCamera::Position>(heap, QCamera::UnspecifiedPosition), heap);
  ret.write<QList<QCameraInfo> > ((QList<QCameraInfo>)QCameraInfo::availableCameras (qt_gsi::QtToCppAdaptor<QCamera::Position>(arg1).cref()));
}


// static QCameraInfo QCameraInfo::defaultCamera()


static void _init_f_defaultCamera_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QCameraInfo > ();
}

static void _call_f_defaultCamera_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraInfo > ((QCameraInfo)QCameraInfo::defaultCamera ());
}



namespace gsi
{

static gsi::Methods methods_QCameraInfo () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraInfo::QCameraInfo(const QByteArray &name)\nThis method creates an object of class QCameraInfo.", &_init_ctor_QCameraInfo_2309, &_call_ctor_QCameraInfo_2309);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraInfo::QCameraInfo(const QCamera &camera)\nThis method creates an object of class QCameraInfo.", &_init_ctor_QCameraInfo_1979, &_call_ctor_QCameraInfo_1979);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraInfo::QCameraInfo(const QCameraInfo &other)\nThis method creates an object of class QCameraInfo.", &_init_ctor_QCameraInfo_2375, &_call_ctor_QCameraInfo_2375);
  methods += new qt_gsi::GenericMethod ("description", "@brief Method QString QCameraInfo::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod ("deviceName", "@brief Method QString QCameraInfo::deviceName()\n", true, &_init_f_deviceName_c0, &_call_f_deviceName_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QCameraInfo::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QCameraInfo::operator!=(const QCameraInfo &other)\n", true, &_init_f_operator_excl__eq__c2375, &_call_f_operator_excl__eq__c2375);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCameraInfo &QCameraInfo::operator=(const QCameraInfo &other)\n", false, &_init_f_operator_eq__2375, &_call_f_operator_eq__2375);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QCameraInfo::operator==(const QCameraInfo &other)\n", true, &_init_f_operator_eq__eq__c2375, &_call_f_operator_eq__eq__c2375);
  methods += new qt_gsi::GenericMethod ("orientation", "@brief Method int QCameraInfo::orientation()\n", true, &_init_f_orientation_c0, &_call_f_orientation_c0);
  methods += new qt_gsi::GenericMethod ("position", "@brief Method QCamera::Position QCameraInfo::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericStaticMethod ("availableCameras", "@brief Static method QList<QCameraInfo> QCameraInfo::availableCameras(QCamera::Position position)\nThis method is static and can be called without an instance.", &_init_f_availableCameras_2071, &_call_f_availableCameras_2071);
  methods += new qt_gsi::GenericStaticMethod ("defaultCamera", "@brief Static method QCameraInfo QCameraInfo::defaultCamera()\nThis method is static and can be called without an instance.", &_init_f_defaultCamera_0, &_call_f_defaultCamera_0);
  return methods;
}

gsi::Class<QCameraInfo> decl_QCameraInfo ("QtMultimedia", "QCameraInfo",
  methods_QCameraInfo (),
  "@qt\n@brief Binding of QCameraInfo");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraInfo> &qtdecl_QCameraInfo () { return decl_QCameraInfo; }

}

