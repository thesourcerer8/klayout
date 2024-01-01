
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
*  @file gsiDeclQEventLoop.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QEventLoop>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QEventLoop

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QEventLoop::staticMetaObject);
}


// bool QEventLoop::event(QEvent *event)


static void _init_f_event_1217 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_event_1217 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = gsi::arg_reader<QEvent * >() (args, heap);
  ret.write<bool > ((bool)((QEventLoop *)cls)->event (arg1));
}


// int QEventLoop::exec(QFlags<QEventLoop::ProcessEventsFlag> flags)


static void _init_f_exec_3995 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags", true, "QEventLoop::AllEvents");
  decl->add_arg<QFlags<QEventLoop::ProcessEventsFlag> > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_exec_3995 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QEventLoop::ProcessEventsFlag> arg1 = args ? gsi::arg_reader<QFlags<QEventLoop::ProcessEventsFlag> >() (args, heap) : gsi::arg_maker<QFlags<QEventLoop::ProcessEventsFlag> >() (QEventLoop::AllEvents, heap);
  ret.write<int > ((int)((QEventLoop *)cls)->exec (arg1));
}


// void QEventLoop::exit(int returnCode)


static void _init_f_exit_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("returnCode", true, "0");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_exit_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (0, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventLoop *)cls)->exit (arg1);
}


// bool QEventLoop::isRunning()


static void _init_f_isRunning_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRunning_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QEventLoop *)cls)->isRunning ());
}


// bool QEventLoop::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags)


static void _init_f_processEvents_3995 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags", true, "QEventLoop::AllEvents");
  decl->add_arg<QFlags<QEventLoop::ProcessEventsFlag> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_processEvents_3995 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QEventLoop::ProcessEventsFlag> arg1 = args ? gsi::arg_reader<QFlags<QEventLoop::ProcessEventsFlag> >() (args, heap) : gsi::arg_maker<QFlags<QEventLoop::ProcessEventsFlag> >() (QEventLoop::AllEvents, heap);
  ret.write<bool > ((bool)((QEventLoop *)cls)->processEvents (arg1));
}


// void QEventLoop::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime)


static void _init_f_processEvents_4654 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags");
  decl->add_arg<QFlags<QEventLoop::ProcessEventsFlag> > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("maximumTime");
  decl->add_arg<int > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_processEvents_4654 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QEventLoop::ProcessEventsFlag> arg1 = gsi::arg_reader<QFlags<QEventLoop::ProcessEventsFlag> >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventLoop *)cls)->processEvents (arg1, arg2);
}


// void QEventLoop::quit()


static void _init_f_quit_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_quit_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventLoop *)cls)->quit ();
}


// void QEventLoop::wakeUp()


static void _init_f_wakeUp_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_wakeUp_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QEventLoop *)cls)->wakeUp ();
}


// static QString QEventLoop::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QEventLoop::tr (arg1, arg2, arg3));
}


// static QString QEventLoop::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QEventLoop::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QEventLoop () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("event", "@brief Method bool QEventLoop::event(QEvent *event)\nThis is a reimplementation of QObject::event", false, &_init_f_event_1217, &_call_f_event_1217);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method int QEventLoop::exec(QFlags<QEventLoop::ProcessEventsFlag> flags)\n", false, &_init_f_exec_3995, &_call_f_exec_3995);
  methods += new qt_gsi::GenericMethod ("exit", "@brief Method void QEventLoop::exit(int returnCode)\n", false, &_init_f_exit_767, &_call_f_exit_767);
  methods += new qt_gsi::GenericMethod ("isRunning?", "@brief Method bool QEventLoop::isRunning()\n", true, &_init_f_isRunning_c0, &_call_f_isRunning_c0);
  methods += new qt_gsi::GenericMethod ("processEvents", "@brief Method bool QEventLoop::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags)\n", false, &_init_f_processEvents_3995, &_call_f_processEvents_3995);
  methods += new qt_gsi::GenericMethod ("processEvents", "@brief Method void QEventLoop::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime)\n", false, &_init_f_processEvents_4654, &_call_f_processEvents_4654);
  methods += new qt_gsi::GenericMethod ("quit", "@brief Method void QEventLoop::quit()\n", false, &_init_f_quit_0, &_call_f_quit_0);
  methods += new qt_gsi::GenericMethod ("wakeUp", "@brief Method void QEventLoop::wakeUp()\n", false, &_init_f_wakeUp_0, &_call_f_wakeUp_0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QEventLoop::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QEventLoop::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QEventLoop::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QEventLoop::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QEventLoop> decl_QEventLoop (qtdecl_QObject (), "QtCore", "QEventLoop_Native",
  methods_QEventLoop (),
  "@hide\n@alias QEventLoop");

GSI_QTCORE_PUBLIC gsi::Class<QEventLoop> &qtdecl_QEventLoop () { return decl_QEventLoop; }

}


