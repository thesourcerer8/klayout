
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
*  @file gsiDeclQMatrix.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMatrix>
#include <QLine>
#include <QLineF>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QPolygon>
#include <QPolygonF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMatrix

//  Constructor QMatrix::QMatrix()


static void _init_ctor_QMatrix_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMatrix> ();
}

static void _call_ctor_QMatrix_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMatrix *> (new QMatrix ());
}


//  Constructor QMatrix::QMatrix(double m11, double m12, double m21, double m22, double dx, double dy)


static void _init_ctor_QMatrix_5886 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("m11");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m12");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("m21");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("m22");
  decl->add_arg<double > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("dx");
  decl->add_arg<double > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("dy");
  decl->add_arg<double > (argspec_5);
  decl->set_return_new<QMatrix> ();
}

static void _call_ctor_QMatrix_5886 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  double arg5 = gsi::arg_reader<double >() (args, heap);
  double arg6 = gsi::arg_reader<double >() (args, heap);
  ret.write<QMatrix *> (new QMatrix (arg1, arg2, arg3, arg4, arg5, arg6));
}


//  Constructor QMatrix::QMatrix(const QMatrix &matrix)


static void _init_ctor_QMatrix_2023 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("matrix");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return_new<QMatrix> ();
}

static void _call_ctor_QMatrix_2023 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<QMatrix *> (new QMatrix (arg1));
}


// double QMatrix::determinant()


static void _init_f_determinant_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_determinant_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->determinant ());
}


// double QMatrix::dx()


static void _init_f_dx_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_dx_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->dx ());
}


// double QMatrix::dy()


static void _init_f_dy_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_dy_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->dy ());
}


// QMatrix QMatrix::inverted(bool *invertible)


static void _init_f_inverted_c1050 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("invertible", true, "0");
  decl->add_arg<bool * > (argspec_0);
  decl->set_return<QMatrix > ();
}

static void _call_f_inverted_c1050 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool *arg1 = args ? gsi::arg_reader<bool * >() (args, heap) : gsi::arg_maker<bool * >() (0, heap);
  ret.write<QMatrix > ((QMatrix)((QMatrix *)cls)->inverted (arg1));
}


// bool QMatrix::isIdentity()


static void _init_f_isIdentity_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isIdentity_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMatrix *)cls)->isIdentity ());
}


// bool QMatrix::isInvertible()


static void _init_f_isInvertible_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isInvertible_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QMatrix *)cls)->isInvertible ());
}


// double QMatrix::m11()


static void _init_f_m11_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_m11_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->m11 ());
}


// double QMatrix::m12()


static void _init_f_m12_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_m12_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->m12 ());
}


// double QMatrix::m21()


static void _init_f_m21_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_m21_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->m21 ());
}


// double QMatrix::m22()


static void _init_f_m22_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_m22_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QMatrix *)cls)->m22 ());
}


// void QMatrix::map(int x, int y, int *tx, int *ty)


static void _init_f_map_c3116 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("tx");
  decl->add_arg<int * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("ty");
  decl->add_arg<int * > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_map_c3116 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  int *arg3 = gsi::arg_reader<int * >() (args, heap);
  int *arg4 = gsi::arg_reader<int * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMatrix *)cls)->map (arg1, arg2, arg3, arg4);
}


// void QMatrix::map(double x, double y, double *tx, double *ty)


static void _init_f_map_c4332 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("y");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("tx");
  decl->add_arg<double * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("ty");
  decl->add_arg<double * > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_map_c4332 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double *arg3 = gsi::arg_reader<double * >() (args, heap);
  double *arg4 = gsi::arg_reader<double * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMatrix *)cls)->map (arg1, arg2, arg3, arg4);
}


// QPoint QMatrix::map(const QPoint &p)


static void _init_f_map_c1916 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPoint & > (argspec_0);
  decl->set_return<QPoint > ();
}

static void _call_f_map_c1916 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QPoint > ((QPoint)((QMatrix *)cls)->map (arg1));
}


// QPointF QMatrix::map(const QPointF &p)


static void _init_f_map_c1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPointF & > (argspec_0);
  decl->set_return<QPointF > ();
}

static void _call_f_map_c1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  ret.write<QPointF > ((QPointF)((QMatrix *)cls)->map (arg1));
}


// QLine QMatrix::map(const QLine &l)


static void _init_f_map_c1786 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("l");
  decl->add_arg<const QLine & > (argspec_0);
  decl->set_return<QLine > ();
}

