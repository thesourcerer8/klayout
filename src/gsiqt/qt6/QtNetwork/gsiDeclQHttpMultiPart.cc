
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQHttpMultiPart.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHttpMultiPart>
#include <QChildEvent>
#include <QEvent>
#include <QHttpPart>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHttpMultiPart

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QHttpMultiPart::staticMetaObject);
}


// void QHttpMultiPart::append(const QHttpPart &httpPart)


static void _init_f_append_2217 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("httpPart");
  decl->add_arg<const QHttpPart & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_append_2217 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHttpPart &arg1 = gsi::arg_reader<const QHttpPart & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpMultiPart *)cls)->append (arg1);
}


// QByteArray QHttpMultiPart::boundary()


static void _init_f_boundary_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_boundary_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QHttpMultiPart *)cls)->boundary ());
}


// void QHttpMultiPart::setBoundary(const QByteArray &boundary)


static void _init_f_setBoundary_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("boundary");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBoundary_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpMultiPart *)cls)->setBoundary (arg1);
}


// void QHttpMultiPart::setContentType(QHttpMultiPart::ContentType contentType)


static void _init_f_setContentType_3128 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("contentType");
  decl->add_arg<const qt_gsi::Converter<QHttpMultiPart::ContentType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setContentType_3128 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHttpMultiPart::ContentType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHttpMultiPart::ContentType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpMultiPart *)cls)->setContentType (qt_gsi::QtToCppAdaptor<QHttpMultiPart::ContentType>(arg1).cref());
}


// static QString QHttpMultiPart::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QHttpMultiPart::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QHttpMultiPart () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("append", "@brief Method void QHttpMultiPart::append(const QHttpPart &httpPart)\n", false, &_init_f_append_2217, &_call_f_append_2217);
  methods += new qt_gsi::GenericMethod (":boundary", "@brief Method QByteArray QHttpMultiPart::boundary()\n", true, &_init_f_boundary_c0, &_call_f_boundary_c0);
  methods += new qt_gsi::GenericMethod ("setBoundary|boundary=", "@brief Method void QHttpMultiPart::setBoundary(const QByteArray &boundary)\n", false, &_init_f_setBoundary_2309, &_call_f_setBoundary_2309);
  methods += new qt_gsi::GenericMethod ("setContentType", "@brief Method void QHttpMultiPart::setContentType(QHttpMultiPart::ContentType contentType)\n", false, &_init_f_setContentType_3128, &_call_f_setContentType_3128);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QHttpMultiPart::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QHttpMultiPart::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QHttpMultiPart::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QHttpMultiPart> decl_QHttpMultiPart (qtdecl_QObject (), "QtNetwork", "QHttpMultiPart_Native",
  methods_QHttpMultiPart (),
  "@hide\n@alias QHttpMultiPart");

GSI_QTNETWORK_PUBLIC gsi::Class<QHttpMultiPart> &qtdecl_QHttpMultiPart () { return decl_QHttpMultiPart; }

}


