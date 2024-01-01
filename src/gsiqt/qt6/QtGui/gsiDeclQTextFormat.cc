
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
*  @file gsiDeclQTextFormat.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextFormat>
#include <QBrush>
#include <QColor>
#include <QPen>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextLength>
#include <QTextListFormat>
#include <QTextTableCellFormat>
#include <QTextTableFormat>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextFormat

//  Constructor QTextFormat::QTextFormat()


static void _init_ctor_QTextFormat_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextFormat> ();
}

static void _call_ctor_QTextFormat_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFormat *> (new QTextFormat ());
}


//  Constructor QTextFormat::QTextFormat(int type)


static void _init_ctor_QTextFormat_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QTextFormat> ();
}

static void _call_ctor_QTextFormat_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextFormat *> (new QTextFormat (arg1));
}


//  Constructor QTextFormat::QTextFormat(const QTextFormat &rhs)


static void _init_ctor_QTextFormat_2432 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return_new<QTextFormat> ();
}

static void _call_ctor_QTextFormat_2432 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  ret.write<QTextFormat *> (new QTextFormat (arg1));
}


// QBrush QTextFormat::background()


static void _init_f_background_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_background_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextFormat *)cls)->background ());
}


// bool QTextFormat::boolProperty(int propertyId)


static void _init_f_boolProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_boolProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QTextFormat *)cls)->boolProperty (arg1));
}


// QBrush QTextFormat::brushProperty(int propertyId)


static void _init_f_brushProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QBrush > ();
}

static void _call_f_brushProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QBrush > ((QBrush)((QTextFormat *)cls)->brushProperty (arg1));
}


// void QTextFormat::clearBackground()


static void _init_f_clearBackground_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearBackground_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->clearBackground ();
}


// void QTextFormat::clearForeground()


static void _init_f_clearForeground_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_clearForeground_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->clearForeground ();
}


// void QTextFormat::clearProperty(int propertyId)


static void _init_f_clearProperty_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_clearProperty_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->clearProperty (arg1);
}


// QColor QTextFormat::colorProperty(int propertyId)


static void _init_f_colorProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QColor > ();
}

static void _call_f_colorProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QColor > ((QColor)((QTextFormat *)cls)->colorProperty (arg1));
}


// double QTextFormat::doubleProperty(int propertyId)


static void _init_f_doubleProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<double > ();
}

static void _call_f_doubleProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<double > ((double)((QTextFormat *)cls)->doubleProperty (arg1));
}


// QBrush QTextFormat::foreground()


static void _init_f_foreground_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_foreground_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QTextFormat *)cls)->foreground ());
}


// bool QTextFormat::hasProperty(int propertyId)


static void _init_f_hasProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QTextFormat *)cls)->hasProperty (arg1));
}


// int QTextFormat::intProperty(int propertyId)


static void _init_f_intProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_intProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QTextFormat *)cls)->intProperty (arg1));
}


// bool QTextFormat::isBlockFormat()


static void _init_f_isBlockFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBlockFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isBlockFormat ());
}


// bool QTextFormat::isCharFormat()


static void _init_f_isCharFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCharFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isCharFormat ());
}


// bool QTextFormat::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isEmpty ());
}


// bool QTextFormat::isFrameFormat()


static void _init_f_isFrameFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isFrameFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isFrameFormat ());
}


// bool QTextFormat::isImageFormat()


static void _init_f_isImageFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isImageFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isImageFormat ());
}


// bool QTextFormat::isListFormat()


static void _init_f_isListFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isListFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isListFormat ());
}


// bool QTextFormat::isTableCellFormat()


static void _init_f_isTableCellFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTableCellFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isTableCellFormat ());
}


// bool QTextFormat::isTableFormat()


static void _init_f_isTableFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTableFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isTableFormat ());
}


// bool QTextFormat::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTextFormat *)cls)->isValid ());
}


// Qt::LayoutDirection QTextFormat::layoutDirection()


static void _init_f_layoutDirection_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::LayoutDirection>::target_type > ();
}