static void _call_f_map_c1786 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLine &arg1 = gsi::arg_reader<const QLine & >() (args, heap);
  ret.write<QLine > ((QLine)((QMatrix *)cls)->map (arg1));
}


// QLineF QMatrix::map(const QLineF &l)


static void _init_f_map_c1856 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("l");
  decl->add_arg<const QLineF & > (argspec_0);
  decl->set_return<QLineF > ();
}

static void _call_f_map_c1856 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLineF &arg1 = gsi::arg_reader<const QLineF & >() (args, heap);
  ret.write<QLineF > ((QLineF)((QMatrix *)cls)->map (arg1));
}


// QPolygonF QMatrix::map(const QPolygonF &a)


static void _init_f_map_c2208 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const QPolygonF & > (argspec_0);
  decl->set_return<QPolygonF > ();
}

static void _call_f_map_c2208 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygonF &arg1 = gsi::arg_reader<const QPolygonF & >() (args, heap);
  ret.write<QPolygonF > ((QPolygonF)((QMatrix *)cls)->map (arg1));
}


// QPolygon QMatrix::map(const QPolygon &a)


static void _init_f_map_c2138 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<const QPolygon & > (argspec_0);
  decl->set_return<QPolygon > ();
}

static void _call_f_map_c2138 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPolygon &arg1 = gsi::arg_reader<const QPolygon & >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QMatrix *)cls)->map (arg1));
}


// QRegion QMatrix::map(const QRegion &r)


static void _init_f_map_c2006 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return<QRegion > ();
}

static void _call_f_map_c2006 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QRegion > ((QRegion)((QMatrix *)cls)->map (arg1));
}


// QPainterPath QMatrix::map(const QPainterPath &p)


static void _init_f_map_c2514 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPainterPath & > (argspec_0);
  decl->set_return<QPainterPath > ();
}

static void _call_f_map_c2514 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPainterPath &arg1 = gsi::arg_reader<const QPainterPath & >() (args, heap);
  ret.write<QPainterPath > ((QPainterPath)((QMatrix *)cls)->map (arg1));
}


// QRect QMatrix::mapRect(const QRect &)


static void _init_f_mapRect_c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QRect > ();
}

static void _call_f_mapRect_c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QRect > ((QRect)((QMatrix *)cls)->mapRect (arg1));
}


// QRectF QMatrix::mapRect(const QRectF &)


static void _init_f_mapRect_c1862 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QRectF & > (argspec_0);
  decl->set_return<QRectF > ();
}

static void _call_f_mapRect_c1862 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRectF &arg1 = gsi::arg_reader<const QRectF & >() (args, heap);
  ret.write<QRectF > ((QRectF)((QMatrix *)cls)->mapRect (arg1));
}


// QPolygon QMatrix::mapToPolygon(const QRect &r)


static void _init_f_mapToPolygon_c1792 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("r");
  decl->add_arg<const QRect & > (argspec_0);
  decl->set_return<QPolygon > ();
}

static void _call_f_mapToPolygon_c1792 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRect &arg1 = gsi::arg_reader<const QRect & >() (args, heap);
  ret.write<QPolygon > ((QPolygon)((QMatrix *)cls)->mapToPolygon (arg1));
}


// bool QMatrix::operator!=(const QMatrix &)


static void _init_f_operator_excl__eq__c2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<bool > ((bool)((QMatrix *)cls)->operator!= (arg1));
}


// QMatrix QMatrix::operator*(const QMatrix &o)


static void _init_f_operator_star__c2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("o");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<QMatrix > ();
}

static void _call_f_operator_star__c2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<QMatrix > ((QMatrix)((QMatrix *)cls)->operator* (arg1));
}


// QMatrix &QMatrix::operator*=(const QMatrix &)


static void _init_f_operator_star__eq__2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<QMatrix & > ();
}

static void _call_f_operator_star__eq__2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<QMatrix & > ((QMatrix &)((QMatrix *)cls)->operator*= (arg1));
}


// QMatrix &QMatrix::operator=(const QMatrix &)


static void _init_f_operator_eq__2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<QMatrix & > ();
}

static void _call_f_operator_eq__2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<QMatrix & > ((QMatrix &)((QMatrix *)cls)->operator= (arg1));
}


// bool QMatrix::operator==(const QMatrix &)


