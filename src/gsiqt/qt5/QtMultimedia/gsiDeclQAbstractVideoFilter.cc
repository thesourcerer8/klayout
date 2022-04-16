
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
*  @file gsiDeclQAbstractVideoFilter.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAbstractVideoFilter>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QVideoFilterRunnable>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAbstractVideoFilter

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QAbstractVideoFilter::staticMetaObject);
}


// void QAbstractVideoFilter::activeChanged()


static void _init_f_activeChanged_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_activeChanged_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractVideoFilter *)cls)->activeChanged ();
}


// QVideoFilterRunnable *QAbstractVideoFilter::createFilterRunnable()


static void _init_f_createFilterRunnable_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVideoFilterRunnable * > ();
}

static void _call_f_createFilterRunnable_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFilterRunnable * > ((QVideoFilterRunnable *)((QAbstractVideoFilter *)cls)->createFilterRunnable ());
}


// bool QAbstractVideoFilter::isActive()


static void _init_f_isActive_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isActive_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QAbstractVideoFilter *)cls)->isActive ());
}


// void QAbstractVideoFilter::setActive(bool v)


static void _init_f_setActive_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("v");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setActive_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAbstractVideoFilter *)cls)->setActive (arg1);
}


// static QString QAbstractVideoFilter::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAbstractVideoFilter::tr (arg1, arg2, arg3));
}


// static QString QAbstractVideoFilter::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QAbstractVideoFilter::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QAbstractVideoFilter () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("activeChanged", "@brief Method void QAbstractVideoFilter::activeChanged()\n", false, &_init_f_activeChanged_0, &_call_f_activeChanged_0);
  methods += new qt_gsi::GenericMethod ("createFilterRunnable", "@brief Method QVideoFilterRunnable *QAbstractVideoFilter::createFilterRunnable()\n", false, &_init_f_createFilterRunnable_0, &_call_f_createFilterRunnable_0);
  methods += new qt_gsi::GenericMethod ("isActive?|:active", "@brief Method bool QAbstractVideoFilter::isActive()\n", true, &_init_f_isActive_c0, &_call_f_isActive_c0);
  methods += new qt_gsi::GenericMethod ("setActive|active=", "@brief Method void QAbstractVideoFilter::setActive(bool v)\n", false, &_init_f_setActive_864, &_call_f_setActive_864);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QAbstractVideoFilter::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QAbstractVideoFilter::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QAbstractVideoFilter> decl_QAbstractVideoFilter (qtdecl_QObject (), "QtMultimedia", "QAbstractVideoFilter_Native",
  methods_QAbstractVideoFilter (),
  "@hide\n@alias QAbstractVideoFilter");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QAbstractVideoFilter> &qtdecl_QAbstractVideoFilter () { return decl_QAbstractVideoFilter; }

}


class QAbstractVideoFilter_Adaptor : public QAbstractVideoFilter, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAbstractVideoFilter_Adaptor();

  //  [adaptor ctor] QAbstractVideoFilter::QAbstractVideoFilter(QObject *parent)
  QAbstractVideoFilter_Adaptor() : QAbstractVideoFilter()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAbstractVideoFilter::QAbstractVideoFilter(QObject *parent)
  QAbstractVideoFilter_Adaptor(QObject *parent) : QAbstractVideoFilter(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QAbstractVideoFilter::isSignalConnected(const QMetaMethod &signal)
  bool fp_QAbstractVideoFilter_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QAbstractVideoFilter::isSignalConnected(signal);
  }

  //  [expose] int QAbstractVideoFilter::receivers(const char *signal)
  int fp_QAbstractVideoFilter_receivers_c1731 (const char *signal) const {
    return QAbstractVideoFilter::receivers(signal);
  }

  //  [expose] QObject *QAbstractVideoFilter::sender()
  QObject * fp_QAbstractVideoFilter_sender_c0 () const {
    return QAbstractVideoFilter::sender();
  }

  //  [expose] int QAbstractVideoFilter::senderSignalIndex()
  int fp_QAbstractVideoFilter_senderSignalIndex_c0 () const {
    return QAbstractVideoFilter::senderSignalIndex();
  }

  //  [adaptor impl] QVideoFilterRunnable *QAbstractVideoFilter::createFilterRunnable()
  QVideoFilterRunnable * cbs_createFilterRunnable_0_0()
  {
    throw qt_gsi::AbstractMethodCalledException("createFilterRunnable");
  }

  virtual QVideoFilterRunnable * createFilterRunnable()
  {
    if (cb_createFilterRunnable_0_0.can_issue()) {
      return cb_createFilterRunnable_0_0.issue<QAbstractVideoFilter_Adaptor, QVideoFilterRunnable *>(&QAbstractVideoFilter_Adaptor::cbs_createFilterRunnable_0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("createFilterRunnable");
    }
  }

  //  [adaptor impl] bool QAbstractVideoFilter::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QAbstractVideoFilter::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QAbstractVideoFilter_Adaptor, bool, QEvent *>(&QAbstractVideoFilter_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QAbstractVideoFilter::event(arg1);
    }
  }

  //  [adaptor impl] bool QAbstractVideoFilter::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QAbstractVideoFilter::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QAbstractVideoFilter_Adaptor, bool, QObject *, QEvent *>(&QAbstractVideoFilter_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QAbstractVideoFilter::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] void QAbstractVideoFilter::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QAbstractVideoFilter::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QAbstractVideoFilter_Adaptor, QChildEvent *>(&QAbstractVideoFilter_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QAbstractVideoFilter::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractVideoFilter::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QAbstractVideoFilter::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QAbstractVideoFilter_Adaptor, QEvent *>(&QAbstractVideoFilter_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QAbstractVideoFilter::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QAbstractVideoFilter::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QAbstractVideoFilter::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QAbstractVideoFilter_Adaptor, const QMetaMethod &>(&QAbstractVideoFilter_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QAbstractVideoFilter::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QAbstractVideoFilter::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QAbstractVideoFilter::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QAbstractVideoFilter_Adaptor, QTimerEvent *>(&QAbstractVideoFilter_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QAbstractVideoFilter::timerEvent(arg1);
    }
  }

  gsi::Callback cb_createFilterRunnable_0_0;
  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QAbstractVideoFilter_Adaptor::~QAbstractVideoFilter_Adaptor() { }

