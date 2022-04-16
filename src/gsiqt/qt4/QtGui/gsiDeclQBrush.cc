
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
*  @file gsiDeclQBrush.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QBrush>
#include <QColor>
#include <QGradient>
#include <QImage>
#include <QMatrix>
#include <QPixmap>
#include <QTransform>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QBrush

//  Constructor QBrush::QBrush()


static void _init_ctor_QBrush_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush *> (new QBrush ());
}


//  Constructor QBrush::QBrush(Qt::BrushStyle bs)


static void _init_ctor_QBrush_1794 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bs");
  decl->add_arg<const qt_gsi::Converter<Qt::BrushStyle>::target_type & > (argspec_0);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_1794 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::BrushStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::BrushStyle>::target_type & >() (args, heap);
  ret.write<QBrush *> (new QBrush (qt_gsi::QtToCppAdaptor<Qt::BrushStyle>(arg1).cref()));
}


//  Constructor QBrush::QBrush(const QColor &color, Qt::BrushStyle bs)


static void _init_ctor_QBrush_3591 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bs", true, "Qt::SolidPattern");
  decl->add_arg<const qt_gsi::Converter<Qt::BrushStyle>::target_type & > (argspec_1);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_3591 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  const qt_gsi::Converter<Qt::BrushStyle>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::BrushStyle>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::BrushStyle>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::BrushStyle>(heap, Qt::SolidPattern), heap);
  ret.write<QBrush *> (new QBrush (arg1, qt_gsi::QtToCppAdaptor<Qt::BrushStyle>(arg2).cref()));
}


//  Constructor QBrush::QBrush(Qt::GlobalColor color, Qt::BrushStyle bs)


static void _init_ctor_QBrush_3539 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const qt_gsi::Converter<Qt::GlobalColor>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("bs", true, "Qt::SolidPattern");
  decl->add_arg<const qt_gsi::Converter<Qt::BrushStyle>::target_type & > (argspec_1);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_3539 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GlobalColor>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GlobalColor>::target_type & >() (args, heap);
  const qt_gsi::Converter<Qt::BrushStyle>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::BrushStyle>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::BrushStyle>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::BrushStyle>(heap, Qt::SolidPattern), heap);
  ret.write<QBrush *> (new QBrush (qt_gsi::QtToCppAdaptor<Qt::GlobalColor>(arg1).cref(), qt_gsi::QtToCppAdaptor<Qt::BrushStyle>(arg2).cref()));
}


//  Constructor QBrush::QBrush(const QColor &color, const QPixmap &pixmap)


static void _init_ctor_QBrush_3814 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_1);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_3814 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  const QPixmap &arg2 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<QBrush *> (new QBrush (arg1, arg2));
}


//  Constructor QBrush::QBrush(Qt::GlobalColor color, const QPixmap &pixmap)


static void _init_ctor_QBrush_3762 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const qt_gsi::Converter<Qt::GlobalColor>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_1);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_3762 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GlobalColor>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GlobalColor>::target_type & >() (args, heap);
  const QPixmap &arg2 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<QBrush *> (new QBrush (qt_gsi::QtToCppAdaptor<Qt::GlobalColor>(arg1).cref(), arg2));
}


//  Constructor QBrush::QBrush(const QPixmap &pixmap)


static void _init_ctor_QBrush_2017 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_2017 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  ret.write<QBrush *> (new QBrush (arg1));
}


//  Constructor QBrush::QBrush(const QImage &image)


static void _init_ctor_QBrush_1877 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<const QImage & > (argspec_0);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_1877 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImage &arg1 = gsi::arg_reader<const QImage & >() (args, heap);
  ret.write<QBrush *> (new QBrush (arg1));
}


//  Constructor QBrush::QBrush(const QBrush &brush)


static void _init_ctor_QBrush_1910 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_1910 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  ret.write<QBrush *> (new QBrush (arg1));
}


//  Constructor QBrush::QBrush(const QGradient &gradient)


static void _init_ctor_QBrush_2208 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("gradient");
  decl->add_arg<const QGradient & > (argspec_0);
  decl->set_return_new<QBrush> ();
}

static void _call_ctor_QBrush_2208 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QGradient &arg1 = gsi::arg_reader<const QGradient & >() (args, heap);
  ret.write<QBrush *> (new QBrush (arg1));
}


// const QColor &QBrush::color()


static void _init_f_color_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QColor & > ();
}

static void _call_f_color_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QColor & > ((const QColor &)((QBrush *)cls)->color ());
}


// const QGradient *QBrush::gradient()