static void _call_f_layoutDirection_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::LayoutDirection>::target_type > ((qt_gsi::Converter<Qt::LayoutDirection>::target_type)qt_gsi::CppToQtAdaptor<Qt::LayoutDirection>(((QTextFormat *)cls)->layoutDirection ()));
}


// QTextLength QTextFormat::lengthProperty(int propertyId)


static void _init_f_lengthProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextLength > ();
}

static void _call_f_lengthProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTextLength > ((QTextLength)((QTextFormat *)cls)->lengthProperty (arg1));
}


// QList<QTextLength> QTextFormat::lengthVectorProperty(int propertyId)


static void _init_f_lengthVectorProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QList<QTextLength> > ();
}

static void _call_f_lengthVectorProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QList<QTextLength> > ((QList<QTextLength>)((QTextFormat *)cls)->lengthVectorProperty (arg1));
}


// void QTextFormat::merge(const QTextFormat &other)


static void _init_f_merge_2432 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_merge_2432 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->merge (arg1);
}


// int QTextFormat::objectIndex()


static void _init_f_objectIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_objectIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFormat *)cls)->objectIndex ());
}


// int QTextFormat::objectType()


static void _init_f_objectType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_objectType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFormat *)cls)->objectType ());
}


// bool QTextFormat::operator!=(const QTextFormat &rhs)


static void _init_f_operator_excl__eq__c2432 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2432 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  ret.write<bool > ((bool)((QTextFormat *)cls)->operator!= (arg1));
}


// QTextFormat &QTextFormat::operator=(const QTextFormat &rhs)


static void _init_f_operator_eq__2432 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return<QTextFormat & > ();
}

static void _call_f_operator_eq__2432 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  ret.write<QTextFormat & > ((QTextFormat &)((QTextFormat *)cls)->operator= (arg1));
}


// bool QTextFormat::operator==(const QTextFormat &rhs)


static void _init_f_operator_eq__eq__c2432 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("rhs");
  decl->add_arg<const QTextFormat & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2432 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTextFormat &arg1 = gsi::arg_reader<const QTextFormat & >() (args, heap);
  ret.write<bool > ((bool)((QTextFormat *)cls)->operator== (arg1));
}


// QPen QTextFormat::penProperty(int propertyId)


static void _init_f_penProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QPen > ();
}

static void _call_f_penProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QPen > ((QPen)((QTextFormat *)cls)->penProperty (arg1));
}


// QMap<int, QVariant> QTextFormat::properties()


static void _init_f_properties_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMap<int, QVariant> > ();
}

static void _call_f_properties_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMap<int, QVariant> > ((QMap<int, QVariant>)((QTextFormat *)cls)->properties ());
}


// QVariant QTextFormat::property(int propertyId)


static void _init_f_property_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_property_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QVariant > ((QVariant)((QTextFormat *)cls)->property (arg1));
}


// int QTextFormat::propertyCount()


static void _init_f_propertyCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_propertyCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFormat *)cls)->propertyCount ());
}


// void QTextFormat::setBackground(const QBrush &brush)


static void _init_f_setBackground_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBackground_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setBackground (arg1);
}


// void QTextFormat::setForeground(const QBrush &brush)


static void _init_f_setForeground_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setForeground_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setForeground (arg1);
}


// void QTextFormat::setLayoutDirection(Qt::LayoutDirection direction)


static void _init_f_setLayoutDirection_2316 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("direction");
  decl->add_arg<const qt_gsi::Converter<Qt::LayoutDirection>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLayoutDirection_2316 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::LayoutDirection>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::LayoutDirection>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setLayoutDirection (qt_gsi::QtToCppAdaptor<Qt::LayoutDirection>(arg1).cref());
}


// void QTextFormat::setObjectIndex(int object)


static void _init_f_setObjectIndex_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setObjectIndex_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setObjectIndex (arg1);
}


// void QTextFormat::setObjectType(int type)


static void _init_f_setObjectType_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setObjectType_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setObjectType (arg1);
}


