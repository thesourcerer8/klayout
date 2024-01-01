
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
*  @file gsiDeclQVideoSurfaceFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoSurfaceFormat>
#include <QRect>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoSurfaceFormat

//  Constructor QVideoSurfaceFormat::QVideoSurfaceFormat()


static void _init_ctor_QVideoSurfaceFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVideoSurfaceFormat> ();
}

static void _call_ctor_QVideoSurfaceFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoSurfaceFormat *> (new QVideoSurfaceFormat ());
}


//  Constructor QVideoSurfaceFormat::QVideoSurfaceFormat(const QSize &size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType)


static void _init_ctor_QVideoSurfaceFormat_7911 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pixelFormat");
  decl->add_arg<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("handleType", true, "QAbstractVideoBuffer::NoHandle");
  decl->add_arg<const qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type & > (argspec_2);
  decl->set_return_new<QVideoSurfaceFormat> ();
}

static void _call_ctor_QVideoSurfaceFormat_7911 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type & >() (args, heap);
  const qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QAbstractVideoBuffer::HandleType>(heap, QAbstractVideoBuffer::NoHandle), heap);
  ret.write<QVideoSurfaceFormat *> (new QVideoSurfaceFormat (arg1, qt_gsi::QtToCppAdaptor<QVideoFrame::PixelFormat>(arg2).cref(), qt_gsi::QtToCppAdaptor<QAbstractVideoBuffer::HandleType>(arg3).cref()));
}


//  Constructor QVideoSurfaceFormat::QVideoSurfaceFormat(const QVideoSurfaceFormat &format)


static void _init_ctor_QVideoSurfaceFormat_3227 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QVideoSurfaceFormat & > (argspec_0);
  decl->set_return_new<QVideoSurfaceFormat> ();
}

static void _call_ctor_QVideoSurfaceFormat_3227 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoSurfaceFormat &arg1 = gsi::arg_reader<const QVideoSurfaceFormat & >() (args, heap);
  ret.write<QVideoSurfaceFormat *> (new QVideoSurfaceFormat (arg1));
}


// int QVideoSurfaceFormat::frameHeight()


static void _init_f_frameHeight_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_frameHeight_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoSurfaceFormat *)cls)->frameHeight ());
}


// double QVideoSurfaceFormat::frameRate()


static void _init_f_frameRate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_frameRate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QVideoSurfaceFormat *)cls)->frameRate ());
}


// QSize QVideoSurfaceFormat::frameSize()


static void _init_f_frameSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_frameSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QVideoSurfaceFormat *)cls)->frameSize ());
}


// int QVideoSurfaceFormat::frameWidth()


static void _init_f_frameWidth_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_frameWidth_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoSurfaceFormat *)cls)->frameWidth ());
}


// QAbstractVideoBuffer::HandleType QVideoSurfaceFormat::handleType()


static void _init_f_handleType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type > ();
}

static void _call_f_handleType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type > ((qt_gsi::Converter<QAbstractVideoBuffer::HandleType>::target_type)qt_gsi::CppToQtAdaptor<QAbstractVideoBuffer::HandleType>(((QVideoSurfaceFormat *)cls)->handleType ()));
}


// bool QVideoSurfaceFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoSurfaceFormat *)cls)->isValid ());
}


// bool QVideoSurfaceFormat::operator !=(const QVideoSurfaceFormat &format)


static void _init_f_operator_excl__eq__c3227 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QVideoSurfaceFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3227 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoSurfaceFormat &arg1 = gsi::arg_reader<const QVideoSurfaceFormat & >() (args, heap);
  ret.write<bool > ((bool)((QVideoSurfaceFormat *)cls)->operator != (arg1));
}


// QVideoSurfaceFormat &QVideoSurfaceFormat::operator =(const QVideoSurfaceFormat &format)


static void _init_f_operator_eq__3227 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QVideoSurfaceFormat & > (argspec_0);
  decl->set_return<QVideoSurfaceFormat & > ();
}

static void _call_f_operator_eq__3227 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoSurfaceFormat &arg1 = gsi::arg_reader<const QVideoSurfaceFormat & >() (args, heap);
  ret.write<QVideoSurfaceFormat & > ((QVideoSurfaceFormat &)((QVideoSurfaceFormat *)cls)->operator = (arg1));
}


// bool QVideoSurfaceFormat::operator ==(const QVideoSurfaceFormat &format)