class QHttpMultiPart_Adaptor : public QHttpMultiPart, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHttpMultiPart_Adaptor();

  //  [adaptor ctor] QHttpMultiPart::QHttpMultiPart(QObject *parent)
  QHttpMultiPart_Adaptor() : QHttpMultiPart()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHttpMultiPart::QHttpMultiPart(QObject *parent)
  QHttpMultiPart_Adaptor(QObject *parent) : QHttpMultiPart(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject *parent)
  QHttpMultiPart_Adaptor(QHttpMultiPart::ContentType contentType) : QHttpMultiPart(contentType)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject *parent)
  QHttpMultiPart_Adaptor(QHttpMultiPart::ContentType contentType, QObject *parent) : QHttpMultiPart(contentType, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QHttpMultiPart::isSignalConnected(const QMetaMethod &signal)
  bool fp_QHttpMultiPart_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QHttpMultiPart::isSignalConnected(signal);
  }

  //  [expose] int QHttpMultiPart::receivers(const char *signal)
  int fp_QHttpMultiPart_receivers_c1731 (const char *signal) const {
    return QHttpMultiPart::receivers(signal);
  }

  //  [expose] QObject *QHttpMultiPart::sender()
  QObject * fp_QHttpMultiPart_sender_c0 () const {
    return QHttpMultiPart::sender();
  }

  //  [expose] int QHttpMultiPart::senderSignalIndex()
  int fp_QHttpMultiPart_senderSignalIndex_c0 () const {
    return QHttpMultiPart::senderSignalIndex();
  }

  //  [emitter impl] void QHttpMultiPart::destroyed(QObject *)
  void emitter_QHttpMultiPart_destroyed_1302(QObject *arg1)
  {
    emit QHttpMultiPart::destroyed(arg1);
  }

  //  [adaptor impl] bool QHttpMultiPart::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QHttpMultiPart::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QHttpMultiPart_Adaptor, bool, QEvent *>(&QHttpMultiPart_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QHttpMultiPart::event(_event);
    }
  }

  //  [adaptor impl] bool QHttpMultiPart::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QHttpMultiPart::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QHttpMultiPart_Adaptor, bool, QObject *, QEvent *>(&QHttpMultiPart_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QHttpMultiPart::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QHttpMultiPart::objectNameChanged(const QString &objectName)
  void emitter_QHttpMultiPart_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QHttpMultiPart::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QHttpMultiPart::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QHttpMultiPart::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QHttpMultiPart_Adaptor, QChildEvent *>(&QHttpMultiPart_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QHttpMultiPart::childEvent(event);
    }
  }

  //  [adaptor impl] void QHttpMultiPart::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QHttpMultiPart::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QHttpMultiPart_Adaptor, QEvent *>(&QHttpMultiPart_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QHttpMultiPart::customEvent(event);
    }
  }

  //  [adaptor impl] void QHttpMultiPart::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QHttpMultiPart::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QHttpMultiPart_Adaptor, const QMetaMethod &>(&QHttpMultiPart_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QHttpMultiPart::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QHttpMultiPart::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QHttpMultiPart::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QHttpMultiPart_Adaptor, QTimerEvent *>(&QHttpMultiPart_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QHttpMultiPart::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QHttpMultiPart_Adaptor::~QHttpMultiPart_Adaptor() { }

//  Constructor QHttpMultiPart::QHttpMultiPart(QObject *parent) (adaptor class)

static void _init_ctor_QHttpMultiPart_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QHttpMultiPart_Adaptor> ();
}

static void _call_ctor_QHttpMultiPart_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QHttpMultiPart_Adaptor *> (new QHttpMultiPart_Adaptor (arg1));
}


//  Constructor QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject *parent) (adaptor class)

static void _init_ctor_QHttpMultiPart_Adaptor_4322 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("contentType");
  decl->add_arg<const qt_gsi::Converter<QHttpMultiPart::ContentType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QHttpMultiPart_Adaptor> ();
}

static void _call_ctor_QHttpMultiPart_Adaptor_4322 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QHttpMultiPart::ContentType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QHttpMultiPart::ContentType>::target_type & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QHttpMultiPart_Adaptor *> (new QHttpMultiPart_Adaptor (qt_gsi::QtToCppAdaptor<QHttpMultiPart::ContentType>(arg1).cref(), arg2));
}


// void QHttpMultiPart::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpMultiPart_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QHttpMultiPart_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QHttpMultiPart::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpMultiPart_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QHttpMultiPart_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QHttpMultiPart::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QHttpMultiPart_Adaptor *)cls)->emitter_QHttpMultiPart_destroyed_1302 (arg1);
}


// void QHttpMultiPart::disconnectNotify(const QMetaMethod &signal)

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
  ((QHttpMultiPart_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QHttpMultiPart_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QHttpMultiPart::event(QEvent *event)

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
  ret.write<bool > ((bool)((QHttpMultiPart_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QHttpMultiPart_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QHttpMultiPart::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QHttpMultiPart_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QHttpMultiPart_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QHttpMultiPart::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QHttpMultiPart_Adaptor *)cls)->fp_QHttpMultiPart_isSignalConnected_c2394 (arg1));
}


// emitter void QHttpMultiPart::objectNameChanged(const QString &objectName)

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
  ((QHttpMultiPart_Adaptor *)cls)->emitter_QHttpMultiPart_objectNameChanged_4567 (arg1);
}


