
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
*  @file gsiDeclQMediaStreamsControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaStreamsControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaStreamsControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QMediaStreamsControl::staticMetaObject);
}


// void QMediaStreamsControl::activeStreamsChanged()


static void _init_f_activeStreamsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_activeStreamsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaStreamsControl *)cls)->activeStreamsChanged ();
}


// bool QMediaStreamsControl::isActive(int streamNumber)


static void _init_f_isActive_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isActive_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)((QMediaStreamsControl *)cls)->isActive (arg1));
}


// QVariant QMediaStreamsControl::metaData(int streamNumber, const QString &key)


static void _init_f_metaData_2684 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("key");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_f_metaData_2684 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QVariant > ((QVariant)((QMediaStreamsControl *)cls)->metaData (arg1, arg2));
}


// void QMediaStreamsControl::setActive(int streamNumber, bool state)


static void _init_f_setActive_1523 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_setActive_1523 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  bool arg2 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaStreamsControl *)cls)->setActive (arg1, arg2);
}


// int QMediaStreamsControl::streamCount()


static void _init_f_streamCount_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_streamCount_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaStreamsControl *)cls)->streamCount ());
}


// QMediaStreamsControl::StreamType QMediaStreamsControl::streamType(int streamNumber)


static void _init_f_streamType_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  decl->set_return<qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type > ();
}

static void _call_f_streamType_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type > ((qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type)qt_gsi::CppToQtAdaptor<QMediaStreamsControl::StreamType>(((QMediaStreamsControl *)cls)->streamType (arg1)));
}


// void QMediaStreamsControl::streamsChanged()


static void _init_f_streamsChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_streamsChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaStreamsControl *)cls)->streamsChanged ();
}


// static QString QMediaStreamsControl::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaStreamsControl::tr (arg1, arg2, arg3));
}


