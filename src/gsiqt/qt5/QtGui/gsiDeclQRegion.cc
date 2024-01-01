
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
*  @file gsiDeclQRegion.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QRegion>
#include <QBitmap>
#include <QPoint>
#include <QPolygon>
#include <QRect>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QRegion
  static void f_QRegion_setRects(QRegion *r, const std::vector<QRect> &rects)
  {
    if (! rects.empty ()) {
      return r->setRects (&rects.front (), int (rects.size ()));
    }
  }

//  Constructor QRegion::QRegion()


static void _init_ctor_QRegion_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QRegion> ();
}

static void _call_ctor_QRegion_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRegion *> (new QRegion ());
}


//  Constructor QRegion::QRegion(int x, int y, int w, int h, QRegion::RegionType t)


static void _init_ctor_QRegion_4911 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("w");
  decl->add_arg<int > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("h");
  decl->add_arg<int > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("t", true, "QRegion::Rectangle");
  decl->add_arg<const qt_gsi::Converter<QRegion::RegionType>::target_type & > (argspec_4);
  decl->set_return_new<QRegion> ();
}

static void _call_ctor_QRegion_4911 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QRegion::RegionType>::target_type & arg5 = args ? gsi::arg_reader<const qt_gsi::Converter<QRegion::RegionType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QRegion::RegionType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QRegion::RegionType>(heap, QRegion::Rectangle), heap);
  ret.write<QRegion *> (new QRegion (arg1, arg2, arg3, arg4, qt_gsi::QtToCppAdaptor<QRegion::RegionType>(arg5).cref()));
}


//  Constructor QRegion::QRegion(const QRect &r, QRegion::RegionType t)


static void _init_ctor_QRegion_3959 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("t", true, "QRegion::Rectangle");
  decl->add_arg<const qt_gsi::Converter<QRegion::RegionType>::target_type & > (argspec_1);
  decl->set_return_new<QRegion> ();
}

static void _call_ctor_QRegion_3959 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  const qt_gsi::Converter<QRegion::RegionType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QRegion::RegionType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QRegion::RegionType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QRegion::RegionType>(heap, QRegion::Rectangle), heap);
  ret.write<QRegion *> (new QRegion (arg1, qt_gsi::QtToCppAdaptor<QRegion::RegionType>(arg2).cref()));
}


//  Constructor QRegion::QRegion(const QPolygon &pa, Qt::FillRule fillRule)


static void _init_ctor_QRegion_3578 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pa");
  decl->add_arg<const QPolygon & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("fillRule", true, "Qt::OddEvenFill");
  decl->add_arg<const qt_gsi::Converter<Qt::FillRule>::target_type & > (argspec_1);
  decl->set_return_new<QRegion> ();
}

static void _call_ctor_QRegion_3578 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = gsi::arg_reader<const QPolygon & >() (args, heap);
  const qt_gsi::Converter<Qt::FillRule>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::FillRule>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::FillRule>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::FillRule>(heap, Qt::OddEvenFill), heap);
  ret.write<QRegion *> (new QRegion (arg1, qt_gsi::QtToCppAdaptor<Qt::FillRule>(arg2).cref()));
}


//  Constructor QRegion::QRegion(const QRegion &region)


static void _init_ctor_QRegion_2006 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("region");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return_new<QRegion> ();
}

static void _call_ctor_QRegion_2006 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion *> (new QRegion (arg1));
}


//  Constructor QRegion::QRegion(const QBitmap &bitmap)


static void _init_ctor_QRegion_1999 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("bitmap");
  decl->add_arg<const QBitmap & > (argspec_0);
  decl->set_return_new<QRegion> ();
}

static void _call_ctor_QRegion_1999 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBitmap &arg1 = gsi::arg_reader<const QBitmap & >() (args, heap);
  ret.write<QRegion *> (new QRegion (arg1));
}


// QRect QRegion::boundingRect()


static void _init_f_boundingRect_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QRect > ();
}

