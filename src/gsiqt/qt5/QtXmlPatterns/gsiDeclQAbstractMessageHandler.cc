
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
*  @file gsiDeclQAbstractMessageHandler.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractMessageHandler>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QSourceLocation>
#include <QThread>
#include <QTimerEvent>
#include <QUrl>
#include "gsiQt.h"
#include "gsiQtXmlPatternsCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractMessageHandler

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAbstractMessageHandler::staticMetaObject);
}


// void QAbstractMessageHandler::message(QtMsgType type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)


static void _init_f_message_7592 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QtMsgType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("description");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("identifier", true, "QUrl()");
  decl->add_arg<const QUrl & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("sourceLocation", true, "QSourceLocation()");
  decl->add_arg<const QSourceLocation & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_message_7592 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QtMsgType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QtMsgType>::target_type & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  const QUrl &arg3 = args ? gsi::arg_reader<const QUrl & >() (args, heap) : gsi::arg_maker<const QUrl & >() (QUrl(), heap);
  const QSourceLocation &arg4 = args ? gsi::arg_reader<const QSourceLocation & >() (args, heap) : gsi::arg_maker<const QSourceLocation & >() (QSourceLocation(), heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractMessageHandler *)cls)->message (qt_gsi::QtToCppAdaptor<QtMsgType>(arg1).cref(), arg2, arg3, arg4);
}


// static QString QAbstractMessageHandler::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAbstractMessageHandler::tr (arg1, arg2, arg3));
}


// static QString QAbstractMessageHandler::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAbstractMessageHandler::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAbstractMessageHandler () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("message", "@brief Method void QAbstractMessageHandler::message(QtMsgType type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)\n", false, &_init_f_message_7592, &_call_f_message_7592);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAbstractMessageHandler::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAbstractMessageHandler::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAbstractMessageHandler> decl_QAbstractMessageHandler (qtdecl_QObject (), "QtXmlPatterns", "QAbstractMessageHandler_Native",
  methods_QAbstractMessageHandler (),
  "@hide\n@alias QAbstractMessageHandler");

GSI_QTXMLPATTERNS_PUBLIC gsi::Class<QAbstractMessageHandler> &qtdecl_QAbstractMessageHandler () { return decl_QAbstractMessageHandler; }

}


class QAbstractMessageHandler_Adaptor : public QAbstractMessageHandler, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractMessageHandler_Adaptor();

  //  [adaptor ctor] QAbstractMessageHandler::QAbstractMessageHandler(QObject *parent)
  QAbstractMessageHandler_Adaptor() : QAbstractMessageHandler()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAbstractMessageHandler::QAbstractMessageHandler(QObject *parent)
  QAbstractMessageHandler_Adaptor(QObject *parent) : QAbstractMessageHandler(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAbstractMessageHandler::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAbstractMessageHandler_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAbstractMessageHandler::isSignalConnected(signal);
  }

  //  [expose] int QAbstractMessageHandler::receivers(const char *signal)
  int fp_QAbstractMessageHandler_receivers_c1731 (const char *signal) const {
    return QAbstractMessageHandler::receivers(signal);
  }

  //  [expose] QObject *QAbstractMessageHandler::sender()
  QObject * fp_QAbstractMessageHandler_sender_c0 () const {
    return QAbstractMessageHandler::sender();
  }

  //  [expose] int QAbstractMessageHandler::senderSignalIndex()
  int fp_QAbstractMessageHandler_senderSignalIndex_c0 () const {
    return QAbstractMessageHandler::senderSignalIndex();
  }

  //  [adaptor impl] bool QAbstractMessageHandler::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAbstractMessageHandler::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAbstractMessageHandler_Adaptor, bool, QEvent *>(&QAbstractMessageHandler_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAbstractMessageHandler::event(arg1);
    }
  }

  //  [adaptor impl] bool QAbstractMessageHandler::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAbstractMessageHandler::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAbstractMessageHandler_Adaptor, bool, QObject *, QEvent *>(&QAbstractMessageHandler_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAbstractMessageHandler::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QAbstractMessageHandler::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAbstractMessageHandler::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAbstractMessageHandler_Adaptor, QChildEvent *>(&QAbstractMessageHandler_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAbstractMessageHandler::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractMessageHandler::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAbstractMessageHandler::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAbstractMessageHandler_Adaptor, QEvent *>(&QAbstractMessageHandler_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAbstractMessageHandler::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractMessageHandler::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAbstractMessageHandler::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAbstractMessageHandler_Adaptor, const QMetaMethod &>(&QAbstractMessageHandler_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAbstractMessageHandler::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAbstractMessageHandler::handleMessage(QtMsgType type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)
  void cbs_handleMessage_7592_0(const qt_gsi::Converter<QtMsgType>::target_type & type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)
  {
    __SUPPRESS_UNUSED_WARNING (type);
    __SUPPRESS_UNUSED_WARNING (description);
    __SUPPRESS_UNUSED_WARNING (identifier);
    __SUPPRESS_UNUSED_WARNING (sourceLocation);
    throw qt_gsi::AbstractMethodCalledException("handleMessage");
  }

  virtual void handleMessage(QtMsgType type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)
  {
    if (cb_handleMessage_7592_0.can_issue()) {
      cb_handleMessage_7592_0.issue<QAbstractMessageHandler_Adaptor, const qt_gsi::Converter<QtMsgType>::target_type &, const QString &, const QUrl &, const QSourceLocation &>(&QAbstractMessageHandler_Adaptor::cbs_handleMessage_7592_0, qt_gsi::CppToQtAdaptor<QtMsgType>(type), description, identifier, sourceLocation);
    } else {
      throw qt_gsi::AbstractMethodCalledException("handleMessage");
    }
  }

  //  [adaptor impl] void QAbstractMessageHandler::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAbstractMessageHandler::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAbstractMessageHandler_Adaptor, QTimerEvent *>(&QAbstractMessageHandler_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAbstractMessageHandler::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_handleMessage_7592_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAbstractMessageHandler_Adaptor::~QAbstractMessageHandler_Adaptor() { }