// static QString QMediaStreamsControl::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QMediaStreamsControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QMediaStreamsControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("activeStreamsChanged", "@brief Method void QMediaStreamsControl::activeStreamsChanged()\n", false, &_init_f_activeStreamsChanged_0, &_call_f_activeStreamsChanged_0);
  methods += new qt_gsi::GenericMethod ("isActive?", "@brief Method bool QMediaStreamsControl::isActive(int streamNumber)\n", false, &_init_f_isActive_767, &_call_f_isActive_767);
  methods += new qt_gsi::GenericMethod ("metaData", "@brief Method QVariant QMediaStreamsControl::metaData(int streamNumber, const QString &key)\n", false, &_init_f_metaData_2684, &_call_f_metaData_2684);
  methods += new qt_gsi::GenericMethod ("setActive", "@brief Method void QMediaStreamsControl::setActive(int streamNumber, bool state)\n", false, &_init_f_setActive_1523, &_call_f_setActive_1523);
  methods += new qt_gsi::GenericMethod ("streamCount", "@brief Method int QMediaStreamsControl::streamCount()\n", false, &_init_f_streamCount_0, &_call_f_streamCount_0);
  methods += new qt_gsi::GenericMethod ("streamType", "@brief Method QMediaStreamsControl::StreamType QMediaStreamsControl::streamType(int streamNumber)\n", false, &_init_f_streamType_767, &_call_f_streamType_767);
  methods += new qt_gsi::GenericMethod ("streamsChanged", "@brief Method void QMediaStreamsControl::streamsChanged()\n", false, &_init_f_streamsChanged_0, &_call_f_streamsChanged_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QMediaStreamsControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QMediaStreamsControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QMediaStreamsControl> decl_QMediaStreamsControl (qtdecl_QMediaControl (), "QtMultimedia", "QMediaStreamsControl_Native",
  methods_QMediaStreamsControl (),
  "@hide\n@alias QMediaStreamsControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaStreamsControl> &qtdecl_QMediaStreamsControl () { return decl_QMediaStreamsControl; }

}


class QMediaStreamsControl_Adaptor : public QMediaStreamsControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaStreamsControl_Adaptor();

  //  [adaptor ctor] QMediaStreamsControl::QMediaStreamsControl()
  QMediaStreamsControl_Adaptor() : QMediaStreamsControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QMediaStreamsControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QMediaStreamsControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QMediaStreamsControl::isSignalConnected(signal);
  }

  //  [expose] int QMediaStreamsControl::receivers(const char *signal)
  int fp_QMediaStreamsControl_receivers_c1731 (const char *signal) const {
    return QMediaStreamsControl::receivers(signal);
  }

  //  [expose] QObject *QMediaStreamsControl::sender()
  QObject * fp_QMediaStreamsControl_sender_c0 () const {
    return QMediaStreamsControl::sender();
  }

  //  [expose] int QMediaStreamsControl::senderSignalIndex()
  int fp_QMediaStreamsControl_senderSignalIndex_c0 () const {
    return QMediaStreamsControl::senderSignalIndex();
  }

  //  [adaptor impl] bool QMediaStreamsControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QMediaStreamsControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QMediaStreamsControl_Adaptor, bool, QEvent *>(&QMediaStreamsControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QMediaStreamsControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QMediaStreamsControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QMediaStreamsControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QMediaStreamsControl_Adaptor, bool, QObject *, QEvent *>(&QMediaStreamsControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QMediaStreamsControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] bool QMediaStreamsControl::isActive(int streamNumber)
  bool cbs_isActive_767_0(int streamNumber)
  {
    __SUPPRESS_UNUSED_WARNING (streamNumber);
    throw qt_gsi::AbstractMethodCalledException("isActive");
  }

  virtual bool isActive(int streamNumber)
  {
    if (cb_isActive_767_0.can_issue()) {
      return cb_isActive_767_0.issue<QMediaStreamsControl_Adaptor, bool, int>(&QMediaStreamsControl_Adaptor::cbs_isActive_767_0, streamNumber);
    } else {
      throw qt_gsi::AbstractMethodCalledException("isActive");
    }
  }

  //  [adaptor impl] QVariant QMediaStreamsControl::metaData(int streamNumber, const QString &key)
  QVariant cbs_metaData_2684_0(int streamNumber, const QString &key)
  {
    __SUPPRESS_UNUSED_WARNING (streamNumber);
    __SUPPRESS_UNUSED_WARNING (key);
    throw qt_gsi::AbstractMethodCalledException("metaData");
  }

  virtual QVariant metaData(int streamNumber, const QString &key)
  {
    if (cb_metaData_2684_0.can_issue()) {
      return cb_metaData_2684_0.issue<QMediaStreamsControl_Adaptor, QVariant, int, const QString &>(&QMediaStreamsControl_Adaptor::cbs_metaData_2684_0, streamNumber, key);
    } else {
      throw qt_gsi::AbstractMethodCalledException("metaData");
    }
  }

  //  [adaptor impl] void QMediaStreamsControl::setActive(int streamNumber, bool state)
  void cbs_setActive_1523_0(int streamNumber, bool state)
  {
    __SUPPRESS_UNUSED_WARNING (streamNumber);
    __SUPPRESS_UNUSED_WARNING (state);
    throw qt_gsi::AbstractMethodCalledException("setActive");
  }

  virtual void setActive(int streamNumber, bool state)
  {
    if (cb_setActive_1523_0.can_issue()) {
      cb_setActive_1523_0.issue<QMediaStreamsControl_Adaptor, int, bool>(&QMediaStreamsControl_Adaptor::cbs_setActive_1523_0, streamNumber, state);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setActive");
    }
  }

  //  [adaptor impl] int QMediaStreamsControl::streamCount()
  int cbs_streamCount_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("streamCount");
  }

  virtual int streamCount()
  {
    if (cb_streamCount_0_0.can_issue()) {
      return cb_streamCount_0_0.issue<QMediaStreamsControl_Adaptor, int>(&QMediaStreamsControl_Adaptor::cbs_streamCount_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("streamCount");
    }
  }

  //  [adaptor impl] QMediaStreamsControl::StreamType QMediaStreamsControl::streamType(int streamNumber)
  qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type cbs_streamType_767_0(int streamNumber)
  {
    __SUPPRESS_UNUSED_WARNING (streamNumber);
    throw qt_gsi::AbstractMethodCalledException("streamType");
  }

  virtual QMediaStreamsControl::StreamType streamType(int streamNumber)
  {
    if (cb_streamType_767_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QMediaStreamsControl::StreamType>(cb_streamType_767_0.issue<QMediaStreamsControl_Adaptor, qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type, int>(&QMediaStreamsControl_Adaptor::cbs_streamType_767_0, streamNumber)).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("streamType");
    }
  }

  //  [adaptor impl] void QMediaStreamsControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QMediaStreamsControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QMediaStreamsControl_Adaptor, QChildEvent *>(&QMediaStreamsControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QMediaStreamsControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaStreamsControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QMediaStreamsControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QMediaStreamsControl_Adaptor, QEvent *>(&QMediaStreamsControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QMediaStreamsControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QMediaStreamsControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QMediaStreamsControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QMediaStreamsControl_Adaptor, const QMetaMethod &>(&QMediaStreamsControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QMediaStreamsControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QMediaStreamsControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QMediaStreamsControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QMediaStreamsControl_Adaptor, QTimerEvent *>(&QMediaStreamsControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QMediaStreamsControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_isActive_767_0;
  gsi::Callback cb_metaData_2684_0;
  gsi::Callback cb_setActive_1523_0;
  gsi::Callback cb_streamCount_0_0;
  gsi::Callback cb_streamType_767_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QMediaStreamsControl_Adaptor::~QMediaStreamsControl_Adaptor() { }

//  Constructor QMediaStreamsControl::QMediaStreamsControl() (adaptor class)

static void _init_ctor_QMediaStreamsControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaStreamsControl_Adaptor> ();
}

