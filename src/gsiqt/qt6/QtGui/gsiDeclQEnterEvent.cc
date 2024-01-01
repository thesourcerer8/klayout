
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
*  @file gsiDeclQEnterEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEnterEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QObject>
#include <QPoint>
#include <QPointF>
#include <QPointingDevice>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEnterEvent

// QPoint QEnterEvent::globalPos()


static void _init_f_globalPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_globalPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QEnterEvent *)cls)->globalPos ());
}


// int QEnterEvent::globalX()


static void _init_f_globalX_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalX_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEnterEvent *)cls)->globalX ());
}


// int QEnterEvent::globalY()


static void _init_f_globalY_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_globalY_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEnterEvent *)cls)->globalY ());
}


// QPointF QEnterEvent::localPos()


static void _init_f_localPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_localPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEnterEvent *)cls)->localPos ());
}


// QPoint QEnterEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QEnterEvent *)cls)->pos ());
}


// QPointF QEnterEvent::screenPos()


static void _init_f_screenPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_screenPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEnterEvent *)cls)->screenPos ());
}


// QPointF QEnterEvent::windowPos()


static void _init_f_windowPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointF > ();
}

static void _call_f_windowPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointF > ((QPointF)((QEnterEvent *)cls)->windowPos ());
}


// int QEnterEvent::x()


static void _init_f_x_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_x_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEnterEvent *)cls)->x ());
}


// int QEnterEvent::y()


static void _init_f_y_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_y_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEnterEvent *)cls)->y ());
}


namespace gsi
{

static gsi::Methods methods_QEnterEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("globalPos", "@brief Method QPoint QEnterEvent::globalPos()\n", true, &_init_f_globalPos_c0, &_call_f_globalPos_c0);
  methods += new qt_gsi::GenericMethod ("globalX", "@brief Method int QEnterEvent::globalX()\n", true, &_init_f_globalX_c0, &_call_f_globalX_c0);
  methods += new qt_gsi::GenericMethod ("globalY", "@brief Method int QEnterEvent::globalY()\n", true, &_init_f_globalY_c0, &_call_f_globalY_c0);
  methods += new qt_gsi::GenericMethod ("localPos", "@brief Method QPointF QEnterEvent::localPos()\n", true, &_init_f_localPos_c0, &_call_f_localPos_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method QPoint QEnterEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("screenPos", "@brief Method QPointF QEnterEvent::screenPos()\n", true, &_init_f_screenPos_c0, &_call_f_screenPos_c0);
  methods += new qt_gsi::GenericMethod ("windowPos", "@brief Method QPointF QEnterEvent::windowPos()\n", true, &_init_f_windowPos_c0, &_call_f_windowPos_c0);
  methods += new qt_gsi::GenericMethod ("x", "@brief Method int QEnterEvent::x()\n", true, &_init_f_x_c0, &_call_f_x_c0);
  methods += new qt_gsi::GenericMethod ("y", "@brief Method int QEnterEvent::y()\n", true, &_init_f_y_c0, &_call_f_y_c0);
  return methods;
}

gsi::Class<QSinglePointEvent> &qtdecl_QSinglePointEvent ();

gsi::Class<QEnterEvent> decl_QEnterEvent (qtdecl_QSinglePointEvent (), "QtGui", "QEnterEvent_Native",
  methods_QEnterEvent (),
  "@hide\n@alias QEnterEvent");

GSI_QTGUI_PUBLIC gsi::Class<QEnterEvent> &qtdecl_QEnterEvent () { return decl_QEnterEvent; }

}


class QEnterEvent_Adaptor : public QEnterEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QEnterEvent_Adaptor();

  //  [adaptor ctor] QEnterEvent::QEnterEvent(const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, const QPointingDevice *device)
  QEnterEvent_Adaptor(const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos) : QEnterEvent(localPos, scenePos, globalPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QEnterEvent::QEnterEvent(const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, const QPointingDevice *device)
  QEnterEvent_Adaptor(const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, const QPointingDevice *device) : QEnterEvent(localPos, scenePos, globalPos, device)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QEnterEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QEnterEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QEnterEvent_Adaptor, bool>(&QEnterEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QEnterEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QEnterEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QEnterEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QEnterEvent_Adaptor, bool>(&QEnterEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QEnterEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QEnterEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QEnterEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QEnterEvent_Adaptor, bool>(&QEnterEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QEnterEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QEnterEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QEnterEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QEnterEvent_Adaptor, bool>(&QEnterEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QEnterEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QEnterEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QEnterEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QEnterEvent_Adaptor, quint64>(&QEnterEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QEnterEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QEnterEvent_Adaptor::~QEnterEvent_Adaptor() { }

//  Constructor QEnterEvent::QEnterEvent(const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, const QPointingDevice *device) (adaptor class)

static void _init_ctor_QEnterEvent_Adaptor_8464 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("localPos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("scenePos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("device", true, "QPointingDevice::primaryPointingDevice()");
  decl->add_arg<const QPointingDevice * > (argspec_3);
  decl->set_return_new<QEnterEvent_Adaptor> ();
}

static void _call_ctor_QEnterEvent_Adaptor_8464 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg3 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointingDevice *arg4 = args ? gsi::arg_reader<const QPointingDevice * >() (args, heap) : gsi::arg_maker<const QPointingDevice * >() (QPointingDevice::primaryPointingDevice(), heap);
  ret.write<QEnterEvent_Adaptor *> (new QEnterEvent_Adaptor (arg1, arg2, arg3, arg4));
}


// bool QEnterEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEnterEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QEnterEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QEnterEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEnterEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QEnterEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QEnterEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEnterEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QEnterEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QEnterEvent::setAccepted(bool accepted)

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
  ((QEnterEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QEnterEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QEnterEvent::setTimestamp(quint64 timestamp)

static void _init_cbs_setTimestamp_1103_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timestamp");
  decl->add_arg<quint64 > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_setTimestamp_1103_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  quint64 arg1 = args.read<quint64 > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEnterEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QEnterEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QEnterEvent> &qtdecl_QEnterEvent ();

static gsi::Methods methods_QEnterEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEnterEvent::QEnterEvent(const QPointF &localPos, const QPointF &scenePos, const QPointF &globalPos, const QPointingDevice *device)\nThis method creates an object of class QEnterEvent.", &_init_ctor_QEnterEvent_Adaptor_8464, &_call_ctor_QEnterEvent_Adaptor_8464);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QEnterEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QEnterEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QEnterEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QEnterEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QEnterEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QEnterEvent_Adaptor> decl_QEnterEvent_Adaptor (qtdecl_QEnterEvent (), "QtGui", "QEnterEvent",
  methods_QEnterEvent_Adaptor (),
  "@qt\n@brief Binding of QEnterEvent");

}