//  Constructor QAbstractVideoFilter::QAbstractVideoFilter(QObject *parent) (adaptor class)

static void _init_ctor_QAbstractVideoFilter_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QAbstractVideoFilter_Adaptor> ();
}

static void _call_ctor_QAbstractVideoFilter_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (0, heap);
  ret.write<QAbstractVideoFilter_Adaptor *> (new QAbstractVideoFilter_Adaptor (arg1));
}


// void QAbstractVideoFilter::childEvent(QChildEvent *)

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
  ((QAbstractVideoFilter_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// QVideoFilterRunnable *QAbstractVideoFilter::createFilterRunnable()

static void _init_cbs_createFilterRunnable_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVideoFilterRunnable * > ();
}

static void _call_cbs_createFilterRunnable_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVideoFilterRunnable * > ((QVideoFilterRunnable *)((QAbstractVideoFilter_Adaptor *)cls)->cbs_createFilterRunnable_0_0 ());
}

static void _set_callback_cbs_createFilterRunnable_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_createFilterRunnable_0_0 = cb;
}


// void QAbstractVideoFilter::customEvent(QEvent *)

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
  ((QAbstractVideoFilter_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QAbstractVideoFilter::disconnectNotify(const QMetaMethod &signal)

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
  ((QAbstractVideoFilter_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QAbstractVideoFilter::event(QEvent *)

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
  ret.write<bool > ((bool)((QAbstractVideoFilter_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QAbstractVideoFilter::eventFilter(QObject *, QEvent *)

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
  ret.write<bool > ((bool)((QAbstractVideoFilter_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QAbstractVideoFilter::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QAbstractVideoFilter_Adaptor *)cls)->fp_QAbstractVideoFilter_isSignalConnected_c2394 (arg1));
}


// exposed int QAbstractVideoFilter::receivers(const char *signal)

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
  ret.write<int > ((int)((QAbstractVideoFilter_Adaptor *)cls)->fp_QAbstractVideoFilter_receivers_c1731 (arg1));
}


// exposed QObject *QAbstractVideoFilter::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QAbstractVideoFilter_Adaptor *)cls)->fp_QAbstractVideoFilter_sender_c0 ());
}


// exposed int QAbstractVideoFilter::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QAbstractVideoFilter_Adaptor *)cls)->fp_QAbstractVideoFilter_senderSignalIndex_c0 ());
}


// void QAbstractVideoFilter::timerEvent(QTimerEvent *)

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
  ((QAbstractVideoFilter_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QAbstractVideoFilter_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QAbstractVideoFilter> &qtdecl_QAbstractVideoFilter ();

static gsi::Methods methods_QAbstractVideoFilter_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAbstractVideoFilter::QAbstractVideoFilter(QObject *parent)\nThis method creates an object of class QAbstractVideoFilter.", &_init_ctor_QAbstractVideoFilter_Adaptor_1302, &_call_ctor_QAbstractVideoFilter_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QAbstractVideoFilter::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("createFilterRunnable", "@brief Virtual method QVideoFilterRunnable *QAbstractVideoFilter::createFilterRunnable()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_createFilterRunnable_0_0, &_call_cbs_createFilterRunnable_0_0);
  methods += new qt_gsi::GenericMethod ("createFilterRunnable", "@hide", false, &_init_cbs_createFilterRunnable_0_0, &_call_cbs_createFilterRunnable_0_0, &_set_callback_cbs_createFilterRunnable_0_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QAbstractVideoFilter::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QAbstractVideoFilter::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QAbstractVideoFilter::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QAbstractVideoFilter::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QAbstractVideoFilter::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QAbstractVideoFilter::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QAbstractVideoFilter::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QAbstractVideoFilter::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QAbstractVideoFilter::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QAbstractVideoFilter_Adaptor> decl_QAbstractVideoFilter_Adaptor (qtdecl_QAbstractVideoFilter (), "QtMultimedia", "QAbstractVideoFilter",
  methods_QAbstractVideoFilter_Adaptor (),
  "@qt\n@brief Binding of QAbstractVideoFilter");

}