static void _init_f_operator_eq__eq__c2023 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QMatrix & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2023 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMatrix &arg1 = gsi::arg_reader<const QMatrix & >() (args, heap);
  ret.write<bool > ((bool)((QMatrix *)cls)->operator== (arg1));
}


// void QMatrix::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMatrix *)cls)->reset ();
}


// QMatrix &QMatrix::rotate(double a)


static void _init_f_rotate_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("a");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QMatrix & > ();
}

static void _call_f_rotate_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QMatrix & > ((QMatrix &)((QMatrix *)cls)->rotate (arg1));
}


// QMatrix &QMatrix::scale(double sx, double sy)


static void _init_f_scale_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("sy");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QMatrix & > ();
}

static void _call_f_scale_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QMatrix & > ((QMatrix &)((QMatrix *)cls)->scale (arg1, arg2));
}


// void QMatrix::setMatrix(double m11, double m12, double m21, double m22, double dx, double dy)


static void _init_f_setMatrix_5886 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("m11");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("m12");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("m21");
  decl->add_arg<double > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("m22");
  decl->add_arg<double > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("dx");
  decl->add_arg<double > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("dy");
  decl->add_arg<double > (argspec_5);
  decl->set_return<void > ();
}

static void _call_f_setMatrix_5886 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  double arg3 = gsi::arg_reader<double >() (args, heap);
  double arg4 = gsi::arg_reader<double >() (args, heap);
  double arg5 = gsi::arg_reader<double >() (args, heap);
  double arg6 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMatrix *)cls)->setMatrix (arg1, arg2, arg3, arg4, arg5, arg6);
}


// QMatrix &QMatrix::shear(double sh, double sv)


static void _init_f_shear_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sh");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("sv");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QMatrix & > ();
}

static void _call_f_shear_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QMatrix & > ((QMatrix &)((QMatrix *)cls)->shear (arg1, arg2));
}


// QMatrix &QMatrix::translate(double dx, double dy)


static void _init_f_translate_2034 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("dx");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dy");
  decl->add_arg<double > (argspec_1);
  decl->set_return<QMatrix & > ();
}