class QEventLoop_Adaptor : public QEventLoop, public qt_gsi::QtObjectBase
{
public:

  virtual ~QEventLoop_Adaptor();

  //  [adaptor ctor] QEventLoop::QEventLoop(QObject *parent)
  QEventLoop_Adaptor() : QEventLoop()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QEventLoop::QEventLoop(QObject *parent)
  QEventLoop_Adaptor(QObject *parent) : QEventLoop(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QEventLoop::isSignalConnected(const QMetaMethod &signal)
  bool fp_QEventLoop_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QEventLoop::isSignalConnected(signal);
  }

  //  [expose] int QEventLoop::receivers(const char *signal)
  int fp_QEventLoop_receivers_c1731 (const char *signal) const {
    return QEventLoop::receivers(signal);
  }

  //  [expose] QObject *QEventLoop::sender()
  QObject * fp_QEventLoop_sender_c0 () const {
    return QEventLoop::sender();
  }

  //  [expose] int QEventLoop::senderSignalIndex()
  int fp_QEventLoop_senderSignalIndex_c0 () const {
    return QEventLoop::senderSignalIndex();
  }

  //  [emitter impl] void QEventLoop::destroyed(QObject *)
  void emitter_QEventLoop_destroyed_1302(QObject *arg1)
  {
    emit QEventLoop::destroyed(arg1);
  }

  //  [adaptor impl] bool QEventLoop::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QEventLoop::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QEventLoop_Adaptor, bool, QEvent *>(&QEventLoop_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QEventLoop::event(_event);
    }
  }

  //  [adaptor impl] bool QEventLoop::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QEventLoop::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QEventLoop_Adaptor, bool, QObject *, QEvent *>(&QEventLoop_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QEventLoop::eventFilter(arg1, arg2);
    }
  }

  //  [emitter impl] void QEventLoop::objectNameChanged(const QString &objectName)
  void emitter_QEventLoop_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QEventLoop::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QEventLoop::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QEventLoop::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QEventLoop_Adaptor, QChildEvent *>(&QEventLoop_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QEventLoop::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QEventLoop::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QEventLoop::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QEventLoop_Adaptor, QEvent *>(&QEventLoop_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QEventLoop::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QEventLoop::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QEventLoop::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QEventLoop_Adaptor, const QMetaMethod &>(&QEventLoop_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QEventLoop::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QEventLoop::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QEventLoop::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QEventLoop_Adaptor, QTimerEvent *>(&QEventLoop_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QEventLoop::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QEventLoop_Adaptor::~QEventLoop_Adaptor() { }

//  Constructor QEventLoop::QEventLoop(QObject *parent) (adaptor class)

static void _init_ctor_QEventLoop_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QEventLoop_Adaptor> ();
}

static void _call_ctor_QEventLoop_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QEventLoop_Adaptor *> (new QEventLoop_Adaptor (arg1));
}


// void QEventLoop::childEvent(QChildEvent *)

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
  ((QEventLoop_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventLoop_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QEventLoop::customEvent(QEvent *)

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
  ((QEventLoop_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventLoop_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QEventLoop::destroyed(QObject *)

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
  ((QEventLoop_Adaptor *)cls)->emitter_QEventLoop_destroyed_1302 (arg1);
}


// void QEventLoop::disconnectNotify(const QMetaMethod &signal)

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
  ((QEventLoop_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventLoop_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QEventLoop::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QEventLoop_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventLoop_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QEventLoop::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QEventLoop_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventLoop_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QEventLoop::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QEventLoop_Adaptor *)cls)->fp_QEventLoop_isSignalConnected_c2394 (arg1));
}


// emitter void QEventLoop::objectNameChanged(const QString &objectName)

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
  ((QEventLoop_Adaptor *)cls)->emitter_QEventLoop_objectNameChanged_4567 (arg1);
}


// exposed int QEventLoop::receivers(const char *signal)

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
  ret.write<int > ((int)((QEventLoop_Adaptor *)cls)->fp_QEventLoop_receivers_c1731 (arg1));
}


// exposed QObject *QEventLoop::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QEventLoop_Adaptor *)cls)->fp_QEventLoop_sender_c0 ());
}


