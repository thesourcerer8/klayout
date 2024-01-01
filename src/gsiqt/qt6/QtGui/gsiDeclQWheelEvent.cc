
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
*  @file gsiDeclQWheelEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QWheelEvent>
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
// class QWheelEvent

// QPoint QWheelEvent::angleDelta()


static void _init_f_angleDelta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_angleDelta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QWheelEvent *)cls)->angleDelta ());
}


// bool QWheelEvent::hasPixelDelta()


static void _init_f_hasPixelDelta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasPixelDelta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent *)cls)->hasPixelDelta ());
}


// bool QWheelEvent::inverted()


static void _init_f_inverted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_inverted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent *)cls)->inverted ());
}


// bool QWheelEvent::isBeginEvent()


static void _init_f_isBeginEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isBeginEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent *)cls)->isBeginEvent ());
}


// bool QWheelEvent::isEndEvent()


static void _init_f_isEndEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEndEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent *)cls)->isEndEvent ());
}


// bool QWheelEvent::isInverted()


static void _init_f_isInverted_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isInverted_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent *)cls)->isInverted ());
}


// bool QWheelEvent::isUpdateEvent()


static void _init_f_isUpdateEvent_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isUpdateEvent_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent *)cls)->isUpdateEvent ());
}


// Qt::ScrollPhase QWheelEvent::phase()


static void _init_f_phase_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::ScrollPhase>::target_type > ();
}

static void _call_f_phase_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::ScrollPhase>::target_type > ((qt_gsi::Converter<Qt::ScrollPhase>::target_type)qt_gsi::CppToQtAdaptor<Qt::ScrollPhase>(((QWheelEvent *)cls)->phase ()));
}


// QPoint QWheelEvent::pixelDelta()


static void _init_f_pixelDelta_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPoint > ();
}

static void _call_f_pixelDelta_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPoint > ((QPoint)((QWheelEvent *)cls)->pixelDelta ());
}


// Qt::MouseEventSource QWheelEvent::source()


static void _init_f_source_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::MouseEventSource>::target_type > ();
}

static void _call_f_source_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::MouseEventSource>::target_type > ((qt_gsi::Converter<Qt::MouseEventSource>::target_type)qt_gsi::CppToQtAdaptor<Qt::MouseEventSource>(((QWheelEvent *)cls)->source ()));
}


