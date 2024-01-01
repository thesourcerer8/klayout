
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
*  @file gsiDeclQScrollerProperties.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QScrollerProperties>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QScrollerProperties

// bool QScrollerProperties::operator!=(const QScrollerProperties &sp)


static void _init_f_operator_excl__eq__c3301 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sp");
  decl->add_arg<const QScrollerProperties & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c3301 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QScrollerProperties &arg1 = gsi::arg_reader<const QScrollerProperties & >() (args, heap);
  ret.write<bool > ((bool)((QScrollerProperties *)cls)->operator!= (arg1));
}


// QScrollerProperties &QScrollerProperties::operator=(const QScrollerProperties &sp)


static void _init_f_operator_eq__3301 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sp");
  decl->add_arg<const QScrollerProperties & > (argspec_0);
  decl->set_return<QScrollerProperties & > ();
}

static void _call_f_operator_eq__3301 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QScrollerProperties &arg1 = gsi::arg_reader<const QScrollerProperties & >() (args, heap);
  ret.write<QScrollerProperties & > ((QScrollerProperties &)((QScrollerProperties *)cls)->operator= (arg1));
}


// bool QScrollerProperties::operator==(const QScrollerProperties &sp)


static void _init_f_operator_eq__eq__c3301 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sp");
  decl->add_arg<const QScrollerProperties & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c3301 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QScrollerProperties &arg1 = gsi::arg_reader<const QScrollerProperties & >() (args, heap);
  ret.write<bool > ((bool)((QScrollerProperties *)cls)->operator== (arg1));
}


// QVariant QScrollerProperties::scrollMetric(QScrollerProperties::ScrollMetric metric)


static void _init_f_scrollMetric_c3775 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("metric");
  decl->add_arg<const qt_gsi::Converter<QScrollerProperties::ScrollMetric>::target_type & > (argspec_0);
  decl->set_return<QVariant > ();
}

static void _call_f_scrollMetric_c3775 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QScrollerProperties::ScrollMetric>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QScrollerProperties::ScrollMetric>::target_type & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QScrollerProperties *)cls)->scrollMetric (qt_gsi::QtToCppAdaptor<QScrollerProperties::ScrollMetric>(arg1).cref()));
}


// void QScrollerProperties::setScrollMetric(QScrollerProperties::ScrollMetric metric, const QVariant &value)


static void _init_f_setScrollMetric_5786 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("metric");
  decl->add_arg<const qt_gsi::Converter<QScrollerProperties::ScrollMetric>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("value");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setScrollMetric_5786 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QScrollerProperties::ScrollMetric>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QScrollerProperties::ScrollMetric>::target_type & >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QScrollerProperties *)cls)->setScrollMetric (qt_gsi::QtToCppAdaptor<QScrollerProperties::ScrollMetric>(arg1).cref(), arg2);
}


// static void QScrollerProperties::setDefaultScrollerProperties(const QScrollerProperties &sp)


static void _init_f_setDefaultScrollerProperties_3301 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sp");
  decl->add_arg<const QScrollerProperties & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDefaultScrollerProperties_3301 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QScrollerProperties &arg1 = gsi::arg_reader<const QScrollerProperties & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QScrollerProperties::setDefaultScrollerProperties (arg1);
}


// static void QScrollerProperties::unsetDefaultScrollerProperties()


static void _init_f_unsetDefaultScrollerProperties_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unsetDefaultScrollerProperties_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QScrollerProperties::unsetDefaultScrollerProperties ();
}


namespace gsi
{

static gsi::Methods methods_QScrollerProperties () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QScrollerProperties::operator!=(const QScrollerProperties &sp)\n", true, &_init_f_operator_excl__eq__c3301, &_call_f_operator_excl__eq__c3301);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QScrollerProperties &QScrollerProperties::operator=(const QScrollerProperties &sp)\n", false, &_init_f_operator_eq__3301, &_call_f_operator_eq__3301);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QScrollerProperties::operator==(const QScrollerProperties &sp)\n", true, &_init_f_operator_eq__eq__c3301, &_call_f_operator_eq__eq__c3301);
  methods += new qt_gsi::GenericMethod ("scrollMetric", "@brief Method QVariant QScrollerProperties::scrollMetric(QScrollerProperties::ScrollMetric metric)\n", true, &_init_f_scrollMetric_c3775, &_call_f_scrollMetric_c3775);
  methods += new qt_gsi::GenericMethod ("setScrollMetric", "@brief Method void QScrollerProperties::setScrollMetric(QScrollerProperties::ScrollMetric metric, const QVariant &value)\n", false, &_init_f_setScrollMetric_5786, &_call_f_setScrollMetric_5786);
  methods += new qt_gsi::GenericStaticMethod ("setDefaultScrollerProperties", "@brief Static method void QScrollerProperties::setDefaultScrollerProperties(const QScrollerProperties &sp)\nThis method is static and can be called without an instance.", &_init_f_setDefaultScrollerProperties_3301, &_call_f_setDefaultScrollerProperties_3301);
  methods += new qt_gsi::GenericStaticMethod ("unsetDefaultScrollerProperties", "@brief Static method void QScrollerProperties::unsetDefaultScrollerProperties()\nThis method is static and can be called without an instance.", &_init_f_unsetDefaultScrollerProperties_0, &_call_f_unsetDefaultScrollerProperties_0);
  return methods;
}

