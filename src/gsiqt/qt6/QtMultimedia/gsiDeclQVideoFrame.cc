
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
*  @file gsiDeclQVideoFrame.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QVideoFrame>
#include <QImage>
#include <QPainter>
#include <QRectF>
#include <QSize>
#include <QVideoFrameFormat>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QVideoFrame

//  Constructor QVideoFrame::QVideoFrame()


static void _init_ctor_QVideoFrame_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QVideoFrame> ();
}

static void _call_ctor_QVideoFrame_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFrame *> (new QVideoFrame ());
}


//  Constructor QVideoFrame::QVideoFrame(const QVideoFrameFormat &format)


static void _init_ctor_QVideoFrame_3005 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("format");
  decl->add_arg<const QVideoFrameFormat & > (argspec_0);
  decl->set_return_new<QVideoFrame> ();
}

static void _call_ctor_QVideoFrame_3005 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrameFormat &arg1 = gsi::arg_reader<const QVideoFrameFormat & >() (args, heap);
  ret.write<QVideoFrame *> (new QVideoFrame (arg1));
}


//  Constructor QVideoFrame::QVideoFrame(const QVideoFrame &other)


static void _init_ctor_QVideoFrame_2388 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return_new<QVideoFrame> ();
}

static void _call_ctor_QVideoFrame_2388 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ret.write<QVideoFrame *> (new QVideoFrame (arg1));
}


// const unsigned char *QVideoFrame::bits(int plane)


static void _init_f_bits_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("plane");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const unsigned char * > ();
}

static void _call_f_bits_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<const unsigned char * > ((const unsigned char *)((QVideoFrame *)cls)->bits (arg1));
}


// int QVideoFrame::bytesPerLine(int plane)


static void _init_f_bytesPerLine_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("plane");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_bytesPerLine_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QVideoFrame *)cls)->bytesPerLine (arg1));
}


// qint64 QVideoFrame::endTime()


static void _init_f_endTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_endTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QVideoFrame *)cls)->endTime ());
}


// QVideoFrame::HandleType QVideoFrame::handleType()


static void _init_f_handleType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrame::HandleType>::target_type > ();
}

static void _call_f_handleType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrame::HandleType>::target_type > ((qt_gsi::Converter<QVideoFrame::HandleType>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrame::HandleType>(((QVideoFrame *)cls)->handleType ()));
}


// int QVideoFrame::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoFrame *)cls)->height ());
}


// bool QVideoFrame::isMapped()


static void _init_f_isMapped_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isMapped_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->isMapped ());
}


// bool QVideoFrame::isReadable()


static void _init_f_isReadable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isReadable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->isReadable ());
}


// bool QVideoFrame::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->isValid ());
}


// bool QVideoFrame::isWritable()


static void _init_f_isWritable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isWritable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->isWritable ());
}


// bool QVideoFrame::map(QVideoFrame::MapMode mode)


static void _init_f_map_2302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<const qt_gsi::Converter<QVideoFrame::MapMode>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_map_2302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QVideoFrame::MapMode>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QVideoFrame::MapMode>::target_type & >() (args, heap);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->map (qt_gsi::QtToCppAdaptor<QVideoFrame::MapMode>(arg1).cref()));
}


// QVideoFrame::MapMode QVideoFrame::mapMode()


static void _init_f_mapMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrame::MapMode>::target_type > ();
}

static void _call_f_mapMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrame::MapMode>::target_type > ((qt_gsi::Converter<QVideoFrame::MapMode>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrame::MapMode>(((QVideoFrame *)cls)->mapMode ()));
}


// int QVideoFrame::mappedBytes(int plane)


static void _init_f_mappedBytes_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("plane");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_mappedBytes_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QVideoFrame *)cls)->mappedBytes (arg1));
}


// QVideoFrame &QVideoFrame::operator =(const QVideoFrame &other)


static void _init_f_operator_eq__2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<QVideoFrame & > ();
}

static void _call_f_operator_eq__2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ret.write<QVideoFrame & > ((QVideoFrame &)((QVideoFrame *)cls)->operator = (arg1));
}


// bool QVideoFrame::operator!=(const QVideoFrame &other)


static void _init_f_operator_excl__eq__c2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->operator!= (arg1));
}


// bool QVideoFrame::operator==(const QVideoFrame &other)