static void _call_f_translate_2034 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QMatrix & > ((QMatrix &)((QMatrix *)cls)->translate (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QMatrix () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMatrix::QMatrix()\nThis method creates an object of class QMatrix.", &_init_ctor_QMatrix_0, &_call_ctor_QMatrix_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMatrix::QMatrix(double m11, double m12, double m21, double m22, double dx, double dy)\nThis method creates an object of class QMatrix.", &_init_ctor_QMatrix_5886, &_call_ctor_QMatrix_5886);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMatrix::QMatrix(const QMatrix &matrix)\nThis method creates an object of class QMatrix.", &_init_ctor_QMatrix_2023, &_call_ctor_QMatrix_2023);
  methods += new qt_gsi::GenericMethod ("determinant", "@brief Method double QMatrix::determinant()\n", true, &_init_f_determinant_c0, &_call_f_determinant_c0);
  methods += new qt_gsi::GenericMethod ("dx", "@brief Method double QMatrix::dx()\n", true, &_init_f_dx_c0, &_call_f_dx_c0);
  methods += new qt_gsi::GenericMethod ("dy", "@brief Method double QMatrix::dy()\n", true, &_init_f_dy_c0, &_call_f_dy_c0);
  methods += new qt_gsi::GenericMethod ("inverted", "@brief Method QMatrix QMatrix::inverted(bool *invertible)\n", true, &_init_f_inverted_c1050, &_call_f_inverted_c1050);
  methods += new qt_gsi::GenericMethod ("isIdentity?", "@brief Method bool QMatrix::isIdentity()\n", true, &_init_f_isIdentity_c0, &_call_f_isIdentity_c0);
  methods += new qt_gsi::GenericMethod ("isInvertible?", "@brief Method bool QMatrix::isInvertible()\n", true, &_init_f_isInvertible_c0, &_call_f_isInvertible_c0);
  methods += new qt_gsi::GenericMethod ("m11", "@brief Method double QMatrix::m11()\n", true, &_init_f_m11_c0, &_call_f_m11_c0);
  methods += new qt_gsi::GenericMethod ("m12", "@brief Method double QMatrix::m12()\n", true, &_init_f_m12_c0, &_call_f_m12_c0);
  methods += new qt_gsi::GenericMethod ("m21", "@brief Method double QMatrix::m21()\n", true, &_init_f_m21_c0, &_call_f_m21_c0);
  methods += new qt_gsi::GenericMethod ("m22", "@brief Method double QMatrix::m22()\n", true, &_init_f_m22_c0, &_call_f_m22_c0);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method void QMatrix::map(int x, int y, int *tx, int *ty)\n", true, &_init_f_map_c3116, &_call_f_map_c3116);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method void QMatrix::map(double x, double y, double *tx, double *ty)\n", true, &_init_f_map_c4332, &_call_f_map_c4332);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QPoint QMatrix::map(const QPoint &p)\n", true, &_init_f_map_c1916, &_call_f_map_c1916);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QPointF QMatrix::map(const QPointF &p)\n", true, &_init_f_map_c1986, &_call_f_map_c1986);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QLine QMatrix::map(const QLine &l)\n", true, &_init_f_map_c1786, &_call_f_map_c1786);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QLineF QMatrix::map(const QLineF &l)\n", true, &_init_f_map_c1856, &_call_f_map_c1856);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QPolygonF QMatrix::map(const QPolygonF &a)\n", true, &_init_f_map_c2208, &_call_f_map_c2208);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QPolygon QMatrix::map(const QPolygon &a)\n", true, &_init_f_map_c2138, &_call_f_map_c2138);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QRegion QMatrix::map(const QRegion &r)\n", true, &_init_f_map_c2006, &_call_f_map_c2006);
  methods += new qt_gsi::GenericMethod ("map", "@brief Method QPainterPath QMatrix::map(const QPainterPath &p)\n", true, &_init_f_map_c2514, &_call_f_map_c2514);
  methods += new qt_gsi::GenericMethod ("mapRect", "@brief Method QRect QMatrix::mapRect(const QRect &)\n", true, &_init_f_mapRect_c1792, &_call_f_mapRect_c1792);
  methods += new qt_gsi::GenericMethod ("mapRect", "@brief Method QRectF QMatrix::mapRect(const QRectF &)\n", true, &_init_f_mapRect_c1862, &_call_f_mapRect_c1862);
  methods += new qt_gsi::GenericMethod ("mapToPolygon", "@brief Method QPolygon QMatrix::mapToPolygon(const QRect &r)\n", true, &_init_f_mapToPolygon_c1792, &_call_f_mapToPolygon_c1792);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QMatrix::operator!=(const QMatrix &)\n", true, &_init_f_operator_excl__eq__c2023, &_call_f_operator_excl__eq__c2023);
  methods += new qt_gsi::GenericMethod ("*", "@brief Method QMatrix QMatrix::operator*(const QMatrix &o)\n", true, &_init_f_operator_star__c2023, &_call_f_operator_star__c2023);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QMatrix &QMatrix::operator*=(const QMatrix &)\n", false, &_init_f_operator_star__eq__2023, &_call_f_operator_star__eq__2023);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QMatrix &QMatrix::operator=(const QMatrix &)\n", false, &_init_f_operator_eq__2023, &_call_f_operator_eq__2023);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QMatrix::operator==(const QMatrix &)\n", true, &_init_f_operator_eq__eq__c2023, &_call_f_operator_eq__eq__c2023);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QMatrix::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("rotate", "@brief Method QMatrix &QMatrix::rotate(double a)\n", false, &_init_f_rotate_1071, &_call_f_rotate_1071);
  methods += new qt_gsi::GenericMethod ("scale", "@brief Method QMatrix &QMatrix::scale(double sx, double sy)\n", false, &_init_f_scale_2034, &_call_f_scale_2034);
  methods += new qt_gsi::GenericMethod ("setMatrix", "@brief Method void QMatrix::setMatrix(double m11, double m12, double m21, double m22, double dx, double dy)\n", false, &_init_f_setMatrix_5886, &_call_f_setMatrix_5886);
  methods += new qt_gsi::GenericMethod ("shear", "@brief Method QMatrix &QMatrix::shear(double sh, double sv)\n", false, &_init_f_shear_2034, &_call_f_shear_2034);
  methods += new qt_gsi::GenericMethod ("translate", "@brief Method QMatrix &QMatrix::translate(double dx, double dy)\n", false, &_init_f_translate_2034, &_call_f_translate_2034);
  return methods;
}

gsi::Class<QMatrix> decl_QMatrix ("QtGui", "QMatrix",
  methods_QMatrix (),
  "@qt\n@brief Binding of QMatrix");


GSI_QTGUI_PUBLIC gsi::Class<QMatrix> &qtdecl_QMatrix () { return decl_QMatrix; }

}