static void _init_f_gradient_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QGradient * > ();
}

static void _call_f_gradient_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QGradient * > ((const QGradient *)((QBrush *)cls)->gradient ());
}


// bool QBrush::isDetached()


static void _init_f_isDetached_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDetached_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QBrush *)cls)->isDetached ());
}


// bool QBrush::isOpaque()


static void _init_f_isOpaque_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isOpaque_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QBrush *)cls)->isOpaque ());
}


// const QMatrix &QBrush::matrix()


static void _init_f_matrix_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMatrix & > ();
}

static void _call_f_matrix_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMatrix & > ((const QMatrix &)((QBrush *)cls)->matrix ());
}


// bool QBrush::operator!=(const QBrush &b)


static void _init_f_operator_excl__eq__c1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  ret.write<bool > ((bool)((QBrush *)cls)->operator!= (arg1));
}


// QBrush &QBrush::operator=(const QBrush &brush)


static void _init_f_operator_eq__1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<QBrush & > ();
}

static void _call_f_operator_eq__1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  ret.write<QBrush & > ((QBrush &)((QBrush *)cls)->operator= (arg1));
}


// bool QBrush::operator==(const QBrush &b)


static void _init_f_operator_eq__eq__c1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  ret.write<bool > ((bool)((QBrush *)cls)->operator== (arg1));
}


// void QBrush::setColor(const QColor &color)


static void _init_f_setColor_1905 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColor_1905 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setColor (arg1);
}


// void QBrush::setColor(Qt::GlobalColor color)


static void _init_f_setColor_1853 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const qt_gsi::Converter<Qt::GlobalColor>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColor_1853 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GlobalColor>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GlobalColor>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setColor (qt_gsi::QtToCppAdaptor<Qt::GlobalColor>(arg1).cref());
}


// void QBrush::setMatrix(const QMatrix &mat)


static void _init_f_setMatrix_2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mat");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMatrix_2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setMatrix (arg1);
}


// void QBrush::setStyle(Qt::BrushStyle)


static void _init_f_setStyle_1794 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::BrushStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStyle_1794 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::BrushStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::BrushStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setStyle (qt_gsi::QtToCppAdaptor<Qt::BrushStyle>(arg1).cref());
}


// void QBrush::setTexture(const QPixmap &pixmap)


static void _init_f_setTexture_2017 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pixmap");
  decl->add_arg<const QPixmap & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTexture_2017 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPixmap &arg1 = gsi::arg_reader<const QPixmap & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setTexture (arg1);
}


// void QBrush::setTextureImage(const QImage &image)


static void _init_f_setTextureImage_1877 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("image");
  decl->add_arg<const QImage & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextureImage_1877 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QImage &arg1 = gsi::arg_reader<const QImage & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setTextureImage (arg1);
}


// void QBrush::setTransform(const QTransform &)


static void _init_f_setTransform_2350 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QTransform & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTransform_2350 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTransform &arg1 = gsi::arg_reader<const QTransform & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBrush *)cls)->setTransform (arg1);
}


// Qt::BrushStyle QBrush::style()


static void _init_f_style_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::BrushStyle>::target_type > ();
}

static void _call_f_style_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::BrushStyle>::target_type > ((qt_gsi::Converter<Qt::BrushStyle>::target_type)qt_gsi::CppToQtAdaptor<Qt::BrushStyle>(((QBrush *)cls)->style ()));
}


// QPixmap QBrush::texture()


static void _init_f_texture_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPixmap > ();
}

static void _call_f_texture_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPixmap > ((QPixmap)((QBrush *)cls)->texture ());
}


// QImage QBrush::textureImage()


static void _init_f_textureImage_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QImage > ();
}

static void _call_f_textureImage_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QImage > ((QImage)((QBrush *)cls)->textureImage ());
}


// QTransform QBrush::transform()


static void _init_f_transform_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTransform > ();
}

static void _call_f_transform_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTransform > ((QTransform)((QBrush *)cls)->transform ());
}