// exposed int QHttpMultiPart::receivers(const char *signal)

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
  ret.write<int > ((int)((QHttpMultiPart_Adaptor *)cls)->fp_QHttpMultiPart_receivers_c1731 (arg1));
}


// exposed QObject *QHttpMultiPart::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QHttpMultiPart_Adaptor *)cls)->fp_QHttpMultiPart_sender_c0 ());
}


// exposed int QHttpMultiPart::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QHttpMultiPart_Adaptor *)cls)->fp_QHttpMultiPart_senderSignalIndex_c0 ());
}


// void QHttpMultiPart::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QHttpMultiPart_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QHttpMultiPart_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QHttpMultiPart> &qtdecl_QHttpMultiPart ();

static gsi::Methods methods_QHttpMultiPart_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHttpMultiPart::QHttpMultiPart(QObject *parent)\nThis method creates an object of class QHttpMultiPart.", &_init_ctor_QHttpMultiPart_Adaptor_1302, &_call_ctor_QHttpMultiPart_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHttpMultiPart::QHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject *parent)\nThis method creates an object of class QHttpMultiPart.", &_init_ctor_QHttpMultiPart_Adaptor_4322, &_call_ctor_QHttpMultiPart_Adaptor_4322);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QHttpMultiPart::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QHttpMultiPart::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QHttpMultiPart::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QHttpMultiPart::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QHttpMultiPart::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QHttpMultiPart::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QHttpMultiPart::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QHttpMultiPart::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QHttpMultiPart::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QHttpMultiPart::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QHttpMultiPart::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QHttpMultiPart::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QHttpMultiPart_Adaptor> decl_QHttpMultiPart_Adaptor (qtdecl_QHttpMultiPart (), "QtNetwork", "QHttpMultiPart",
  methods_QHttpMultiPart_Adaptor (),
  "@qt\n@brief Binding of QHttpMultiPart");

}


//  Implementation of the enum wrapper class for QHttpMultiPart::ContentType
namespace qt_gsi
{

static gsi::Enum<QHttpMultiPart::ContentType> decl_QHttpMultiPart_ContentType_Enum ("QtNetwork", "QHttpMultiPart_ContentType",
    gsi::enum_const ("MixedType", QHttpMultiPart::MixedType, "@brief Enum constant QHttpMultiPart::MixedType") +
    gsi::enum_const ("RelatedType", QHttpMultiPart::RelatedType, "@brief Enum constant QHttpMultiPart::RelatedType") +
    gsi::enum_const ("FormDataType", QHttpMultiPart::FormDataType, "@brief Enum constant QHttpMultiPart::FormDataType") +
    gsi::enum_const ("AlternativeType", QHttpMultiPart::AlternativeType, "@brief Enum constant QHttpMultiPart::AlternativeType"),
  "@qt\n@brief This class represents the QHttpMultiPart::ContentType enum");

static gsi::QFlagsClass<QHttpMultiPart::ContentType > decl_QHttpMultiPart_ContentType_Enums ("QtNetwork", "QHttpMultiPart_QFlags_ContentType",
  "@qt\n@brief This class represents the QFlags<QHttpMultiPart::ContentType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QHttpMultiPart> inject_QHttpMultiPart_ContentType_Enum_in_parent (decl_QHttpMultiPart_ContentType_Enum.defs ());
static gsi::ClassExt<QHttpMultiPart> decl_QHttpMultiPart_ContentType_Enum_as_child (decl_QHttpMultiPart_ContentType_Enum, "ContentType");
static gsi::ClassExt<QHttpMultiPart> decl_QHttpMultiPart_ContentType_Enums_as_child (decl_QHttpMultiPart_ContentType_Enums, "QFlags_ContentType");

}

