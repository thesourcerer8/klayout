
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
*  @file gsiDeclQFocusEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFocusEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFocusEvent

// bool QFocusEvent::gotFocus()


static void _init_f_gotFocus_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_gotFocus_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFocusEvent *)cls)->gotFocus ());
}


// bool QFocusEvent::lostFocus()


static void _init_f_lostFocus_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_lostFocus_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QFocusEvent *)cls)->lostFocus ());
}


// Qt::FocusReason QFocusEvent::reason()


static void _init_f_reason_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::FocusReason>::target_type > ();
}

static void _call_f_reason_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::FocusReason>::target_type > ((qt_gsi::Converter<Qt::FocusReason>::target_type)qt_gsi::CppToQtAdaptor<Qt::FocusReason>(((QFocusEvent *)cls)->reason ()));
}


// Qt::FocusReason QFocusEvent::reason()


static void _init_f_reason_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::FocusReason>::target_type > ();
}

static void _call_f_reason_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::FocusReason>::target_type > ((qt_gsi::Converter<Qt::FocusReason>::target_type)qt_gsi::CppToQtAdaptor<Qt::FocusReason>(((QFocusEvent *)cls)->reason ()));
}


namespace gsi
{

static gsi::Methods methods_QFocusEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("gotFocus", "@brief Method bool QFocusEvent::gotFocus()\n", true, &_init_f_gotFocus_c0, &_call_f_gotFocus_c0);
  methods += new qt_gsi::GenericMethod ("lostFocus", "@brief Method bool QFocusEvent::lostFocus()\n", true, &_init_f_lostFocus_c0, &_call_f_lostFocus_c0);
  methods += new qt_gsi::GenericMethod ("reason", "@brief Method Qt::FocusReason QFocusEvent::reason()\n", false, &_init_f_reason_0, &_call_f_reason_0);
  methods += new qt_gsi::GenericMethod ("reason", "@brief Method Qt::FocusReason QFocusEvent::reason()\n", true, &_init_f_reason_c0, &_call_f_reason_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QFocusEvent> decl_QFocusEvent (qtdecl_QEvent (), "QtGui", "QFocusEvent_Native",
  methods_QFocusEvent (),
  "@hide\n@alias QFocusEvent");

GSI_QTGUI_PUBLIC gsi::Class<QFocusEvent> &qtdecl_QFocusEvent () { return decl_QFocusEvent; }

}


class QFocusEvent_Adaptor : public QFocusEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QFocusEvent_Adaptor();

  //  [adaptor ctor] QFocusEvent::QFocusEvent(QEvent::Type type, Qt::FocusReason reason)
  QFocusEvent_Adaptor(QEvent::Type type) : QFocusEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QFocusEvent::QFocusEvent(QEvent::Type type, Qt::FocusReason reason)
  QFocusEvent_Adaptor(QEvent::Type type, Qt::FocusReason reason) : QFocusEvent(type, reason)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QFocusEvent_Adaptor::~QFocusEvent_Adaptor() { }

//  Constructor QFocusEvent::QFocusEvent(QEvent::Type type, Qt::FocusReason reason) (adaptor class)

static void _init_ctor_QFocusEvent_Adaptor_3334 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("reason", true, "Qt::OtherFocusReason");
  decl->add_arg<const qt_gsi::Converter<Qt::FocusReason>::target_type & > (argspec_1);
  decl->set_return_new<QFocusEvent_Adaptor> ();
}

static void _call_ctor_QFocusEvent_Adaptor_3334 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const qt_gsi::Converter<Qt::FocusReason>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::FocusReason>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::FocusReason>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::FocusReason>(heap, Qt::OtherFocusReason), heap);
  ret.write<QFocusEvent_Adaptor *> (new QFocusEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), qt_gsi::QtToCppAdaptor<Qt::FocusReason>(arg2).cref()));
}


namespace gsi
{

gsi::Class<QFocusEvent> &qtdecl_QFocusEvent ();

static gsi::Methods methods_QFocusEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFocusEvent::QFocusEvent(QEvent::Type type, Qt::FocusReason reason)\nThis method creates an object of class QFocusEvent.", &_init_ctor_QFocusEvent_Adaptor_3334, &_call_ctor_QFocusEvent_Adaptor_3334);
  return methods;
}

gsi::Class<QFocusEvent_Adaptor> decl_QFocusEvent_Adaptor (qtdecl_QFocusEvent (), "QtGui", "QFocusEvent",
  methods_QFocusEvent_Adaptor (),
  "@qt\n@brief Binding of QFocusEvent");

}