static void _call_ctor_QMediaStreamsControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaStreamsControl_Adaptor *> (new QMediaStreamsControl_Adaptor ());
}


// void QMediaStreamsControl::childEvent(QChildEvent *)

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
  ((QMediaStreamsControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QMediaStreamsControl::customEvent(QEvent *)

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
  ((QMediaStreamsControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QMediaStreamsControl::disconnectNotify(const QMetaMethod &signal)

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
  ((QMediaStreamsControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QMediaStreamsControl::event(QEvent *)

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
  ret.write<bool > ((bool)((QMediaStreamsControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QMediaStreamsControl::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QMediaStreamsControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// bool QMediaStreamsControl::isActive(int streamNumber)

static void _init_cbs_isActive_767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_isActive_767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QMediaStreamsControl_Adaptor *)cls)->cbs_isActive_767_0 (arg1));
}

static void _set_callback_cbs_isActive_767_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_isActive_767_0 = cb;
}


// exposed bool QMediaStreamsControl::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QMediaStreamsControl_Adaptor *)cls)->fp_QMediaStreamsControl_isSignalConnected_c2394 (arg1));
}


// QVariant QMediaStreamsControl::metaData(int streamNumber, const QString &key)

static void _init_cbs_metaData_2684_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("key");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QVariant > ();
}

static void _call_cbs_metaData_2684_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  const QString &arg2 = args.read<const QString & > (heap);
  ret.write<QVariant > ((QVariant)((QMediaStreamsControl_Adaptor *)cls)->cbs_metaData_2684_0 (arg1, arg2));
}

static void _set_callback_cbs_metaData_2684_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_metaData_2684_0 = cb;
}


// exposed int QMediaStreamsControl::receivers(const char *signal)

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
  ret.write<int > ((int)((QMediaStreamsControl_Adaptor *)cls)->fp_QMediaStreamsControl_receivers_c1731 (arg1));
}


// exposed QObject *QMediaStreamsControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QMediaStreamsControl_Adaptor *)cls)->fp_QMediaStreamsControl_sender_c0 ());
}


// exposed int QMediaStreamsControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaStreamsControl_Adaptor *)cls)->fp_QMediaStreamsControl_senderSignalIndex_c0 ());
}


// void QMediaStreamsControl::setActive(int streamNumber, bool state)

static void _init_cbs_setActive_1523_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("state");
  decl->add_arg<bool > (argspec_1);
  decl->set_return<void > ();
}

static void _call_cbs_setActive_1523_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  bool arg2 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QMediaStreamsControl_Adaptor *)cls)->cbs_setActive_1523_0 (arg1, arg2);
}

static void _set_callback_cbs_setActive_1523_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_setActive_1523_0 = cb;
}


// int QMediaStreamsControl::streamCount()

static void _init_cbs_streamCount_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_streamCount_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QMediaStreamsControl_Adaptor *)cls)->cbs_streamCount_0_0 ());
}

static void _set_callback_cbs_streamCount_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_streamCount_0_0 = cb;
}


// QMediaStreamsControl::StreamType QMediaStreamsControl::streamType(int streamNumber)

static void _init_cbs_streamType_767_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("streamNumber");
  decl->add_arg<int > (argspec_0);
  decl->set_return<qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type > ();
}

static void _call_cbs_streamType_767_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type > ((qt_gsi::Converter<QMediaStreamsControl::StreamType>::target_type)((QMediaStreamsControl_Adaptor *)cls)->cbs_streamType_767_0 (arg1));
}

static void _set_callback_cbs_streamType_767_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_streamType_767_0 = cb;
}