// exposed int QEventLoop::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QEventLoop_Adaptor *)cls)->fp_QEventLoop_senderSignalIndex_c0 ());
}


// void QEventLoop::timerEvent(QTimerEvent *)

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
  ((QEventLoop_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QEventLoop_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QEventLoop> &qtdecl_QEventLoop ();

static gsi::Methods methods_QEventLoop_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QEventLoop::QEventLoop(QObject *parent)\nThis method creates an object of class QEventLoop.", &_init_ctor_QEventLoop_Adaptor_1302, &_call_ctor_QEventLoop_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QEventLoop::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QEventLoop::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QEventLoop::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QEventLoop::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QEventLoop::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QEventLoop::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QEventLoop::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QEventLoop::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QEventLoop::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QEventLoop::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QEventLoop::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QEventLoop::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QEventLoop_Adaptor> decl_QEventLoop_Adaptor (qtdecl_QEventLoop (), "QtCore", "QEventLoop",
  methods_QEventLoop_Adaptor (),
  "@qt\n@brief Binding of QEventLoop");

}


//  Implementation of the enum wrapper class for QEventLoop::ProcessEventsFlag
namespace qt_gsi
{

static gsi::Enum<QEventLoop::ProcessEventsFlag> decl_QEventLoop_ProcessEventsFlag_Enum ("QtCore", "QEventLoop_ProcessEventsFlag",
    gsi::enum_const ("AllEvents", QEventLoop::AllEvents, "@brief Enum constant QEventLoop::AllEvents") +
    gsi::enum_const ("ExcludeUserInputEvents", QEventLoop::ExcludeUserInputEvents, "@brief Enum constant QEventLoop::ExcludeUserInputEvents") +
    gsi::enum_const ("ExcludeSocketNotifiers", QEventLoop::ExcludeSocketNotifiers, "@brief Enum constant QEventLoop::ExcludeSocketNotifiers") +
    gsi::enum_const ("WaitForMoreEvents", QEventLoop::WaitForMoreEvents, "@brief Enum constant QEventLoop::WaitForMoreEvents") +
    gsi::enum_const ("X11ExcludeTimers", QEventLoop::X11ExcludeTimers, "@brief Enum constant QEventLoop::X11ExcludeTimers") +
    gsi::enum_const ("EventLoopExec", QEventLoop::EventLoopExec, "@brief Enum constant QEventLoop::EventLoopExec") +
    gsi::enum_const ("DialogExec", QEventLoop::DialogExec, "@brief Enum constant QEventLoop::DialogExec"),
  "@qt\n@brief This class represents the QEventLoop::ProcessEventsFlag enum");

static gsi::QFlagsClass<QEventLoop::ProcessEventsFlag > decl_QEventLoop_ProcessEventsFlag_Enums ("QtCore", "QEventLoop_QFlags_ProcessEventsFlag",
  "@qt\n@brief This class represents the QFlags<QEventLoop::ProcessEventsFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QEventLoop> inject_QEventLoop_ProcessEventsFlag_Enum_in_parent (decl_QEventLoop_ProcessEventsFlag_Enum.defs ());
static gsi::ClassExt<QEventLoop> decl_QEventLoop_ProcessEventsFlag_Enum_as_child (decl_QEventLoop_ProcessEventsFlag_Enum, "ProcessEventsFlag");
static gsi::ClassExt<QEventLoop> decl_QEventLoop_ProcessEventsFlag_Enums_as_child (decl_QEventLoop_ProcessEventsFlag_Enums, "QFlags_ProcessEventsFlag");

}