namespace gsi
{

static gsi::Methods methods_QWheelEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("angleDelta", "@brief Method QPoint QWheelEvent::angleDelta()\n", true, &_init_f_angleDelta_c0, &_call_f_angleDelta_c0);
  methods += new qt_gsi::GenericMethod ("hasPixelDelta", "@brief Method bool QWheelEvent::hasPixelDelta()\n", true, &_init_f_hasPixelDelta_c0, &_call_f_hasPixelDelta_c0);
  methods += new qt_gsi::GenericMethod ("inverted", "@brief Method bool QWheelEvent::inverted()\n", true, &_init_f_inverted_c0, &_call_f_inverted_c0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent?", "@brief Method bool QWheelEvent::isBeginEvent()\nThis is a reimplementation of QSinglePointEvent::isBeginEvent", true, &_init_f_isBeginEvent_c0, &_call_f_isBeginEvent_c0);
  methods += new qt_gsi::GenericMethod ("isEndEvent?", "@brief Method bool QWheelEvent::isEndEvent()\nThis is a reimplementation of QSinglePointEvent::isEndEvent", true, &_init_f_isEndEvent_c0, &_call_f_isEndEvent_c0);
  methods += new qt_gsi::GenericMethod ("isInverted?", "@brief Method bool QWheelEvent::isInverted()\n", true, &_init_f_isInverted_c0, &_call_f_isInverted_c0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent?", "@brief Method bool QWheelEvent::isUpdateEvent()\nThis is a reimplementation of QSinglePointEvent::isUpdateEvent", true, &_init_f_isUpdateEvent_c0, &_call_f_isUpdateEvent_c0);
  methods += new qt_gsi::GenericMethod ("phase", "@brief Method Qt::ScrollPhase QWheelEvent::phase()\n", true, &_init_f_phase_c0, &_call_f_phase_c0);
  methods += new qt_gsi::GenericMethod ("pixelDelta", "@brief Method QPoint QWheelEvent::pixelDelta()\n", true, &_init_f_pixelDelta_c0, &_call_f_pixelDelta_c0);
  methods += new qt_gsi::GenericMethod ("source", "@brief Method Qt::MouseEventSource QWheelEvent::source()\n", true, &_init_f_source_c0, &_call_f_source_c0);
  return methods;
}

gsi::Class<QSinglePointEvent> &qtdecl_QSinglePointEvent ();

gsi::Class<QWheelEvent> decl_QWheelEvent (qtdecl_QSinglePointEvent (), "QtGui", "QWheelEvent_Native",
  methods_QWheelEvent (),
  "@hide\n@alias QWheelEvent");

GSI_QTGUI_PUBLIC gsi::Class<QWheelEvent> &qtdecl_QWheelEvent () { return decl_QWheelEvent; }

}


class QWheelEvent_Adaptor : public QWheelEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QWheelEvent_Adaptor();

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice *device)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice *device)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice *device)
  QWheelEvent_Adaptor(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice *device) : QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] bool QWheelEvent::isBeginEvent()
  bool cbs_isBeginEvent_c0_0() const
  {
    return QWheelEvent::isBeginEvent();
  }

  virtual bool isBeginEvent() const
  {
    if (cb_isBeginEvent_c0_0.can_issue()) {
      return cb_isBeginEvent_c0_0.issue<QWheelEvent_Adaptor, bool>(&QWheelEvent_Adaptor::cbs_isBeginEvent_c0_0);
    } else {
      return QWheelEvent::isBeginEvent();
    }
  }

  //  [adaptor impl] bool QWheelEvent::isEndEvent()
  bool cbs_isEndEvent_c0_0() const
  {
    return QWheelEvent::isEndEvent();
  }

  virtual bool isEndEvent() const
  {
    if (cb_isEndEvent_c0_0.can_issue()) {
      return cb_isEndEvent_c0_0.issue<QWheelEvent_Adaptor, bool>(&QWheelEvent_Adaptor::cbs_isEndEvent_c0_0);
    } else {
      return QWheelEvent::isEndEvent();
    }
  }

  //  [adaptor impl] bool QWheelEvent::isUpdateEvent()
  bool cbs_isUpdateEvent_c0_0() const
  {
    return QWheelEvent::isUpdateEvent();
  }

  virtual bool isUpdateEvent() const
  {
    if (cb_isUpdateEvent_c0_0.can_issue()) {
      return cb_isUpdateEvent_c0_0.issue<QWheelEvent_Adaptor, bool>(&QWheelEvent_Adaptor::cbs_isUpdateEvent_c0_0);
    } else {
      return QWheelEvent::isUpdateEvent();
    }
  }

  //  [adaptor impl] void QWheelEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QWheelEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QWheelEvent_Adaptor, bool>(&QWheelEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QWheelEvent::setAccepted(accepted);
    }
  }

  //  [adaptor impl] void QWheelEvent::setTimestamp(quint64 timestamp)
  void cbs_setTimestamp_1103_0(quint64 timestamp)
  {
    QWheelEvent::setTimestamp(timestamp);
  }

  virtual void setTimestamp(quint64 timestamp)
  {
    if (cb_setTimestamp_1103_0.can_issue()) {
      cb_setTimestamp_1103_0.issue<QWheelEvent_Adaptor, quint64>(&QWheelEvent_Adaptor::cbs_setTimestamp_1103_0, timestamp);
    } else {
      QWheelEvent::setTimestamp(timestamp);
    }
  }

  gsi::Callback cb_isBeginEvent_c0_0;
  gsi::Callback cb_isEndEvent_c0_0;
  gsi::Callback cb_isUpdateEvent_c0_0;
  gsi::Callback cb_setAccepted_864_0;
  gsi::Callback cb_setTimestamp_1103_0;
};

QWheelEvent_Adaptor::~QWheelEvent_Adaptor() { }

//  Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice *device) (adaptor class)

static void _init_ctor_QWheelEvent_Adaptor_18729 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPointF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("globalPos");
  decl->add_arg<const QPointF & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pixelDelta");
  decl->add_arg<QPoint > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("angleDelta");
  decl->add_arg<QPoint > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("phase");
  decl->add_arg<const qt_gsi::Converter<Qt::ScrollPhase>::target_type & > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("inverted");
  decl->add_arg<bool > (argspec_7);
  static gsi::ArgSpecBase argspec_8 ("source", true, "Qt::MouseEventNotSynthesized");
  decl->add_arg<const qt_gsi::Converter<Qt::MouseEventSource>::target_type & > (argspec_8);
  static gsi::ArgSpecBase argspec_9 ("device", true, "QPointingDevice::primaryPointingDevice()");
  decl->add_arg<const QPointingDevice * > (argspec_9);
  decl->set_return_new<QWheelEvent_Adaptor> ();
}