static void _call_f_boundingRect_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QRect > ((QRect)((QRegion *)cls)->boundingRect ());
}


// bool QRegion::contains(const QPoint &p)


static void _init_f_contains_c1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<bool > ((bool)((QRegion *)cls)->contains (arg1));
}


// bool QRegion::contains(const QRect &r)


static void _init_f_contains_c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_contains_c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<bool > ((bool)((QRegion *)cls)->contains (arg1));
}


// QRegion QRegion::intersected(const QRegion &r)


static void _init_f_intersected_c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_intersected_c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->intersected (arg1));
}


// QRegion QRegion::intersected(const QRect &r)


static void _init_f_intersected_c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_intersected_c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->intersected (arg1));
}


// bool QRegion::intersects(const QRegion &r)


static void _init_f_intersects_c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_intersects_c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<bool > ((bool)((QRegion *)cls)->intersects (arg1));
}


// bool QRegion::intersects(const QRect &r)


static void _init_f_intersects_c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_intersects_c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<bool > ((bool)((QRegion *)cls)->intersects (arg1));
}


// bool QRegion::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegion *)cls)->isEmpty ());
}


// bool QRegion::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QRegion *)cls)->isNull ());
}


// bool QRegion::operator!=(const QRegion &r)


static void _init_f_operator_excl__eq__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<bool > ((bool)((QRegion *)cls)->operator!= (arg1));
}


// QRegion QRegion::operator&(const QRegion &r)


static void _init_f_operator_amp__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_amp__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator& (arg1));
}


// QRegion QRegion::operator&(const QRect &r)


static void _init_f_operator_amp__c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_amp__c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator& (arg1));
}


// QRegion &QRegion::operator&=(const QRegion &r)


static void _init_f_operator_amp__eq__2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_amp__eq__2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator&= (arg1));
}


// QRegion &QRegion::operator&=(const QRect &r)


static void _init_f_operator_amp__eq__1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_amp__eq__1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator&= (arg1));
}


// QRegion QRegion::operator+(const QRegion &r)


static void _init_f_operator_plus__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_plus__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator+ (arg1));
}


// QRegion QRegion::operator+(const QRect &r)


static void _init_f_operator_plus__c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_plus__c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator+ (arg1));
}


// QRegion &QRegion::operator+=(const QRegion &r)


static void _init_f_operator_plus__eq__2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_plus__eq__2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator+= (arg1));
}


// QRegion &QRegion::operator+=(const QRect &r)


static void _init_f_operator_plus__eq__1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_plus__eq__1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator+= (arg1));
}


// QRegion QRegion::operator-(const QRegion &r)


static void _init_f_operator_minus__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_minus__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator- (arg1));
}


// QRegion &QRegion::operator-=(const QRegion &r)


static void _init_f_operator_minus__eq__2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_minus__eq__2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator-= (arg1));
}


// QRegion &QRegion::operator=(const QRegion &)


static void _init_f_operator_eq__2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_eq__2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator= (arg1));
}


// bool QRegion::operator==(const QRegion &r)


static void _init_f_operator_eq__eq__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<bool > ((bool)((QRegion *)cls)->operator== (arg1));
}


// QRegion QRegion::operator^(const QRegion &r)


static void _init_f_operator_acute__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_acute__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator^ (arg1));
}


// QRegion &QRegion::operator^=(const QRegion &r)


static void _init_f_operator_acute__eq__2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_acute__eq__2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator^= (arg1));
}


// QRegion QRegion::operator|(const QRegion &r)


static void _init_f_operator_pipe__c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_operator_pipe__c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->operator| (arg1));
}


// QRegion &QRegion::operator|=(const QRegion &r)


static void _init_f_operator_pipe__eq__2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion & > ();
}

static void _call_f_operator_pipe__eq__2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion & > ((QRegion &)((QRegion *)cls)->operator|= (arg1));
}


// int QRegion::rectCount()


static void _init_f_rectCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_rectCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QRegion *)cls)->rectCount ());
}