static void _init_f_operator_eq__eq__c3227 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QVideoSurfaceFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3227 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoSurfaceFormat &arg1 = gsi::arg_reader<const QVideoSurfaceFormat & >() (args, heap);
  ret.write<bool > ((bool)((QVideoSurfaceFormat *)cls)->operator == (arg1));
}


// QSize QVideoSurfaceFormat::pixelAspectRatio()


static void _init_f_pixelAspectRatio_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_pixelAspectRatio_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QVideoSurfaceFormat *)cls)->pixelAspectRatio ());
}


// QVideoFrame::PixelFormat QVideoSurfaceFormat::pixelFormat()


static void _init_f_pixelFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ();
}

static void _call_f_pixelFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type > ((qt_gsi::Converter<QVideoFrame::PixelFormat>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrame::PixelFormat>(((QVideoSurfaceFormat *)cls)->pixelFormat ()));
}


// QVariant QVideoSurfaceFormat::property(const char *name)


static void _init_f_property_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_property_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<QVariant > ((QVariant)((QVideoSurfaceFormat *)cls)->property (arg1));
}


// QList<QByteArray> QVideoSurfaceFormat::propertyNames()


static void _init_f_propertyNames_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_propertyNames_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QVideoSurfaceFormat *)cls)->propertyNames ());
}


// QVideoSurfaceFormat::Direction QVideoSurfaceFormat::scanLineDirection()


static void _init_f_scanLineDirection_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoSurfaceFormat::Direction>::target_type > ();
}

static void _call_f_scanLineDirection_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoSurfaceFormat::Direction>::target_type > ((qt_gsi::Converter<QVideoSurfaceFormat::Direction>::target_type)qt_gsi::CppToQtAdaptor<QVideoSurfaceFormat::Direction>(((QVideoSurfaceFormat *)cls)->scanLineDirection ()));
}


// void QVideoSurfaceFormat::setFrameRate(double rate)


static void _init_f_setFrameRate_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rate");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFrameRate_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setFrameRate (arg1);
}


// void QVideoSurfaceFormat::setFrameSize(const QSize &size)


static void _init_f_setFrameSize_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("size");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFrameSize_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setFrameSize (arg1);
}


// void QVideoSurfaceFormat::setFrameSize(int width, int height)


static void _init_f_setFrameSize_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("height");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setFrameSize_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setFrameSize (arg1, arg2);
}


// void QVideoSurfaceFormat::setPixelAspectRatio(const QSize &ratio)


static void _init_f_setPixelAspectRatio_1805 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ratio");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setPixelAspectRatio_1805 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setPixelAspectRatio (arg1);
}


// void QVideoSurfaceFormat::setPixelAspectRatio(int width, int height)


static void _init_f_setPixelAspectRatio_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("height");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setPixelAspectRatio_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setPixelAspectRatio (arg1, arg2);
}


// void QVideoSurfaceFormat::setProperty(const char *name, const QVariant &value)


static void _init_f_setProperty_3742 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setProperty_3742 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setProperty (arg1, arg2);
}


// void QVideoSurfaceFormat::setScanLineDirection(QVideoSurfaceFormat::Direction direction)


static void _init_f_setScanLineDirection_3395 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("direction");
  decl->add_arg<const qt_gsi::Converter<QVideoSurfaceFormat::Direction>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setScanLineDirection_3395 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoSurfaceFormat::Direction>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QVideoSurfaceFormat::Direction>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setScanLineDirection (qt_gsi::QtToCppAdaptor<QVideoSurfaceFormat::Direction>(arg1).cref());
}


// void QVideoSurfaceFormat::setViewport(const QRect &viewport)


static void _init_f_setViewport_1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("viewport");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setViewport_1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setViewport (arg1);
}


// void QVideoSurfaceFormat::setYCbCrColorSpace(QVideoSurfaceFormat::YCbCrColorSpace colorSpace)


static void _init_f_setYCbCrColorSpace_3904 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("colorSpace");
  decl->add_arg<const qt_gsi::Converter<QVideoSurfaceFormat::YCbCrColorSpace>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setYCbCrColorSpace_3904 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoSurfaceFormat::YCbCrColorSpace>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QVideoSurfaceFormat::YCbCrColorSpace>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoSurfaceFormat *)cls)->setYCbCrColorSpace (qt_gsi::QtToCppAdaptor<QVideoSurfaceFormat::YCbCrColorSpace>(arg1).cref());
}


// QSize QVideoSurfaceFormat::sizeHint()