namespace gsi
{

static gsi::Methods methods_QBrush () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush()\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_0, &_call_ctor_QBrush_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(Qt::BrushStyle bs)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_1794, &_call_ctor_QBrush_1794);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(const QColor &color, Qt::BrushStyle bs)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_3591, &_call_ctor_QBrush_3591);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(Qt::GlobalColor color, Qt::BrushStyle bs)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_3539, &_call_ctor_QBrush_3539);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(const QColor &color, const QPixmap &pixmap)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_3814, &_call_ctor_QBrush_3814);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(Qt::GlobalColor color, const QPixmap &pixmap)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_3762, &_call_ctor_QBrush_3762);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(const QPixmap &pixmap)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_2017, &_call_ctor_QBrush_2017);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(const QImage &image)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_1877, &_call_ctor_QBrush_1877);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(const QBrush &brush)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_1910, &_call_ctor_QBrush_1910);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBrush::QBrush(const QGradient &gradient)\nThis method creates an object of class QBrush.", &_init_ctor_QBrush_2208, &_call_ctor_QBrush_2208);
  methods += new qt_gsi::GenericMethod (":color", "@brief Method const QColor &QBrush::color()\n", true, &_init_f_color_c0, &_call_f_color_c0);
  methods += new qt_gsi::GenericMethod ("gradient", "@brief Method const QGradient *QBrush::gradient()\n", true, &_init_f_gradient_c0, &_call_f_gradient_c0);
  methods += new qt_gsi::GenericMethod ("isDetached?", "@brief Method bool QBrush::isDetached()\n", true, &_init_f_isDetached_c0, &_call_f_isDetached_c0);
  methods += new qt_gsi::GenericMethod ("isOpaque?", "@brief Method bool QBrush::isOpaque()\n", true, &_init_f_isOpaque_c0, &_call_f_isOpaque_c0);
  methods += new qt_gsi::GenericMethod (":matrix", "@brief Method const QMatrix &QBrush::matrix()\n", true, &_init_f_matrix_c0, &_call_f_matrix_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QBrush::operator!=(const QBrush &b)\n", true, &_init_f_operator_excl__eq__c1910, &_call_f_operator_excl__eq__c1910);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QBrush &QBrush::operator=(const QBrush &brush)\n", false, &_init_f_operator_eq__1910, &_call_f_operator_eq__1910);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QBrush::operator==(const QBrush &b)\n", true, &_init_f_operator_eq__eq__c1910, &_call_f_operator_eq__eq__c1910);
  methods += new qt_gsi::GenericMethod ("setColor|color=", "@brief Method void QBrush::setColor(const QColor &color)\n", false, &_init_f_setColor_1905, &_call_f_setColor_1905);
  methods += new qt_gsi::GenericMethod ("setColor|color=", "@brief Method void QBrush::setColor(Qt::GlobalColor color)\n", false, &_init_f_setColor_1853, &_call_f_setColor_1853);
  methods += new qt_gsi::GenericMethod ("setMatrix|matrix=", "@brief Method void QBrush::setMatrix(const QMatrix &mat)\n", false, &_init_f_setMatrix_2023, &_call_f_setMatrix_2023);
  methods += new qt_gsi::GenericMethod ("setStyle|style=", "@brief Method void QBrush::setStyle(Qt::BrushStyle)\n", false, &_init_f_setStyle_1794, &_call_f_setStyle_1794);
  methods += new qt_gsi::GenericMethod ("setTexture|texture=", "@brief Method void QBrush::setTexture(const QPixmap &pixmap)\n", false, &_init_f_setTexture_2017, &_call_f_setTexture_2017);
  methods += new qt_gsi::GenericMethod ("setTextureImage|textureImage=", "@brief Method void QBrush::setTextureImage(const QImage &image)\n", false, &_init_f_setTextureImage_1877, &_call_f_setTextureImage_1877);
  methods += new qt_gsi::GenericMethod ("setTransform|transform=", "@brief Method void QBrush::setTransform(const QTransform &)\n", false, &_init_f_setTransform_2350, &_call_f_setTransform_2350);
  methods += new qt_gsi::GenericMethod (":style", "@brief Method Qt::BrushStyle QBrush::style()\n", true, &_init_f_style_c0, &_call_f_style_c0);
  methods += new qt_gsi::GenericMethod (":texture", "@brief Method QPixmap QBrush::texture()\n", true, &_init_f_texture_c0, &_call_f_texture_c0);
  methods += new qt_gsi::GenericMethod (":textureImage", "@brief Method QImage QBrush::textureImage()\n", true, &_init_f_textureImage_c0, &_call_f_textureImage_c0);
  methods += new qt_gsi::GenericMethod (":transform", "@brief Method QTransform QBrush::transform()\n", true, &_init_f_transform_c0, &_call_f_transform_c0);
  return methods;
}

gsi::Class<QBrush> decl_QBrush ("QtGui", "QBrush",
  methods_QBrush (),
  "@qt\n@brief Binding of QBrush");


GSI_QTGUI_PUBLIC gsi::Class<QBrush> &qtdecl_QBrush () { return decl_QBrush; }

}

