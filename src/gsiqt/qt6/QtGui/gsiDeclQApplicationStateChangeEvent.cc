
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
*  @file gsiDeclQApplicationStateChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QApplicationStateChangeEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QApplicationStateChangeEvent

// Qt::ApplicationState QApplicationStateChangeEvent::applicationState()


static void _init_f_applicationState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ApplicationState>::target_type > ();
}

static void _call_f_applicationState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ApplicationState>::target_type > ((qt_gsi::Converter<Qt::ApplicationState>::target_type)qt_gsi::CppToQtAdaptor<Qt::ApplicationState>(((QApplicationStateChangeEvent *)cls)->applicationState ()));
}


namespace gsi
{

static gsi::Methods methods_QApplicationStateChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("applicationState", "@brief Method Qt::ApplicationState QApplicationStateChangeEvent::applicationState()\n", true, &_init_f_applicationState_c0, &_call_f_applicationState_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QApplicationStateChangeEvent> decl_QApplicationStateChangeEvent (qtdecl_QEvent (), "QtGui", "QApplicationStateChangeEvent_Native",
  methods_QApplicationStateChangeEvent (),
  "@hide\n@alias QApplicationStateChangeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QApplicationStateChangeEvent> &qtdecl_QApplicationStateChangeEvent () { return decl_QApplicationStateChangeEvent; }

}


class QApplicationStateChangeEvent_Adaptor : public QApplicationStateChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QApplicationStateChangeEvent_Adaptor();

  //  [adaptor ctor] QApplicationStateChangeEvent::QApplicationStateChangeEvent(Qt::ApplicationState state)
  QApplicationStateChangeEvent_Adaptor(Qt::ApplicationState state) : QApplicationStateChangeEvent(state)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QApplicationStateChangeEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QApplicationStateChangeEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QApplicationStateChangeEvent_Adaptor, bool>(&QApplicationStateChangeEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QApplicationStateChangeEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QApplicationStateChangeEvent_Adaptor::~QApplicationStateChangeEvent_Adaptor() { }

//  Constructor QApplicationStateChangeEvent::QApplicationStateChangeEvent(Qt::ApplicationState state) (adaptor class)

static void _init_ctor_QApplicationStateChangeEvent_Adaptor_2402 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<const qt_gsi::Converter<Qt::ApplicationState>::target_type & > (argspec_0);
  decl->set_return_new<QApplicationStateChangeEvent_Adaptor> ();
}

static void _call_ctor_QApplicationStateChangeEvent_Adaptor_2402 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::ApplicationState>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::ApplicationState>::target_type & >() (args, heap);
  ret.write<QApplicationStateChangeEvent_Adaptor *> (new QApplicationStateChangeEvent_Adaptor (qt_gsi::QtToCppAdaptor<Qt::ApplicationState>(arg1).cref()));
}


// void QApplicationStateChangeEvent::setAccepted(bool accepted)

static void _init_cbs_setAccepted_864_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("accepted");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setAccepted_864_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QApplicationStateChangeEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QApplicationStateChangeEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QApplicationStateChangeEvent> &qtdecl_QApplicationStateChangeEvent ();

static gsi::Methods methods_QApplicationStateChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QApplicationStateChangeEvent::QApplicationStateChangeEvent(Qt::ApplicationState state)\nThis method creates an object of class QApplicationStateChangeEvent.", &_init_ctor_QApplicationStateChangeEvent_Adaptor_2402, &_call_ctor_QApplicationStateChangeEvent_Adaptor_2402);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QApplicationStateChangeEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QApplicationStateChangeEvent_Adaptor> decl_QApplicationStateChangeEvent_Adaptor (qtdecl_QApplicationStateChangeEvent (), "QtGui", "QApplicationStateChangeEvent",
  methods_QApplicationStateChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QApplicationStateChangeEvent");

}