//  Constructor QAbstractMessageHandler::QAbstractMessageHandler(QObject *parent) (adaptor class)

static void _init_ctor_QAbstractMessageHandler_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QAbstractMessageHandler_Adaptor> ();
}

static void _call_ctor_QAbstractMessageHandler_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QAbstractMessageHandler_Adaptor *> (new QAbstractMessageHandler_Adaptor (arg1));
}


// void QAbstractMessageHandler::childEvent(QChildEvent *)

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
  ((QAbstractMessageHandler_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QAbstractMessageHandler::customEvent(QEvent *)

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
  ((QAbstractMessageHandler_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAbstractMessageHandler::disconnectNotify(const QMetaMethod &signal)

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
  ((QAbstractMessageHandler_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAbstractMessageHandler::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QAbstractMessageHandler_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAbstractMessageHandler::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QAbstractMessageHandler_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// void QAbstractMessageHandler::handleMessage(QtMsgType type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)

static void _init_cbs_handleMessage_7592_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QtMsgType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("description");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("identifier");
  decl->add_arg<const QUrl & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("sourceLocation");
  decl->add_arg<const QSourceLocation & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_cbs_handleMessage_7592_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QtMsgType>::target_type & arg1 = args.read<const qt_gsi::Converter<QtMsgType>::target_type & > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  const QUrl &arg3 = args.read<const QUrl & > (heap);
  const QSourceLocation &arg4 = args.read<const QSourceLocation & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractMessageHandler_Adaptor *)cls)->cbs_handleMessage_7592_0 (arg1, arg2, arg3, arg4);
}

static void _set_callback_cbs_handleMessage_7592_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_handleMessage_7592_0 = cb;
}


// exposed bool QAbstractMessageHandler::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAbstractMessageHandler_Adaptor *)cls)->fp_QAbstractMessageHandler_isSignalConnected_c2394 (arg1));
}


// exposed int QAbstractMessageHandler::receivers(const char *signal)

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
  ret.write<int > ((int)((QAbstractMessageHandler_Adaptor *)cls)->fp_QAbstractMessageHandler_receivers_c1731 (arg1));
}


// exposed QObject *QAbstractMessageHandler::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAbstractMessageHandler_Adaptor *)cls)->fp_QAbstractMessageHandler_sender_c0 ());
}


// exposed int QAbstractMessageHandler::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAbstractMessageHandler_Adaptor *)cls)->fp_QAbstractMessageHandler_senderSignalIndex_c0 ());
}


// void QAbstractMessageHandler::timerEvent(QTimerEvent *)

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
  ((QAbstractMessageHandler_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractMessageHandler_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractMessageHandler> &qtdecl_QAbstractMessageHandler ();

static gsi::Methods methods_QAbstractMessageHandler_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractMessageHandler::QAbstractMessageHandler(QObject *parent)\nThis method creates an object of class QAbstractMessageHandler.", &_init_ctor_QAbstractMessageHandler_Adaptor_1302, &_call_ctor_QAbstractMessageHandler_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAbstractMessageHandler::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAbstractMessageHandler::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAbstractMessageHandler::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAbstractMessageHandler::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAbstractMessageHandler::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*handleMessage", "@brief Virtual method void QAbstractMessageHandler::handleMessage(QtMsgType type, const QString &description, const QUrl &identifier, const QSourceLocation &sourceLocation)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_handleMessage_7592_0, &_call_cbs_handleMessage_7592_0);
  methods += new qt_gsi::GenericMethod ("*handleMessage", "@hide", false, &_init_cbs_handleMessage_7592_0, &_call_cbs_handleMessage_7592_0, &_set_callback_cbs_handleMessage_7592_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAbstractMessageHandler::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAbstractMessageHandler::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAbstractMessageHandler::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAbstractMessageHandler::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAbstractMessageHandler::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAbstractMessageHandler_Adaptor> decl_QAbstractMessageHandler_Adaptor (qtdecl_QAbstractMessageHandler (), "QtXmlPatterns", "QAbstractMessageHandler",
  methods_QAbstractMessageHandler_Adaptor (),
  "@qt\n@brief Binding of QAbstractMessageHandler");

}