gsi::Class<QScrollerProperties> decl_QScrollerProperties ("QtWidgets", "QScrollerProperties_Native",
  methods_QScrollerProperties (),
  "@hide\n@alias QScrollerProperties");

GSI_QTWIDGETS_PUBLIC gsi::Class<QScrollerProperties> &qtdecl_QScrollerProperties () { return decl_QScrollerProperties; }

}


class QScrollerProperties_Adaptor : public QScrollerProperties, public qt_gsi::QtObjectBase
{
public:

  virtual ~QScrollerProperties_Adaptor();

  //  [adaptor ctor] QScrollerProperties::QScrollerProperties()
  QScrollerProperties_Adaptor() : QScrollerProperties()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QScrollerProperties::QScrollerProperties(const QScrollerProperties &sp)
  QScrollerProperties_Adaptor(const QScrollerProperties &sp) : QScrollerProperties(sp)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QScrollerProperties_Adaptor::~QScrollerProperties_Adaptor() { }

//  Constructor QScrollerProperties::QScrollerProperties() (adaptor class)

static void _init_ctor_QScrollerProperties_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QScrollerProperties_Adaptor> ();
}

static void _call_ctor_QScrollerProperties_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QScrollerProperties_Adaptor *> (new QScrollerProperties_Adaptor ());
}


//  Constructor QScrollerProperties::QScrollerProperties(const QScrollerProperties &sp) (adaptor class)

static void _init_ctor_QScrollerProperties_Adaptor_3301 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sp");
  decl->add_arg<const QScrollerProperties & > (argspec_0);
  decl->set_return_new<QScrollerProperties_Adaptor> ();
}

static void _call_ctor_QScrollerProperties_Adaptor_3301 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QScrollerProperties &arg1 = gsi::arg_reader<const QScrollerProperties & >() (args, heap);
  ret.write<QScrollerProperties_Adaptor *> (new QScrollerProperties_Adaptor (arg1));
}


namespace gsi
{

gsi::Class<QScrollerProperties> &qtdecl_QScrollerProperties ();

static gsi::Methods methods_QScrollerProperties_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QScrollerProperties::QScrollerProperties()\nThis method creates an object of class QScrollerProperties.", &_init_ctor_QScrollerProperties_Adaptor_0, &_call_ctor_QScrollerProperties_Adaptor_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QScrollerProperties::QScrollerProperties(const QScrollerProperties &sp)\nThis method creates an object of class QScrollerProperties.", &_init_ctor_QScrollerProperties_Adaptor_3301, &_call_ctor_QScrollerProperties_Adaptor_3301);
  return methods;
}

gsi::Class<QScrollerProperties_Adaptor> decl_QScrollerProperties_Adaptor (qtdecl_QScrollerProperties (), "QtWidgets", "QScrollerProperties",
  methods_QScrollerProperties_Adaptor (),
  "@qt\n@brief Binding of QScrollerProperties");

}