static void _init_f_operator_eq__eq__c2388 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QVideoFrame & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2388 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVideoFrame &arg1 = gsi::arg_reader<const QVideoFrame & >() (args, heap);
  ret.write<bool > ((bool)((QVideoFrame *)cls)->operator== (arg1));
}


// void QVideoFrame::paint(QPainter *painter, const QRectF &rect, const QVideoFrame::PaintOptions &options)


static void _init_f_paint_6832 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("painter");
  decl->add_arg<QPainter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("rect");
  decl->add_arg<const QRectF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("options");
  decl->add_arg<const QVideoFrame::PaintOptions & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_paint_6832 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPainter *arg1 = gsi::arg_reader<QPainter * >() (args, heap);
  const QRectF &arg2 = gsi::arg_reader<const QRectF & >() (args, heap);
  const QVideoFrame::PaintOptions &arg3 = gsi::arg_reader<const QVideoFrame::PaintOptions & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoFrame *)cls)->paint (arg1, arg2, arg3);
}


// QVideoFrameFormat::PixelFormat QVideoFrame::pixelFormat()


static void _init_f_pixelFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QVideoFrameFormat::PixelFormat>::target_type > ();
}

static void _call_f_pixelFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QVideoFrameFormat::PixelFormat>::target_type > ((qt_gsi::Converter<QVideoFrameFormat::PixelFormat>::target_type)qt_gsi::CppToQtAdaptor<QVideoFrameFormat::PixelFormat>(((QVideoFrame *)cls)->pixelFormat ()));
}


// int QVideoFrame::planeCount()


static void _init_f_planeCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_planeCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoFrame *)cls)->planeCount ());
}


// void QVideoFrame::setEndTime(qint64 time)


static void _init_f_setEndTime_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("time");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setEndTime_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoFrame *)cls)->setEndTime (arg1);
}


// void QVideoFrame::setStartTime(qint64 time)


static void _init_f_setStartTime_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("time");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStartTime_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = gsi::arg_reader<qint64 >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoFrame *)cls)->setStartTime (arg1);
}


// void QVideoFrame::setSubtitleText(const QString &text)


static void _init_f_setSubtitleText_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("text");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setSubtitleText_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoFrame *)cls)->setSubtitleText (arg1);
}


// QSize QVideoFrame::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QVideoFrame *)cls)->size ());
}


// qint64 QVideoFrame::startTime()


static void _init_f_startTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_startTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QVideoFrame *)cls)->startTime ());
}


// QString QVideoFrame::subtitleText()


static void _init_f_subtitleText_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_subtitleText_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QVideoFrame *)cls)->subtitleText ());
}


// QVideoFrameFormat QVideoFrame::surfaceFormat()


static void _init_f_surfaceFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVideoFrameFormat > ();
}

static void _call_f_surfaceFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFrameFormat > ((QVideoFrameFormat)((QVideoFrame *)cls)->surfaceFormat ());
}


// void QVideoFrame::swap(QVideoFrame &other)


static void _init_f_swap_1693 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QVideoFrame & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1693 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QVideoFrame &arg1 = gsi::arg_reader<QVideoFrame & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoFrame *)cls)->swap (arg1);
}


// QImage QVideoFrame::toImage()


static void _init_f_toImage_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QImage > ();
}

static void _call_f_toImage_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImage > ((QImage)((QVideoFrame *)cls)->toImage ());
}


// void QVideoFrame::unmap()


static void _init_f_unmap_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unmap_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QVideoFrame *)cls)->unmap ();
}


// int QVideoFrame::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QVideoFrame *)cls)->width ());
}