static void _init_f_sizeHint_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_sizeHint_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QVideoSurfaceFormat *)cls)->sizeHint ());
}


// QRect QVideoSurfaceFormat::viewport()


static void _init_f_viewport_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_viewport_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QVideoSurfaceFormat *)cls)->viewport ());
}


// QVideoSurfaceFormat::YCbCrColorSpace QVideoSurfaceFormat::yCbCrColorSpace()


static void _init_f_yCbCrColorSpace_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoSurfaceFormat::YCbCrColorSpace>::target_type > ();
}

static void _call_f_yCbCrColorSpace_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoSurfaceFormat::YCbCrColorSpace>::target_type > ((qt_gsi::Converter<QVideoSurfaceFormat::YCbCrColorSpace>::target_type)qt_gsi::CppToQtAdaptor<QVideoSurfaceFormat::YCbCrColorSpace>(((QVideoSurfaceFormat *)cls)->yCbCrColorSpace ()));
}



namespace gsi
{

static gsi::Methods methods_QVideoSurfaceFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoSurfaceFormat::QVideoSurfaceFormat()\nThis method creates an object of class QVideoSurfaceFormat.", &_init_ctor_QVideoSurfaceFormat_0, &_call_ctor_QVideoSurfaceFormat_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoSurfaceFormat::QVideoSurfaceFormat(const QSize &size, QVideoFrame::PixelFormat pixelFormat, QAbstractVideoBuffer::HandleType handleType)\nThis method creates an object of class QVideoSurfaceFormat.", &_init_ctor_QVideoSurfaceFormat_7911, &_call_ctor_QVideoSurfaceFormat_7911);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoSurfaceFormat::QVideoSurfaceFormat(const QVideoSurfaceFormat &format)\nThis method creates an object of class QVideoSurfaceFormat.", &_init_ctor_QVideoSurfaceFormat_3227, &_call_ctor_QVideoSurfaceFormat_3227);
  methods += new qt_gsi::GenericMethod ("frameHeight", "@brief Method int QVideoSurfaceFormat::frameHeight()\n", true, &_init_f_frameHeight_c0, &_call_f_frameHeight_c0);
  methods += new qt_gsi::GenericMethod (":frameRate", "@brief Method double QVideoSurfaceFormat::frameRate()\n", true, &_init_f_frameRate_c0, &_call_f_frameRate_c0);
  methods += new qt_gsi::GenericMethod (":frameSize", "@brief Method QSize QVideoSurfaceFormat::frameSize()\n", true, &_init_f_frameSize_c0, &_call_f_frameSize_c0);
  methods += new qt_gsi::GenericMethod ("frameWidth", "@brief Method int QVideoSurfaceFormat::frameWidth()\n", true, &_init_f_frameWidth_c0, &_call_f_frameWidth_c0);
  methods += new qt_gsi::GenericMethod ("handleType", "@brief Method QAbstractVideoBuffer::HandleType QVideoSurfaceFormat::handleType()\n", true, &_init_f_handleType_c0, &_call_f_handleType_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QVideoSurfaceFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QVideoSurfaceFormat::operator !=(const QVideoSurfaceFormat &format)\n", true, &_init_f_operator_excl__eq__c3227, &_call_f_operator_excl__eq__c3227);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QVideoSurfaceFormat &QVideoSurfaceFormat::operator =(const QVideoSurfaceFormat &format)\n", false, &_init_f_operator_eq__3227, &_call_f_operator_eq__3227);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QVideoSurfaceFormat::operator ==(const QVideoSurfaceFormat &format)\n", true, &_init_f_operator_eq__eq__c3227, &_call_f_operator_eq__eq__c3227);
  methods += new qt_gsi::GenericMethod (":pixelAspectRatio", "@brief Method QSize QVideoSurfaceFormat::pixelAspectRatio()\n", true, &_init_f_pixelAspectRatio_c0, &_call_f_pixelAspectRatio_c0);
  methods += new qt_gsi::GenericMethod ("pixelFormat", "@brief Method QVideoFrame::PixelFormat QVideoSurfaceFormat::pixelFormat()\n", true, &_init_f_pixelFormat_c0, &_call_f_pixelFormat_c0);
  methods += new qt_gsi::GenericMethod ("property", "@brief Method QVariant QVideoSurfaceFormat::property(const char *name)\n", true, &_init_f_property_c1731, &_call_f_property_c1731);
  methods += new qt_gsi::GenericMethod ("propertyNames", "@brief Method QList<QByteArray> QVideoSurfaceFormat::propertyNames()\n", true, &_init_f_propertyNames_c0, &_call_f_propertyNames_c0);
  methods += new qt_gsi::GenericMethod (":scanLineDirection", "@brief Method QVideoSurfaceFormat::Direction QVideoSurfaceFormat::scanLineDirection()\n", true, &_init_f_scanLineDirection_c0, &_call_f_scanLineDirection_c0);
  methods += new qt_gsi::GenericMethod ("setFrameRate|frameRate=", "@brief Method void QVideoSurfaceFormat::setFrameRate(double rate)\n", false, &_init_f_setFrameRate_1071, &_call_f_setFrameRate_1071);
  methods += new qt_gsi::GenericMethod ("setFrameSize|frameSize=", "@brief Method void QVideoSurfaceFormat::setFrameSize(const QSize &size)\n", false, &_init_f_setFrameSize_1805, &_call_f_setFrameSize_1805);
  methods += new qt_gsi::GenericMethod ("setFrameSize", "@brief Method void QVideoSurfaceFormat::setFrameSize(int width, int height)\n", false, &_init_f_setFrameSize_1426, &_call_f_setFrameSize_1426);
  methods += new qt_gsi::GenericMethod ("setPixelAspectRatio|pixelAspectRatio=", "@brief Method void QVideoSurfaceFormat::setPixelAspectRatio(const QSize &ratio)\n", false, &_init_f_setPixelAspectRatio_1805, &_call_f_setPixelAspectRatio_1805);
  methods += new qt_gsi::GenericMethod ("setPixelAspectRatio", "@brief Method void QVideoSurfaceFormat::setPixelAspectRatio(int width, int height)\n", false, &_init_f_setPixelAspectRatio_1426, &_call_f_setPixelAspectRatio_1426);
  methods += new qt_gsi::GenericMethod ("setProperty", "@brief Method void QVideoSurfaceFormat::setProperty(const char *name, const QVariant &value)\n", false, &_init_f_setProperty_3742, &_call_f_setProperty_3742);
  methods += new qt_gsi::GenericMethod ("setScanLineDirection|scanLineDirection=", "@brief Method void QVideoSurfaceFormat::setScanLineDirection(QVideoSurfaceFormat::Direction direction)\n", false, &_init_f_setScanLineDirection_3395, &_call_f_setScanLineDirection_3395);
  methods += new qt_gsi::GenericMethod ("setViewport|viewport=", "@brief Method void QVideoSurfaceFormat::setViewport(const QRect &viewport)\n", false, &_init_f_setViewport_1792, &_call_f_setViewport_1792);
  methods += new qt_gsi::GenericMethod ("setYCbCrColorSpace|yCbCrColorSpace=", "@brief Method void QVideoSurfaceFormat::setYCbCrColorSpace(QVideoSurfaceFormat::YCbCrColorSpace colorSpace)\n", false, &_init_f_setYCbCrColorSpace_3904, &_call_f_setYCbCrColorSpace_3904);
  methods += new qt_gsi::GenericMethod ("sizeHint", "@brief Method QSize QVideoSurfaceFormat::sizeHint()\n", true, &_init_f_sizeHint_c0, &_call_f_sizeHint_c0);
  methods += new qt_gsi::GenericMethod (":viewport", "@brief Method QRect QVideoSurfaceFormat::viewport()\n", true, &_init_f_viewport_c0, &_call_f_viewport_c0);
  methods += new qt_gsi::GenericMethod (":yCbCrColorSpace", "@brief Method QVideoSurfaceFormat::YCbCrColorSpace QVideoSurfaceFormat::yCbCrColorSpace()\n", true, &_init_f_yCbCrColorSpace_c0, &_call_f_yCbCrColorSpace_c0);
  return methods;
}