// void QMediaStreamsControl::timerEvent(QTimerEvent *)

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
  ((QMediaStreamsControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaStreamsControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaStreamsControl> &qtdecl_QMediaStreamsControl ();

static gsi::Methods methods_QMediaStreamsControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaStreamsControl::QMediaStreamsControl()\nThis method creates an object of class QMediaStreamsControl.", &_init_ctor_QMediaStreamsControl_Adaptor_0, &_call_ctor_QMediaStreamsControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QMediaStreamsControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QMediaStreamsControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QMediaStreamsControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QMediaStreamsControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QMediaStreamsControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("isActive", "@brief Virtual method bool QMediaStreamsControl::isActive(int streamNumber)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_isActive_767_0, &_call_cbs_isActive_767_0);
  methods += new qt_gsi::GenericMethod ("isActive", "@hide", false, &_init_cbs_isActive_767_0, &_call_cbs_isActive_767_0, &_set_callback_cbs_isActive_767_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QMediaStreamsControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("metaData", "@brief Virtual method QVariant QMediaStreamsControl::metaData(int streamNumber, const QString &key)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_metaData_2684_0, &_call_cbs_metaData_2684_0);
  methods += new qt_gsi::GenericMethod ("metaData", "@hide", false, &_init_cbs_metaData_2684_0, &_call_cbs_metaData_2684_0, &_set_callback_cbs_metaData_2684_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QMediaStreamsControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QMediaStreamsControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QMediaStreamsControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("setActive", "@brief Virtual method void QMediaStreamsControl::setActive(int streamNumber, bool state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setActive_1523_0, &_call_cbs_setActive_1523_0);
  methods += new qt_gsi::GenericMethod ("setActive", "@hide", false, &_init_cbs_setActive_1523_0, &_call_cbs_setActive_1523_0, &_set_callback_cbs_setActive_1523_0);
  methods += new qt_gsi::GenericMethod ("streamCount", "@brief Virtual method int QMediaStreamsControl::streamCount()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_streamCount_0_0, &_call_cbs_streamCount_0_0);
  methods += new qt_gsi::GenericMethod ("streamCount", "@hide", false, &_init_cbs_streamCount_0_0, &_call_cbs_streamCount_0_0, &_set_callback_cbs_streamCount_0_0);
  methods += new qt_gsi::GenericMethod ("streamType", "@brief Virtual method QMediaStreamsControl::StreamType QMediaStreamsControl::streamType(int streamNumber)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_streamType_767_0, &_call_cbs_streamType_767_0);
  methods += new qt_gsi::GenericMethod ("streamType", "@hide", false, &_init_cbs_streamType_767_0, &_call_cbs_streamType_767_0, &_set_callback_cbs_streamType_767_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QMediaStreamsControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QMediaStreamsControl_Adaptor> decl_QMediaStreamsControl_Adaptor (qtdecl_QMediaStreamsControl (), "QtMultimedia", "QMediaStreamsControl",
  methods_QMediaStreamsControl_Adaptor (),
  "@qt\n@brief Binding of QMediaStreamsControl");

}


//  Implementation of the enum wrapper class for QMediaStreamsControl::StreamType
namespace qt_gsi
{

static gsi::Enum<QMediaStreamsControl::StreamType> decl_QMediaStreamsControl_StreamType_Enum ("QtMultimedia", "QMediaStreamsControl_StreamType",
    gsi::enum_const ("UnknownStream", QMediaStreamsControl::UnknownStream, "@brief Enum constant QMediaStreamsControl::UnknownStream") +
    gsi::enum_const ("VideoStream", QMediaStreamsControl::VideoStream, "@brief Enum constant QMediaStreamsControl::VideoStream") +
    gsi::enum_const ("AudioStream", QMediaStreamsControl::AudioStream, "@brief Enum constant QMediaStreamsControl::AudioStream") +
    gsi::enum_const ("SubPictureStream", QMediaStreamsControl::SubPictureStream, "@brief Enum constant QMediaStreamsControl::SubPictureStream") +
    gsi::enum_const ("DataStream", QMediaStreamsControl::DataStream, "@brief Enum constant QMediaStreamsControl::DataStream"),
  "@qt\n@brief This class represents the QMediaStreamsControl::StreamType enum");

static gsi::QFlagsClass<QMediaStreamsControl::StreamType > decl_QMediaStreamsControl_StreamType_Enums ("QtMultimedia", "QMediaStreamsControl_QFlags_StreamType",
  "@qt\n@brief This class represents the QFlags<QMediaStreamsControl::StreamType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QMediaStreamsControl> inject_QMediaStreamsControl_StreamType_Enum_in_parent (decl_QMediaStreamsControl_StreamType_Enum.defs ());
static gsi::ClassExt<QMediaStreamsControl> decl_QMediaStreamsControl_StreamType_Enum_as_child (decl_QMediaStreamsControl_StreamType_Enum, "StreamType");
static gsi::ClassExt<QMediaStreamsControl> decl_QMediaStreamsControl_StreamType_Enums_as_child (decl_QMediaStreamsControl_StreamType_Enums, "QFlags_StreamType");

}