//  Implementation of the enum wrapper class for QScrollerProperties::ScrollMetric
namespace qt_gsi
{

static gsi::Enum<QScrollerProperties::ScrollMetric> decl_QScrollerProperties_ScrollMetric_Enum ("QtWidgets", "QScrollerProperties_ScrollMetric",
    gsi::enum_const ("MousePressEventDelay", QScrollerProperties::MousePressEventDelay, "@brief Enum constant QScrollerProperties::MousePressEventDelay") +
    gsi::enum_const ("DragStartDistance", QScrollerProperties::DragStartDistance, "@brief Enum constant QScrollerProperties::DragStartDistance") +
    gsi::enum_const ("DragVelocitySmoothingFactor", QScrollerProperties::DragVelocitySmoothingFactor, "@brief Enum constant QScrollerProperties::DragVelocitySmoothingFactor") +
    gsi::enum_const ("AxisLockThreshold", QScrollerProperties::AxisLockThreshold, "@brief Enum constant QScrollerProperties::AxisLockThreshold") +
    gsi::enum_const ("ScrollingCurve", QScrollerProperties::ScrollingCurve, "@brief Enum constant QScrollerProperties::ScrollingCurve") +
    gsi::enum_const ("DecelerationFactor", QScrollerProperties::DecelerationFactor, "@brief Enum constant QScrollerProperties::DecelerationFactor") +
    gsi::enum_const ("MinimumVelocity", QScrollerProperties::MinimumVelocity, "@brief Enum constant QScrollerProperties::MinimumVelocity") +
    gsi::enum_const ("MaximumVelocity", QScrollerProperties::MaximumVelocity, "@brief Enum constant QScrollerProperties::MaximumVelocity") +
    gsi::enum_const ("MaximumClickThroughVelocity", QScrollerProperties::MaximumClickThroughVelocity, "@brief Enum constant QScrollerProperties::MaximumClickThroughVelocity") +
    gsi::enum_const ("AcceleratingFlickMaximumTime", QScrollerProperties::AcceleratingFlickMaximumTime, "@brief Enum constant QScrollerProperties::AcceleratingFlickMaximumTime") +
    gsi::enum_const ("AcceleratingFlickSpeedupFactor", QScrollerProperties::AcceleratingFlickSpeedupFactor, "@brief Enum constant QScrollerProperties::AcceleratingFlickSpeedupFactor") +
    gsi::enum_const ("SnapPositionRatio", QScrollerProperties::SnapPositionRatio, "@brief Enum constant QScrollerProperties::SnapPositionRatio") +
    gsi::enum_const ("SnapTime", QScrollerProperties::SnapTime, "@brief Enum constant QScrollerProperties::SnapTime") +
    gsi::enum_const ("OvershootDragResistanceFactor", QScrollerProperties::OvershootDragResistanceFactor, "@brief Enum constant QScrollerProperties::OvershootDragResistanceFactor") +
    gsi::enum_const ("OvershootDragDistanceFactor", QScrollerProperties::OvershootDragDistanceFactor, "@brief Enum constant QScrollerProperties::OvershootDragDistanceFactor") +
    gsi::enum_const ("OvershootScrollDistanceFactor", QScrollerProperties::OvershootScrollDistanceFactor, "@brief Enum constant QScrollerProperties::OvershootScrollDistanceFactor") +
    gsi::enum_const ("OvershootScrollTime", QScrollerProperties::OvershootScrollTime, "@brief Enum constant QScrollerProperties::OvershootScrollTime") +
    gsi::enum_const ("HorizontalOvershootPolicy", QScrollerProperties::HorizontalOvershootPolicy, "@brief Enum constant QScrollerProperties::HorizontalOvershootPolicy") +
    gsi::enum_const ("VerticalOvershootPolicy", QScrollerProperties::VerticalOvershootPolicy, "@brief Enum constant QScrollerProperties::VerticalOvershootPolicy") +
    gsi::enum_const ("FrameRate", QScrollerProperties::FrameRate, "@brief Enum constant QScrollerProperties::FrameRate") +
    gsi::enum_const ("ScrollMetricCount", QScrollerProperties::ScrollMetricCount, "@brief Enum constant QScrollerProperties::ScrollMetricCount"),
  "@qt\n@brief This class represents the QScrollerProperties::ScrollMetric enum");

static gsi::QFlagsClass<QScrollerProperties::ScrollMetric > decl_QScrollerProperties_ScrollMetric_Enums ("QtWidgets", "QScrollerProperties_QFlags_ScrollMetric",
  "@qt\n@brief This class represents the QFlags<QScrollerProperties::ScrollMetric> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QScrollerProperties> inject_QScrollerProperties_ScrollMetric_Enum_in_parent (decl_QScrollerProperties_ScrollMetric_Enum.defs ());
static gsi::ClassExt<QScrollerProperties> decl_QScrollerProperties_ScrollMetric_Enum_as_child (decl_QScrollerProperties_ScrollMetric_Enum, "ScrollMetric");
static gsi::ClassExt<QScrollerProperties> decl_QScrollerProperties_ScrollMetric_Enums_as_child (decl_QScrollerProperties_ScrollMetric_Enums, "QFlags_ScrollMetric");

}