gsi::Class<QVideoSurfaceFormat> decl_QVideoSurfaceFormat ("QtMultimedia", "QVideoSurfaceFormat",
  methods_QVideoSurfaceFormat (),
  "@qt\n@brief Binding of QVideoSurfaceFormat");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoSurfaceFormat> &qtdecl_QVideoSurfaceFormat () { return decl_QVideoSurfaceFormat; }

}


//  Implementation of the enum wrapper class for QVideoSurfaceFormat::Direction
namespace qt_gsi
{

static gsi::Enum<QVideoSurfaceFormat::Direction> decl_QVideoSurfaceFormat_Direction_Enum ("QtMultimedia", "QVideoSurfaceFormat_Direction",
    gsi::enum_const ("TopToBottom", QVideoSurfaceFormat::TopToBottom, "@brief Enum constant QVideoSurfaceFormat::TopToBottom") +
    gsi::enum_const ("BottomToTop", QVideoSurfaceFormat::BottomToTop, "@brief Enum constant QVideoSurfaceFormat::BottomToTop"),
  "@qt\n@brief This class represents the QVideoSurfaceFormat::Direction enum");

static gsi::QFlagsClass<QVideoSurfaceFormat::Direction > decl_QVideoSurfaceFormat_Direction_Enums ("QtMultimedia", "QVideoSurfaceFormat_QFlags_Direction",
  "@qt\n@brief This class represents the QFlags<QVideoSurfaceFormat::Direction> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QVideoSurfaceFormat> inject_QVideoSurfaceFormat_Direction_Enum_in_parent (decl_QVideoSurfaceFormat_Direction_Enum.defs ());
static gsi::ClassExt<QVideoSurfaceFormat> decl_QVideoSurfaceFormat_Direction_Enum_as_child (decl_QVideoSurfaceFormat_Direction_Enum, "Direction");
static gsi::ClassExt<QVideoSurfaceFormat> decl_QVideoSurfaceFormat_Direction_Enums_as_child (decl_QVideoSurfaceFormat_Direction_Enums, "QFlags_Direction");

}


//  Implementation of the enum wrapper class for QVideoSurfaceFormat::YCbCrColorSpace
namespace qt_gsi
{

static gsi::Enum<QVideoSurfaceFormat::YCbCrColorSpace> decl_QVideoSurfaceFormat_YCbCrColorSpace_Enum ("QtMultimedia", "QVideoSurfaceFormat_YCbCrColorSpace",
    gsi::enum_const ("YCbCr_Undefined", QVideoSurfaceFormat::YCbCr_Undefined, "@brief Enum constant QVideoSurfaceFormat::YCbCr_Undefined") +
    gsi::enum_const ("YCbCr_BT601", QVideoSurfaceFormat::YCbCr_BT601, "@brief Enum constant QVideoSurfaceFormat::YCbCr_BT601") +
    gsi::enum_const ("YCbCr_BT709", QVideoSurfaceFormat::YCbCr_BT709, "@brief Enum constant QVideoSurfaceFormat::YCbCr_BT709") +
    gsi::enum_const ("YCbCr_xvYCC601", QVideoSurfaceFormat::YCbCr_xvYCC601, "@brief Enum constant QVideoSurfaceFormat::YCbCr_xvYCC601") +
    gsi::enum_const ("YCbCr_xvYCC709", QVideoSurfaceFormat::YCbCr_xvYCC709, "@brief Enum constant QVideoSurfaceFormat::YCbCr_xvYCC709") +
    gsi::enum_const ("YCbCr_JPEG", QVideoSurfaceFormat::YCbCr_JPEG, "@brief Enum constant QVideoSurfaceFormat::YCbCr_JPEG") +
    gsi::enum_const ("YCbCr_CustomMatrix", QVideoSurfaceFormat::YCbCr_CustomMatrix, "@brief Enum constant QVideoSurfaceFormat::YCbCr_CustomMatrix"),
  "@qt\n@brief This class represents the QVideoSurfaceFormat::YCbCrColorSpace enum");

static gsi::QFlagsClass<QVideoSurfaceFormat::YCbCrColorSpace > decl_QVideoSurfaceFormat_YCbCrColorSpace_Enums ("QtMultimedia", "QVideoSurfaceFormat_QFlags_YCbCrColorSpace",
  "@qt\n@brief This class represents the QFlags<QVideoSurfaceFormat::YCbCrColorSpace> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QVideoSurfaceFormat> inject_QVideoSurfaceFormat_YCbCrColorSpace_Enum_in_parent (decl_QVideoSurfaceFormat_YCbCrColorSpace_Enum.defs ());
static gsi::ClassExt<QVideoSurfaceFormat> decl_QVideoSurfaceFormat_YCbCrColorSpace_Enum_as_child (decl_QVideoSurfaceFormat_YCbCrColorSpace_Enum, "YCbCrColorSpace");
static gsi::ClassExt<QVideoSurfaceFormat> decl_QVideoSurfaceFormat_YCbCrColorSpace_Enums_as_child (decl_QVideoSurfaceFormat_YCbCrColorSpace_Enums, "QFlags_YCbCrColorSpace");

}