namespace gsi
{

static gsi::Methods methods_QVideoFrame () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoFrame::QVideoFrame()\nThis method creates an object of class QVideoFrame.", &_init_ctor_QVideoFrame_0, &_call_ctor_QVideoFrame_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoFrame::QVideoFrame(const QVideoFrameFormat &format)\nThis method creates an object of class QVideoFrame.", &_init_ctor_QVideoFrame_3005, &_call_ctor_QVideoFrame_3005);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QVideoFrame::QVideoFrame(const QVideoFrame &other)\nThis method creates an object of class QVideoFrame.", &_init_ctor_QVideoFrame_2388, &_call_ctor_QVideoFrame_2388);
  methods += new qt_gsi::GenericMethod ("bits", "@brief Method const unsigned char *QVideoFrame::bits(int plane)\n", true, &_init_f_bits_c767, &_call_f_bits_c767);
  methods += new qt_gsi::GenericMethod ("bytesPerLine", "@brief Method int QVideoFrame::bytesPerLine(int plane)\n", true, &_init_f_bytesPerLine_c767, &_call_f_bytesPerLine_c767);
  methods += new qt_gsi::GenericMethod (":endTime", "@brief Method qint64 QVideoFrame::endTime()\n", true, &_init_f_endTime_c0, &_call_f_endTime_c0);
  methods += new qt_gsi::GenericMethod ("handleType", "@brief Method QVideoFrame::HandleType QVideoFrame::handleType()\n", true, &_init_f_handleType_c0, &_call_f_handleType_c0);
  methods += new qt_gsi::GenericMethod ("height", "@brief Method int QVideoFrame::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("isMapped?", "@brief Method bool QVideoFrame::isMapped()\n", true, &_init_f_isMapped_c0, &_call_f_isMapped_c0);
  methods += new qt_gsi::GenericMethod ("isReadable?", "@brief Method bool QVideoFrame::isReadable()\n", true, &_init_f_isReadable_c0, &_call_f_isReadable_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QVideoFrame::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("isWritable?", "@brief Method bool QVideoFrame::isWritable()\n", true, &_init_f_isWritable_c0, &_call_f_isWritable_c0);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method bool QVideoFrame::map(QVideoFrame::MapMode mode)\n", false, &_init_f_map_2302, &_call_f_map_2302);
  methods += new qt_gsi::GenericMethod ("mapMode", "@brief Method QVideoFrame::MapMode QVideoFrame::mapMode()\n", true, &_init_f_mapMode_c0, &_call_f_mapMode_c0);
  methods += new qt_gsi::GenericMethod ("mappedBytes", "@brief Method int QVideoFrame::mappedBytes(int plane)\n", true, &_init_f_mappedBytes_c767, &_call_f_mappedBytes_c767);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QVideoFrame &QVideoFrame::operator =(const QVideoFrame &other)\n", false, &_init_f_operator_eq__2388, &_call_f_operator_eq__2388);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QVideoFrame::operator!=(const QVideoFrame &other)\n", true, &_init_f_operator_excl__eq__c2388, &_call_f_operator_excl__eq__c2388);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QVideoFrame::operator==(const QVideoFrame &other)\n", true, &_init_f_operator_eq__eq__c2388, &_call_f_operator_eq__eq__c2388);
  methods += new qt_gsi::GenericMethod ("paint", "@brief Method void QVideoFrame::paint(QPainter *painter, const QRectF &rect, const QVideoFrame::PaintOptions &options)\n", false, &_init_f_paint_6832, &_call_f_paint_6832);
  methods += new qt_gsi::GenericMethod ("pixelFormat", "@brief Method QVideoFrameFormat::PixelFormat QVideoFrame::pixelFormat()\n", true, &_init_f_pixelFormat_c0, &_call_f_pixelFormat_c0);
  methods += new qt_gsi::GenericMethod ("planeCount", "@brief Method int QVideoFrame::planeCount()\n", true, &_init_f_planeCount_c0, &_call_f_planeCount_c0);
  methods += new qt_gsi::GenericMethod ("setEndTime|endTime=", "@brief Method void QVideoFrame::setEndTime(qint64 time)\n", false, &_init_f_setEndTime_986, &_call_f_setEndTime_986);
  methods += new qt_gsi::GenericMethod ("setStartTime|startTime=", "@brief Method void QVideoFrame::setStartTime(qint64 time)\n", false, &_init_f_setStartTime_986, &_call_f_setStartTime_986);
  methods += new qt_gsi::GenericMethod ("setSubtitleText", "@brief Method void QVideoFrame::setSubtitleText(const QString &text)\n", false, &_init_f_setSubtitleText_2025, &_call_f_setSubtitleText_2025);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method QSize QVideoFrame::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod (":startTime", "@brief Method qint64 QVideoFrame::startTime()\n", true, &_init_f_startTime_c0, &_call_f_startTime_c0);
  methods += new qt_gsi::GenericMethod ("subtitleText", "@brief Method QString QVideoFrame::subtitleText()\n", true, &_init_f_subtitleText_c0, &_call_f_subtitleText_c0);
  methods += new qt_gsi::GenericMethod ("surfaceFormat", "@brief Method QVideoFrameFormat QVideoFrame::surfaceFormat()\n", true, &_init_f_surfaceFormat_c0, &_call_f_surfaceFormat_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QVideoFrame::swap(QVideoFrame &other)\n", false, &_init_f_swap_1693, &_call_f_swap_1693);
  methods += new qt_gsi::GenericMethod ("toImage", "@brief Method QImage QVideoFrame::toImage()\n", true, &_init_f_toImage_c0, &_call_f_toImage_c0);
  methods += new qt_gsi::GenericMethod ("unmap", "@brief Method void QVideoFrame::unmap()\n", false, &_init_f_unmap_0, &_call_f_unmap_0);
  methods += new qt_gsi::GenericMethod ("width", "@brief Method int QVideoFrame::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  return methods;
}

gsi::Class<QVideoFrame> decl_QVideoFrame ("QtMultimedia", "QVideoFrame",
  methods_QVideoFrame (),
  "@qt\n@brief Binding of QVideoFrame");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QVideoFrame> &qtdecl_QVideoFrame () { return decl_QVideoFrame; }

}


//  Implementation of the enum wrapper class for QVideoFrame::HandleType
namespace qt_gsi
{

static gsi::Enum<QVideoFrame::HandleType> decl_QVideoFrame_HandleType_Enum ("QtMultimedia", "QVideoFrame_HandleType",
    gsi::enum_const ("NoHandle", QVideoFrame::NoHandle, "@brief Enum constant QVideoFrame::NoHandle") +
    gsi::enum_const ("RhiTextureHandle", QVideoFrame::RhiTextureHandle, "@brief Enum constant QVideoFrame::RhiTextureHandle"),
  "@qt\n@brief This class represents the QVideoFrame::HandleType enum");

static gsi::QFlagsClass<QVideoFrame::HandleType > decl_QVideoFrame_HandleType_Enums ("QtMultimedia", "QVideoFrame_QFlags_HandleType",
  "@qt\n@brief This class represents the QFlags<QVideoFrame::HandleType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QVideoFrame> inject_QVideoFrame_HandleType_Enum_in_parent (decl_QVideoFrame_HandleType_Enum.defs ());
static gsi::ClassExt<QVideoFrame> decl_QVideoFrame_HandleType_Enum_as_child (decl_QVideoFrame_HandleType_Enum, "HandleType");
static gsi::ClassExt<QVideoFrame> decl_QVideoFrame_HandleType_Enums_as_child (decl_QVideoFrame_HandleType_Enums, "QFlags_HandleType");

}


//  Implementation of the enum wrapper class for QVideoFrame::MapMode
namespace qt_gsi
{

static gsi::Enum<QVideoFrame::MapMode> decl_QVideoFrame_MapMode_Enum ("QtMultimedia", "QVideoFrame_MapMode",
    gsi::enum_const ("NotMapped", QVideoFrame::NotMapped, "@brief Enum constant QVideoFrame::NotMapped") +
    gsi::enum_const ("ReadOnly", QVideoFrame::ReadOnly, "@brief Enum constant QVideoFrame::ReadOnly") +
    gsi::enum_const ("WriteOnly", QVideoFrame::WriteOnly, "@brief Enum constant QVideoFrame::WriteOnly") +
    gsi::enum_const ("ReadWrite", QVideoFrame::ReadWrite, "@brief Enum constant QVideoFrame::ReadWrite"),
  "@qt\n@brief This class represents the QVideoFrame::MapMode enum");

static gsi::QFlagsClass<QVideoFrame::MapMode > decl_QVideoFrame_MapMode_Enums ("QtMultimedia", "QVideoFrame_QFlags_MapMode",
  "@qt\n@brief This class represents the QFlags<QVideoFrame::MapMode> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QVideoFrame> inject_QVideoFrame_MapMode_Enum_in_parent (decl_QVideoFrame_MapMode_Enum.defs ());
static gsi::ClassExt<QVideoFrame> decl_QVideoFrame_MapMode_Enum_as_child (decl_QVideoFrame_MapMode_Enum, "MapMode");
static gsi::ClassExt<QVideoFrame> decl_QVideoFrame_MapMode_Enums_as_child (decl_QVideoFrame_MapMode_Enums, "QFlags_MapMode");

}