// QVector<QRect> QRegion::rects()


static void _init_f_rects_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<QRect> > ();
}

static void _call_f_rects_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<QRect> > ((QVector<QRect>)((QRegion *)cls)->rects ());
}


// QRegion QRegion::subtracted(const QRegion &r)


static void _init_f_subtracted_c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_subtracted_c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->subtracted (arg1));
}


// void QRegion::swap(QRegion &other)


static void _init_f_swap_1311 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QRegion & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1311 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QRegion &arg1 = gsi::arg_reader<QRegion & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegion *)cls)->swap (arg1);
}


// void QRegion::translate(int dx, int dy)


static void _init_f_translate_1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_translate_1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegion *)cls)->translate (arg1, arg2);
}


// void QRegion::translate(const QPoint &p)


static void _init_f_translate_1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_translate_1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QRegion *)cls)->translate (arg1);
}


// QRegion QRegion::translated(int dx, int dy)


static void _init_f_translated_c1426 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<int > (argspec_1);
  decl->set_return<QRegion > ();
}

static void _call_f_translated_c1426 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->translated (arg1, arg2));
}


// QRegion QRegion::translated(const QPoint &p)


static void _init_f_translated_c1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_translated_c1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->translated (arg1));
}


// QRegion QRegion::united(const QRegion &r)


static void _init_f_united_c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_united_c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->united (arg1));
}


// QRegion QRegion::united(const QRect &r)


static void _init_f_united_c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_united_c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->united (arg1));
}


// QRegion QRegion::xored(const QRegion &r)


static void _init_f_xored_c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_xored_c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QRegion *)cls)->xored (arg1));
}


//  QRegion ::operator *(const QRegion &r, const QMatrix &m)
static QRegion op_QRegion_operator_star__3921(const QRegion *_self, const QMatrix &m) {
  return ::operator *(*_self, m);
}

//  QRegion ::operator *(const QRegion &r, const QTransform &m)
static QRegion op_QRegion_operator_star__4248(const QRegion *_self, const QTransform &m) {
  return ::operator *(*_self, m);
}


