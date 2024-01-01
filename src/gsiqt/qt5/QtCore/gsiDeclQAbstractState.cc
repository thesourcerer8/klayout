
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
*  @file gsiDeclQAbstractState.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractState>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QState>
#include <QStateMachine>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractState

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAbstractState::staticMetaObject);
}


// bool QAbstractState::active()


static void _init_f_active_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_active_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAbstractState *)cls)->active ());
}


// QStateMachine *QAbstractState::machine()


static void _init_f_machine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStateMachine * > ();
}

static void _call_f_machine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStateMachine * > ((QStateMachine *)((QAbstractState *)cls)->machine ());
}


// QState *QAbstractState::parentState()


static void _init_f_parentState_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QState * > ();
}

static void _call_f_parentState_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QState * > ((QState *)((QAbstractState *)cls)->parentState ());
}


// static QString QAbstractState::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAbstractState::tr (arg1, arg2, arg3));
}


// static QString QAbstractState::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QAbstractState::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAbstractState () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod (":active", "@brief Method bool QAbstractState::active()\n", true, &_init_f_active_c0, &_call_f_active_c0);
  methods += new qt_gsi::GenericMethod ("machine", "@brief Method QStateMachine *QAbstractState::machine()\n", true, &_init_f_machine_c0, &_call_f_machine_c0);
  methods += new qt_gsi::GenericMethod ("parentState", "@brief Method QState *QAbstractState::parentState()\n", true, &_init_f_parentState_c0, &_call_f_parentState_c0);
  methods += gsi::qt_signal<bool > ("activeChanged(bool)", "activeChanged", gsi::arg("active"), "@brief Signal declaration for QAbstractState::activeChanged(bool active)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QAbstractState::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("entered()", "entered", "@brief Signal declaration for QAbstractState::entered()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("exited()", "exited", "@brief Signal declaration for QAbstractState::exited()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QAbstractState::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAbstractState::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAbstractState::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAbstractState> decl_QAbstractState (qtdecl_QObject (), "QtCore", "QAbstractState_Native",
  methods_QAbstractState (),
  "@hide\n@alias QAbstractState");

GSI_QTCORE_PUBLIC gsi::Class<QAbstractState> &qtdecl_QAbstractState () { return decl_QAbstractState; }

}


class QAbstractState_Adaptor : public QAbstractState, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractState_Adaptor();

  //  [adaptor ctor] QAbstractState::QAbstractState()
  QAbstractState_Adaptor() : QAbstractState()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAbstractState::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAbstractState_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAbstractState::isSignalConnected(signal);
  }

  //  [expose] int QAbstractState::receivers(const char *signal)
  int fp_QAbstractState_receivers_c1731 (const char *signal) const {
    return QAbstractState::receivers(signal);
  }

  //  [expose] QObject *QAbstractState::sender()
  QObject * fp_QAbstractState_sender_c0 () const {
    return QAbstractState::sender();
  }

  //  [expose] int QAbstractState::senderSignalIndex()
  int fp_QAbstractState_senderSignalIndex_c0 () const {
    return QAbstractState::senderSignalIndex();
  }

  //  [emitter impl] void QAbstractState::activeChanged(bool active)
  void emitter_QAbstractState_activeChanged_864(bool active)
  {
    emit QAbstractState::activeChanged(active);
  }

  //  [emitter impl] void QAbstractState::destroyed(QObject *)
  void emitter_QAbstractState_destroyed_1302(QObject *arg1)
  {
    emit QAbstractState::destroyed(arg1);
  }

  //  [emitter impl] void QAbstractState::entered()
  void emitter_QAbstractState_entered_3384()
  {
    throw tl::Exception ("Can't emit private signal 'void QAbstractState::entered()'");
  }

  //  [adaptor impl] bool QAbstractState::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAbstractState::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAbstractState_Adaptor, bool, QObject *, QEvent *>(&QAbstractState_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAbstractState::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QAbstractState::exited()
  void emitter_QAbstractState_exited_3384()
  {
    throw tl::Exception ("Can't emit private signal 'void QAbstractState::exited()'");
  }

  //  [emitter impl] void QAbstractState::objectNameChanged(const QString &objectName)
  void emitter_QAbstractState_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QAbstractState::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QAbstractState::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAbstractState::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAbstractState_Adaptor, QChildEvent *>(&QAbstractState_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAbstractState::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractState::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAbstractState::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAbstractState_Adaptor, QEvent *>(&QAbstractState_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAbstractState::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractState::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAbstractState::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAbstractState_Adaptor, const QMetaMethod &>(&QAbstractState_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAbstractState::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] bool QAbstractState::event(QEvent *e)
  bool cbs_event_1217_0(QEvent *e)
  {
    return QAbstractState::event(e);
  }

  virtual bool event(QEvent *e)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAbstractState_Adaptor, bool, QEvent *>(&QAbstractState_Adaptor::cbs_event_1217_0, e);
    } else {
      return QAbstractState::event(e);
    }
  }

  //  [adaptor impl] void QAbstractState::onEntry(QEvent *event)
  void cbs_onEntry_1217_0(QEvent *event)
  {
    __SUPPRESS_UNUSED_WARNING (event);
    throw qt_gsi::AbstractMethodCalledException("onEntry");
  }

  virtual void onEntry(QEvent *event)
  {
    if (cb_onEntry_1217_0.can_issue()) {
      cb_onEntry_1217_0.issue<QAbstractState_Adaptor, QEvent *>(&QAbstractState_Adaptor::cbs_onEntry_1217_0, event);
    } else {
      throw qt_gsi::AbstractMethodCalledException("onEntry");
    }
  }

  //  [adaptor impl] void QAbstractState::onExit(QEvent *event)
  void cbs_onExit_1217_0(QEvent *event)
  {
    __SUPPRESS_UNUSED_WARNING (event);
    throw qt_gsi::AbstractMethodCalledException("onExit");
  }

  virtual void onExit(QEvent *event)
  {
    if (cb_onExit_1217_0.can_issue()) {
      cb_onExit_1217_0.issue<QAbstractState_Adaptor, QEvent *>(&QAbstractState_Adaptor::cbs_onExit_1217_0, event);
    } else {
      throw qt_gsi::AbstractMethodCalledException("onExit");
    }
  }

  //  [adaptor impl] void QAbstractState::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAbstractState::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAbstractState_Adaptor, QTimerEvent *>(&QAbstractState_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAbstractState::timerEvent(arg1);
    }
  }

  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_onEntry_1217_0;
  gsi::Callback cb_onExit_1217_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAbstractState_Adaptor::~QAbstractState_Adaptor() { }