// void QTextFormat::setProperty(int propertyId, const QVariant &value)


static void _init_f_setProperty_2778 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setProperty_2778 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setProperty (arg1, arg2);
}


// void QTextFormat::setProperty(int propertyId, const QList<QTextLength> &lengths)


static void _init_f_setProperty_3699 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("lengths");
  decl->add_arg<const QList<QTextLength> & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setProperty_3699 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QList<QTextLength> &arg2 = gsi::arg_reader<const QList<QTextLength> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->setProperty (arg1, arg2);
}


// QString QTextFormat::stringProperty(int propertyId)


static void _init_f_stringProperty_c767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("propertyId");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_stringProperty_c767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QString > ((QString)((QTextFormat *)cls)->stringProperty (arg1));
}


// void QTextFormat::swap(QTextFormat &other)


static void _init_f_swap_1737 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QTextFormat & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1737 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextFormat &arg1 = gsi::arg_reader<QTextFormat & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTextFormat *)cls)->swap (arg1);
}


// QTextBlockFormat QTextFormat::toBlockFormat()


static void _init_f_toBlockFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextBlockFormat > ();
}

static void _call_f_toBlockFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextBlockFormat > ((QTextBlockFormat)((QTextFormat *)cls)->toBlockFormat ());
}


// QTextCharFormat QTextFormat::toCharFormat()


static void _init_f_toCharFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextCharFormat > ();
}

static void _call_f_toCharFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCharFormat > ((QTextCharFormat)((QTextFormat *)cls)->toCharFormat ());
}


// QTextFrameFormat QTextFormat::toFrameFormat()


static void _init_f_toFrameFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextFrameFormat > ();
}

static void _call_f_toFrameFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextFrameFormat > ((QTextFrameFormat)((QTextFormat *)cls)->toFrameFormat ());
}


// QTextImageFormat QTextFormat::toImageFormat()


static void _init_f_toImageFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextImageFormat > ();
}

static void _call_f_toImageFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextImageFormat > ((QTextImageFormat)((QTextFormat *)cls)->toImageFormat ());
}


// QTextListFormat QTextFormat::toListFormat()


static void _init_f_toListFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextListFormat > ();
}

static void _call_f_toListFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextListFormat > ((QTextListFormat)((QTextFormat *)cls)->toListFormat ());
}


// QTextTableCellFormat QTextFormat::toTableCellFormat()


static void _init_f_toTableCellFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextTableCellFormat > ();
}

static void _call_f_toTableCellFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextTableCellFormat > ((QTextTableCellFormat)((QTextFormat *)cls)->toTableCellFormat ());
}


// QTextTableFormat QTextFormat::toTableFormat()


static void _init_f_toTableFormat_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QTextTableFormat > ();
}

static void _call_f_toTableFormat_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextTableFormat > ((QTextTableFormat)((QTextFormat *)cls)->toTableFormat ());
}


// int QTextFormat::type()


static void _init_f_type_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_type_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextFormat *)cls)->type ());
}