namespace gsi
{

static gsi::Methods methods_QRegion () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegion::QRegion()\nThis method creates an object of class QRegion.", &_init_ctor_QRegion_0, &_call_ctor_QRegion_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegion::QRegion(int x, int y, int w, int h, QRegion::RegionType t)\nThis method creates an object of class QRegion.", &_init_ctor_QRegion_4911, &_call_ctor_QRegion_4911);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegion::QRegion(const QRect &r, QRegion::RegionType t)\nThis method creates an object of class QRegion.", &_init_ctor_QRegion_3959, &_call_ctor_QRegion_3959);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegion::QRegion(const QPolygon &pa, Qt::FillRule fillRule)\nThis method creates an object of class QRegion.", &_init_ctor_QRegion_3578, &_call_ctor_QRegion_3578);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegion::QRegion(const QRegion &region)\nThis method creates an object of class QRegion.", &_init_ctor_QRegion_2006, &_call_ctor_QRegion_2006);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QRegion::QRegion(const QBitmap &bitmap)\nThis method creates an object of class QRegion.", &_init_ctor_QRegion_1999, &_call_ctor_QRegion_1999);
  methods += new qt_gsi::GenericMethod ("boundingRect", "@brief Method QRect QRegion::boundingRect()\n", true, &_init_f_boundingRect_c0, &_call_f_boundingRect_c0);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QRegion::contains(const QPoint &p)\n", true, &_init_f_contains_c1916, &_call_f_contains_c1916);
  methods += new qt_gsi::GenericMethod ("contains", "@brief Method bool QRegion::contains(const QRect &r)\n", true, &_init_f_contains_c1792, &_call_f_contains_c1792);
  methods += new qt_gsi::GenericMethod ("intersected", "@brief Method QRegion QRegion::intersected(const QRegion &r)\n", true, &_init_f_intersected_c2006, &_call_f_intersected_c2006);
  methods += new qt_gsi::GenericMethod ("intersected", "@brief Method QRegion QRegion::intersected(const QRect &r)\n", true, &_init_f_intersected_c1792, &_call_f_intersected_c1792);
  methods += new qt_gsi::GenericMethod ("intersects", "@brief Method bool QRegion::intersects(const QRegion &r)\n", true, &_init_f_intersects_c2006, &_call_f_intersects_c2006);
  methods += new qt_gsi::GenericMethod ("intersects", "@brief Method bool QRegion::intersects(const QRect &r)\n", true, &_init_f_intersects_c1792, &_call_f_intersects_c1792);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QRegion::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QRegion::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QRegion::operator!=(const QRegion &r)\n", true, &_init_f_operator_excl__eq__c2006, &_call_f_operator_excl__eq__c2006);
  methods += new qt_gsi::GenericMethod ("&", "@brief Method QRegion QRegion::operator&(const QRegion &r)\n", true, &_init_f_operator_amp__c2006, &_call_f_operator_amp__c2006);
  methods += new qt_gsi::GenericMethod ("&", "@brief Method QRegion QRegion::operator&(const QRect &r)\n", true, &_init_f_operator_amp__c1792, &_call_f_operator_amp__c1792);
  methods += new qt_gsi::GenericMethod ("&=", "@brief Method QRegion &QRegion::operator&=(const QRegion &r)\n", false, &_init_f_operator_amp__eq__2006, &_call_f_operator_amp__eq__2006);
  methods += new qt_gsi::GenericMethod ("&=", "@brief Method QRegion &QRegion::operator&=(const QRect &r)\n", false, &_init_f_operator_amp__eq__1792, &_call_f_operator_amp__eq__1792);
  methods += new qt_gsi::GenericMethod ("+", "@brief Method QRegion QRegion::operator+(const QRegion &r)\n", true, &_init_f_operator_plus__c2006, &_call_f_operator_plus__c2006);
  methods += new qt_gsi::GenericMethod ("+", "@brief Method QRegion QRegion::operator+(const QRect &r)\n", true, &_init_f_operator_plus__c1792, &_call_f_operator_plus__c1792);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QRegion &QRegion::operator+=(const QRegion &r)\n", false, &_init_f_operator_plus__eq__2006, &_call_f_operator_plus__eq__2006);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QRegion &QRegion::operator+=(const QRect &r)\n", false, &_init_f_operator_plus__eq__1792, &_call_f_operator_plus__eq__1792);
  methods += new qt_gsi::GenericMethod ("-", "@brief Method QRegion QRegion::operator-(const QRegion &r)\n", true, &_init_f_operator_minus__c2006, &_call_f_operator_minus__c2006);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QRegion &QRegion::operator-=(const QRegion &r)\n", false, &_init_f_operator_minus__eq__2006, &_call_f_operator_minus__eq__2006);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QRegion &QRegion::operator=(const QRegion &)\n", false, &_init_f_operator_eq__2006, &_call_f_operator_eq__2006);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QRegion::operator==(const QRegion &r)\n", true, &_init_f_operator_eq__eq__c2006, &_call_f_operator_eq__eq__c2006);
  methods += new qt_gsi::GenericMethod ("^", "@brief Method QRegion QRegion::operator^(const QRegion &r)\n", true, &_init_f_operator_acute__c2006, &_call_f_operator_acute__c2006);
  methods += new qt_gsi::GenericMethod ("^=", "@brief Method QRegion &QRegion::operator^=(const QRegion &r)\n", false, &_init_f_operator_acute__eq__2006, &_call_f_operator_acute__eq__2006);
  methods += new qt_gsi::GenericMethod ("|", "@brief Method QRegion QRegion::operator|(const QRegion &r)\n", true, &_init_f_operator_pipe__c2006, &_call_f_operator_pipe__c2006);
  methods += new qt_gsi::GenericMethod ("|=", "@brief Method QRegion &QRegion::operator|=(const QRegion &r)\n", false, &_init_f_operator_pipe__eq__2006, &_call_f_operator_pipe__eq__2006);
  methods += new qt_gsi::GenericMethod ("rectCount", "@brief Method int QRegion::rectCount()\n", true, &_init_f_rectCount_c0, &_call_f_rectCount_c0);
  methods += new qt_gsi::GenericMethod (":rects", "@brief Method QVector<QRect> QRegion::rects()\n", true, &_init_f_rects_c0, &_call_f_rects_c0);
  methods += new qt_gsi::GenericMethod ("subtracted", "@brief Method QRegion QRegion::subtracted(const QRegion &r)\n", true, &_init_f_subtracted_c2006, &_call_f_subtracted_c2006);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QRegion::swap(QRegion &other)\n", false, &_init_f_swap_1311, &_call_f_swap_1311);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QRegion::translate(int dx, int dy)\n", false, &_init_f_translate_1426, &_call_f_translate_1426);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method void QRegion::translate(const QPoint &p)\n", false, &_init_f_translate_1916, &_call_f_translate_1916);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QRegion QRegion::translated(int dx, int dy)\n", true, &_init_f_translated_c1426, &_call_f_translated_c1426);
  methods += new qt_gsi::GenericMethod ("translated", "@brief Method QRegion QRegion::translated(const QPoint &p)\n", true, &_init_f_translated_c1916, &_call_f_translated_c1916);
  methods += new qt_gsi::GenericMethod ("united", "@brief Method QRegion QRegion::united(const QRegion &r)\n", true, &_init_f_united_c2006, &_call_f_united_c2006);
  methods += new qt_gsi::GenericMethod ("united", "@brief Method QRegion QRegion::united(const QRect &r)\n", true, &_init_f_united_c1792, &_call_f_united_c1792);
  methods += new qt_gsi::GenericMethod ("xored", "@brief Method QRegion QRegion::xored(const QRegion &r)\n", true, &_init_f_xored_c2006, &_call_f_xored_c2006);
  methods += gsi::method_ext("*", &::op_QRegion_operator_star__3921, gsi::arg ("m"), "@brief Operator QRegion ::operator *(const QRegion &r, const QMatrix &m)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QRegion_operator_star__4248, gsi::arg ("m"), "@brief Operator QRegion ::operator *(const QRegion &r, const QTransform &m)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QRegion> decl_QRegion ("QtGui", "QRegion",
  gsi::method_ext("setRects", &f_QRegion_setRects, "@brief Adaption of setRects without pointer.")
+
  methods_QRegion (),
  "@qt\n@brief Binding of QRegion");


GSI_QTGUI_PUBLIC gsi::Class<QRegion> &qtdecl_QRegion () { return decl_QRegion; }

}


//  Implementation of the enum wrapper class for QRegion::RegionType
namespace qt_gsi
{

static gsi::Enum<QRegion::RegionType> decl_QRegion_RegionType_Enum ("QtGui", "QRegion_RegionType",
    gsi::enum_const ("Rectangle", QRegion::Rectangle, "@brief Enum constant QRegion::Rectangle") +
    gsi::enum_const ("Ellipse", QRegion::Ellipse, "@brief Enum constant QRegion::Ellipse"),
  "@qt\n@brief This class represents the QRegion::RegionType enum");

static gsi::QFlagsClass<QRegion::RegionType > decl_QRegion_RegionType_Enums ("QtGui", "QRegion_QFlags_RegionType",
  "@qt\n@brief This class represents the QFlags<QRegion::RegionType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QRegion> inject_QRegion_RegionType_Enum_in_parent (decl_QRegion_RegionType_Enum.defs ());
static gsi::ClassExt<QRegion> decl_QRegion_RegionType_Enum_as_child (decl_QRegion_RegionType_Enum, "RegionType");
static gsi::ClassExt<QRegion> decl_QRegion_RegionType_Enums_as_child (decl_QRegion_RegionType_Enums, "QFlags_RegionType");

}