static void _call_ctor_QWheelEvent_Adaptor_18729 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointF &arg1 = gsi::arg_reader<const QPointF & >() (args, heap);
  const QPointF &arg2 = gsi::arg_reader<const QPointF & >() (args, heap);
  QPoint arg3 = gsi::arg_reader<QPoint >() (args, heap);
  QPoint arg4 = gsi::arg_reader<QPoint >() (args, heap);
  QFlags<Qt::MouseButton> arg5 = gsi::arg_reader<QFlags<Qt::MouseButton> >() (args, heap);
  QFlags<Qt::KeyboardModifier> arg6 = gsi::arg_reader<QFlags<Qt::KeyboardModifier> >() (args, heap);
  const qt_gsi::Converter<Qt::ScrollPhase>::target_type & arg7 = gsi::arg_reader<const qt_gsi::Converter<Qt::ScrollPhase>::target_type & >() (args, heap);
  bool arg8 = gsi::arg_reader<bool >() (args, heap);
  const qt_gsi::Converter<Qt::MouseEventSource>::target_type & arg9 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::MouseEventSource>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::MouseEventSource>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::MouseEventSource>(heap, Qt::MouseEventNotSynthesized), heap);
  const QPointingDevice *arg10 = args ? gsi::arg_reader<const QPointingDevice * >() (args, heap) : gsi::arg_maker<const QPointingDevice * >() (QPointingDevice::primaryPointingDevice(), heap);
  ret.write<QWheelEvent_Adaptor *> (new QWheelEvent_Adaptor (arg1, arg2, arg3, arg4, arg5, arg6, qt_gsi::QtToCppAdaptor<Qt::ScrollPhase>(arg7).cref(), arg8, qt_gsi::QtToCppAdaptor<Qt::MouseEventSource>(arg9).cref(), arg10));
}


// bool QWheelEvent::isBeginEvent()

static void _init_cbs_isBeginEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isBeginEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent_Adaptor *)cls)->cbs_isBeginEvent_c0_0 ());
}

static void _set_callback_cbs_isBeginEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWheelEvent_Adaptor *)cls)->cb_isBeginEvent_c0_0 = cb;
}


// bool QWheelEvent::isEndEvent()

static void _init_cbs_isEndEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isEndEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent_Adaptor *)cls)->cbs_isEndEvent_c0_0 ());
}

static void _set_callback_cbs_isEndEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWheelEvent_Adaptor *)cls)->cb_isEndEvent_c0_0 = cb;
}


// bool QWheelEvent::isUpdateEvent()

static void _init_cbs_isUpdateEvent_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_cbs_isUpdateEvent_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QWheelEvent_Adaptor *)cls)->cbs_isUpdateEvent_c0_0 ());
}

static void _set_callback_cbs_isUpdateEvent_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QWheelEvent_Adaptor *)cls)->cb_isUpdateEvent_c0_0 = cb;
}


// void QWheelEvent::setAccepted(bool accepted)

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
  ((QWheelEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QWheelEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


// void QWheelEvent::setTimestamp(quint64 timestamp)

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
  ((QWheelEvent_Adaptor *)cls)->cbs_setTimestamp_1103_0 (arg1);
}

static void _set_callback_cbs_setTimestamp_1103_0 (void *cls, const gsi::Callback &cb)
{
  ((QWheelEvent_Adaptor *)cls)->cb_setTimestamp_1103_0 = cb;
}


namespace gsi
{

gsi::Class<QWheelEvent> &qtdecl_QWheelEvent ();

static gsi::Methods methods_QWheelEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QWheelEvent::QWheelEvent(const QPointF &pos, const QPointF &globalPos, QPoint pixelDelta, QPoint angleDelta, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice *device)\nThis method creates an object of class QWheelEvent.", &_init_ctor_QWheelEvent_Adaptor_18729, &_call_ctor_QWheelEvent_Adaptor_18729);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@brief Virtual method bool QWheelEvent::isBeginEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isBeginEvent", "@hide", true, &_init_cbs_isBeginEvent_c0_0, &_call_cbs_isBeginEvent_c0_0, &_set_callback_cbs_isBeginEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@brief Virtual method bool QWheelEvent::isEndEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isEndEvent", "@hide", true, &_init_cbs_isEndEvent_c0_0, &_call_cbs_isEndEvent_c0_0, &_set_callback_cbs_isEndEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@brief Virtual method bool QWheelEvent::isUpdateEvent()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("isUpdateEvent", "@hide", true, &_init_cbs_isUpdateEvent_c0_0, &_call_cbs_isUpdateEvent_c0_0, &_set_callback_cbs_isUpdateEvent_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QWheelEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@brief Virtual method void QWheelEvent::setTimestamp(quint64 timestamp)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0);
  methods += new qt_gsi::GenericMethod ("setTimestamp", "@hide", false, &_init_cbs_setTimestamp_1103_0, &_call_cbs_setTimestamp_1103_0, &_set_callback_cbs_setTimestamp_1103_0);
  return methods;
}

gsi::Class<QWheelEvent_Adaptor> decl_QWheelEvent_Adaptor (qtdecl_QWheelEvent (), "QtGui", "QWheelEvent",
  methods_QWheelEvent_Adaptor (),
  "@qt\n@brief Binding of QWheelEvent");

}