//  Constructor QAbstractState::QAbstractState() (adaptor class)

static void _init_ctor_QAbstractState_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAbstractState_Adaptor> ();
}

static void _call_ctor_QAbstractState_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAbstractState_Adaptor *> (new QAbstractState_Adaptor ());
}


// emitter void QAbstractState::activeChanged(bool active)

static void _init_emitter_activeChanged_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("active");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_activeChanged_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  ((QAbstractState_Adaptor *)cls)->emitter_QAbstractState_activeChanged_864 (arg1);
}


// void QAbstractState::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractState_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAbstractState::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractState_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QAbstractState::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ((QAbstractState_Adaptor *)cls)->emitter_QAbstractState_destroyed_1302 (arg1);
}


// void QAbstractState::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractState_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// emitter void QAbstractState::entered()

static void _init_emitter_entered_3384 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_entered_3384 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QAbstractState_Adaptor *)cls)->emitter_QAbstractState_entered_3384 ();
}


// bool QAbstractState::event(QEvent *e)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("e");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractState_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAbstractState::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractState_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// emitter void QAbstractState::exited()

static void _init_emitter_exited_3384 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_emitter_exited_3384 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ((QAbstractState_Adaptor *)cls)->emitter_QAbstractState_exited_3384 ();
}


// exposed bool QAbstractState::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QAbstractState_Adaptor *)cls)->fp_QAbstractState_isSignalConnected_c2394 (arg1));
}


// emitter void QAbstractState::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QAbstractState_Adaptor *)cls)->emitter_QAbstractState_objectNameChanged_4567 (arg1);
}


// void QAbstractState::onEntry(QEvent *event)

static void _init_cbs_onEntry_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onEntry_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractState_Adaptor *)cls)->cbs_onEntry_1217_0 (arg1);
}

static void _set_callback_cbs_onEntry_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_onEntry_1217_0 = cb;
}


// void QAbstractState::onExit(QEvent *event)

static void _init_cbs_onExit_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_onExit_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractState_Adaptor *)cls)->cbs_onExit_1217_0 (arg1);
}

static void _set_callback_cbs_onExit_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_onExit_1217_0 = cb;
}


// exposed int QAbstractState::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QAbstractState_Adaptor *)cls)->fp_QAbstractState_receivers_c1731 (arg1));
}


// exposed QObject *QAbstractState::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAbstractState_Adaptor *)cls)->fp_QAbstractState_sender_c0 ());
}


// exposed int QAbstractState::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAbstractState_Adaptor *)cls)->fp_QAbstractState_senderSignalIndex_c0 ());
}


// void QAbstractState::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractState_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractState_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractState> &qtdecl_QAbstractState ();

static gsi::Methods methods_QAbstractState_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractState::QAbstractState()\nThis method creates an object of class QAbstractState.", &_init_ctor_QAbstractState_Adaptor_0, &_call_ctor_QAbstractState_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("emit_activeChanged", "@brief Emitter for signal void QAbstractState::activeChanged(bool active)\nCall this method to emit this signal.", false, &_init_emitter_activeChanged_864, &_call_emitter_activeChanged_864);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAbstractState::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAbstractState::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QAbstractState::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAbstractState::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("emit_entered", "@brief Emitter for signal void QAbstractState::entered()\nCall this method to emit this signal.", false, &_init_emitter_entered_3384, &_call_emitter_entered_3384);
  methods += new qt_gsi::GenericMethod ("*event", "@brief Virtual method bool QAbstractState::event(QEvent *e)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("*event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAbstractState::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("emit_exited", "@brief Emitter for signal void QAbstractState::exited()\nCall this method to emit this signal.", false, &_init_emitter_exited_3384, &_call_emitter_exited_3384);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAbstractState::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QAbstractState::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@brief Virtual method void QAbstractState::onEntry(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onEntry", "@hide", false, &_init_cbs_onEntry_1217_0, &_call_cbs_onEntry_1217_0, &_set_callback_cbs_onEntry_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@brief Virtual method void QAbstractState::onExit(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*onExit", "@hide", false, &_init_cbs_onExit_1217_0, &_call_cbs_onExit_1217_0, &_set_callback_cbs_onExit_1217_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAbstractState::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAbstractState::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAbstractState::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAbstractState::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAbstractState_Adaptor> decl_QAbstractState_Adaptor (qtdecl_QAbstractState (), "QtCore", "QAbstractState",
  methods_QAbstractState_Adaptor (),
  "@qt\n@brief Binding of QAbstractState");

}