namespace gsi
{

static gsi::Methods methods_QTextFormat () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFormat::QTextFormat()\nThis method creates an object of class QTextFormat.", &_init_ctor_QTextFormat_0, &_call_ctor_QTextFormat_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFormat::QTextFormat(int type)\nThis method creates an object of class QTextFormat.", &_init_ctor_QTextFormat_767, &_call_ctor_QTextFormat_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextFormat::QTextFormat(const QTextFormat &rhs)\nThis method creates an object of class QTextFormat.", &_init_ctor_QTextFormat_2432, &_call_ctor_QTextFormat_2432);
  methods += new qt_gsi::GenericMethod (":background", "@brief Method QBrush QTextFormat::background()\n", true, &_init_f_background_c0, &_call_f_background_c0);
  methods += new qt_gsi::GenericMethod ("boolProperty", "@brief Method bool QTextFormat::boolProperty(int propertyId)\n", true, &_init_f_boolProperty_c767, &_call_f_boolProperty_c767);
  methods += new qt_gsi::GenericMethod ("brushProperty", "@brief Method QBrush QTextFormat::brushProperty(int propertyId)\n", true, &_init_f_brushProperty_c767, &_call_f_brushProperty_c767);
  methods += new qt_gsi::GenericMethod ("clearBackground", "@brief Method void QTextFormat::clearBackground()\n", false, &_init_f_clearBackground_0, &_call_f_clearBackground_0);
  methods += new qt_gsi::GenericMethod ("clearForeground", "@brief Method void QTextFormat::clearForeground()\n", false, &_init_f_clearForeground_0, &_call_f_clearForeground_0);
  methods += new qt_gsi::GenericMethod ("clearProperty", "@brief Method void QTextFormat::clearProperty(int propertyId)\n", false, &_init_f_clearProperty_767, &_call_f_clearProperty_767);
  methods += new qt_gsi::GenericMethod ("colorProperty", "@brief Method QColor QTextFormat::colorProperty(int propertyId)\n", true, &_init_f_colorProperty_c767, &_call_f_colorProperty_c767);
  methods += new qt_gsi::GenericMethod ("doubleProperty", "@brief Method double QTextFormat::doubleProperty(int propertyId)\n", true, &_init_f_doubleProperty_c767, &_call_f_doubleProperty_c767);
  methods += new qt_gsi::GenericMethod (":foreground", "@brief Method QBrush QTextFormat::foreground()\n", true, &_init_f_foreground_c0, &_call_f_foreground_c0);
  methods += new qt_gsi::GenericMethod ("hasProperty", "@brief Method bool QTextFormat::hasProperty(int propertyId)\n", true, &_init_f_hasProperty_c767, &_call_f_hasProperty_c767);
  methods += new qt_gsi::GenericMethod ("intProperty", "@brief Method int QTextFormat::intProperty(int propertyId)\n", true, &_init_f_intProperty_c767, &_call_f_intProperty_c767);
  methods += new qt_gsi::GenericMethod ("isBlockFormat?", "@brief Method bool QTextFormat::isBlockFormat()\n", true, &_init_f_isBlockFormat_c0, &_call_f_isBlockFormat_c0);
  methods += new qt_gsi::GenericMethod ("isCharFormat?", "@brief Method bool QTextFormat::isCharFormat()\n", true, &_init_f_isCharFormat_c0, &_call_f_isCharFormat_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QTextFormat::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isFrameFormat?", "@brief Method bool QTextFormat::isFrameFormat()\n", true, &_init_f_isFrameFormat_c0, &_call_f_isFrameFormat_c0);
  methods += new qt_gsi::GenericMethod ("isImageFormat?", "@brief Method bool QTextFormat::isImageFormat()\n", true, &_init_f_isImageFormat_c0, &_call_f_isImageFormat_c0);
  methods += new qt_gsi::GenericMethod ("isListFormat?", "@brief Method bool QTextFormat::isListFormat()\n", true, &_init_f_isListFormat_c0, &_call_f_isListFormat_c0);
  methods += new qt_gsi::GenericMethod ("isTableCellFormat?", "@brief Method bool QTextFormat::isTableCellFormat()\n", true, &_init_f_isTableCellFormat_c0, &_call_f_isTableCellFormat_c0);
  methods += new qt_gsi::GenericMethod ("isTableFormat?", "@brief Method bool QTextFormat::isTableFormat()\n", true, &_init_f_isTableFormat_c0, &_call_f_isTableFormat_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTextFormat::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod (":layoutDirection", "@brief Method Qt::LayoutDirection QTextFormat::layoutDirection()\n", true, &_init_f_layoutDirection_c0, &_call_f_layoutDirection_c0);
  methods += new qt_gsi::GenericMethod ("lengthProperty", "@brief Method QTextLength QTextFormat::lengthProperty(int propertyId)\n", true, &_init_f_lengthProperty_c767, &_call_f_lengthProperty_c767);
  methods += new qt_gsi::GenericMethod ("lengthVectorProperty", "@brief Method QList<QTextLength> QTextFormat::lengthVectorProperty(int propertyId)\n", true, &_init_f_lengthVectorProperty_c767, &_call_f_lengthVectorProperty_c767);
  methods += new qt_gsi::GenericMethod ("merge", "@brief Method void QTextFormat::merge(const QTextFormat &other)\n", false, &_init_f_merge_2432, &_call_f_merge_2432);
  methods += new qt_gsi::GenericMethod (":objectIndex", "@brief Method int QTextFormat::objectIndex()\n", true, &_init_f_objectIndex_c0, &_call_f_objectIndex_c0);
  methods += new qt_gsi::GenericMethod (":objectType", "@brief Method int QTextFormat::objectType()\n", true, &_init_f_objectType_c0, &_call_f_objectType_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QTextFormat::operator!=(const QTextFormat &rhs)\n", true, &_init_f_operator_excl__eq__c2432, &_call_f_operator_excl__eq__c2432);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTextFormat &QTextFormat::operator=(const QTextFormat &rhs)\n", false, &_init_f_operator_eq__2432, &_call_f_operator_eq__2432);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QTextFormat::operator==(const QTextFormat &rhs)\n", true, &_init_f_operator_eq__eq__c2432, &_call_f_operator_eq__eq__c2432);
  methods += new qt_gsi::GenericMethod ("penProperty", "@brief Method QPen QTextFormat::penProperty(int propertyId)\n", true, &_init_f_penProperty_c767, &_call_f_penProperty_c767);
  methods += new qt_gsi::GenericMethod ("properties", "@brief Method QMap<int, QVariant> QTextFormat::properties()\n", true, &_init_f_properties_c0, &_call_f_properties_c0);
  methods += new qt_gsi::GenericMethod ("property", "@brief Method QVariant QTextFormat::property(int propertyId)\n", true, &_init_f_property_c767, &_call_f_property_c767);
  methods += new qt_gsi::GenericMethod ("propertyCount", "@brief Method int QTextFormat::propertyCount()\n", true, &_init_f_propertyCount_c0, &_call_f_propertyCount_c0);
  methods += new qt_gsi::GenericMethod ("setBackground|background=", "@brief Method void QTextFormat::setBackground(const QBrush &brush)\n", false, &_init_f_setBackground_1910, &_call_f_setBackground_1910);
  methods += new qt_gsi::GenericMethod ("setForeground|foreground=", "@brief Method void QTextFormat::setForeground(const QBrush &brush)\n", false, &_init_f_setForeground_1910, &_call_f_setForeground_1910);
  methods += new qt_gsi::GenericMethod ("setLayoutDirection|layoutDirection=", "@brief Method void QTextFormat::setLayoutDirection(Qt::LayoutDirection direction)\n", false, &_init_f_setLayoutDirection_2316, &_call_f_setLayoutDirection_2316);
  methods += new qt_gsi::GenericMethod ("setObjectIndex|objectIndex=", "@brief Method void QTextFormat::setObjectIndex(int object)\n", false, &_init_f_setObjectIndex_767, &_call_f_setObjectIndex_767);
  methods += new qt_gsi::GenericMethod ("setObjectType|objectType=", "@brief Method void QTextFormat::setObjectType(int type)\n", false, &_init_f_setObjectType_767, &_call_f_setObjectType_767);
  methods += new qt_gsi::GenericMethod ("setProperty", "@brief Method void QTextFormat::setProperty(int propertyId, const QVariant &value)\n", false, &_init_f_setProperty_2778, &_call_f_setProperty_2778);
  methods += new qt_gsi::GenericMethod ("setProperty", "@brief Method void QTextFormat::setProperty(int propertyId, const QList<QTextLength> &lengths)\n", false, &_init_f_setProperty_3699, &_call_f_setProperty_3699);
  methods += new qt_gsi::GenericMethod ("stringProperty", "@brief Method QString QTextFormat::stringProperty(int propertyId)\n", true, &_init_f_stringProperty_c767, &_call_f_stringProperty_c767);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QTextFormat::swap(QTextFormat &other)\n", false, &_init_f_swap_1737, &_call_f_swap_1737);
  methods += new qt_gsi::GenericMethod ("toBlockFormat", "@brief Method QTextBlockFormat QTextFormat::toBlockFormat()\n", true, &_init_f_toBlockFormat_c0, &_call_f_toBlockFormat_c0);
  methods += new qt_gsi::GenericMethod ("toCharFormat", "@brief Method QTextCharFormat QTextFormat::toCharFormat()\n", true, &_init_f_toCharFormat_c0, &_call_f_toCharFormat_c0);
  methods += new qt_gsi::GenericMethod ("toFrameFormat", "@brief Method QTextFrameFormat QTextFormat::toFrameFormat()\n", true, &_init_f_toFrameFormat_c0, &_call_f_toFrameFormat_c0);
  methods += new qt_gsi::GenericMethod ("toImageFormat", "@brief Method QTextImageFormat QTextFormat::toImageFormat()\n", true, &_init_f_toImageFormat_c0, &_call_f_toImageFormat_c0);
  methods += new qt_gsi::GenericMethod ("toListFormat", "@brief Method QTextListFormat QTextFormat::toListFormat()\n", true, &_init_f_toListFormat_c0, &_call_f_toListFormat_c0);
  methods += new qt_gsi::GenericMethod ("toTableCellFormat", "@brief Method QTextTableCellFormat QTextFormat::toTableCellFormat()\n", true, &_init_f_toTableCellFormat_c0, &_call_f_toTableCellFormat_c0);
  methods += new qt_gsi::GenericMethod ("toTableFormat", "@brief Method QTextTableFormat QTextFormat::toTableFormat()\n", true, &_init_f_toTableFormat_c0, &_call_f_toTableFormat_c0);
  methods += new qt_gsi::GenericMethod ("type", "@brief Method int QTextFormat::type()\n", true, &_init_f_type_c0, &_call_f_type_c0);
  return methods;
}

gsi::Class<QTextFormat> decl_QTextFormat ("QtGui", "QTextFormat",
  methods_QTextFormat (),
  "@qt\n@brief Binding of QTextFormat");


GSI_QTGUI_PUBLIC gsi::Class<QTextFormat> &qtdecl_QTextFormat () { return decl_QTextFormat; }

}


//  Implementation of the enum wrapper class for QTextFormat::PageBreakFlag
namespace qt_gsi
{

static gsi::Enum<QTextFormat::PageBreakFlag> decl_QTextFormat_PageBreakFlag_Enum ("QtGui", "QTextFormat_PageBreakFlag",
    gsi::enum_const ("PageBreak_Auto", QTextFormat::PageBreak_Auto, "@brief Enum constant QTextFormat::PageBreak_Auto") +
    gsi::enum_const ("PageBreak_AlwaysBefore", QTextFormat::PageBreak_AlwaysBefore, "@brief Enum constant QTextFormat::PageBreak_AlwaysBefore") +
    gsi::enum_const ("PageBreak_AlwaysAfter", QTextFormat::PageBreak_AlwaysAfter, "@brief Enum constant QTextFormat::PageBreak_AlwaysAfter"),
  "@qt\n@brief This class represents the QTextFormat::PageBreakFlag enum");

static gsi::QFlagsClass<QTextFormat::PageBreakFlag > decl_QTextFormat_PageBreakFlag_Enums ("QtGui", "QTextFormat_QFlags_PageBreakFlag",
  "@qt\n@brief This class represents the QFlags<QTextFormat::PageBreakFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextFormat> inject_QTextFormat_PageBreakFlag_Enum_in_parent (decl_QTextFormat_PageBreakFlag_Enum.defs ());
static gsi::ClassExt<QTextFormat> decl_QTextFormat_PageBreakFlag_Enum_as_child (decl_QTextFormat_PageBreakFlag_Enum, "PageBreakFlag");
static gsi::ClassExt<QTextFormat> decl_QTextFormat_PageBreakFlag_Enums_as_child (decl_QTextFormat_PageBreakFlag_Enums, "QFlags_PageBreakFlag");

}

