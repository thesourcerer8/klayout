
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
*  @file gsiDeclQPointingDevice.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPointingDevice>
#include <QChildEvent>
#include <QEvent>
#include <QEventPoint>
#include <QInputDevice>
#include <QMetaMethod>
#include <QObject>
#include <QPointerEvent>
#include <QPointingDeviceUniqueId>
#include <QRect>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPointingDevice

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QPointingDevice::staticMetaObject);
}


// int QPointingDevice::buttonCount()


static void _init_f_buttonCount_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_buttonCount_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPointingDevice *)cls)->buttonCount ());
}


// void QPointingDevice::grabChanged(QObject *grabber, QPointingDevice::GrabTransition transition, const QPointerEvent *event, const QEventPoint &point)


static void _init_f_grabChanged_c9569 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("grabber");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("transition");
  decl->add_arg<const qt_gsi::Converter<QPointingDevice::GrabTransition>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("event");
  decl->add_arg<const QPointerEvent * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("point");
  decl->add_arg<const QEventPoint & > (argspec_3);
  decl->set_return<void > ();
}

static void _call_f_grabChanged_c9569 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const qt_gsi::Converter<QPointingDevice::GrabTransition>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QPointingDevice::GrabTransition>::target_type & >() (args, heap);
  const QPointerEvent *arg3 = gsi::arg_reader<const QPointerEvent * >() (args, heap);
  const QEventPoint &arg4 = gsi::arg_reader<const QEventPoint & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointingDevice *)cls)->grabChanged (arg1, qt_gsi::QtToCppAdaptor<QPointingDevice::GrabTransition>(arg2).cref(), arg3, arg4);
}


// int QPointingDevice::maximumPoints()


static void _init_f_maximumPoints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_maximumPoints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPointingDevice *)cls)->maximumPoints ());
}


// bool QPointingDevice::operator==(const QPointingDevice &other)


static void _init_f_operator_eq__eq__c2826 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QPointingDevice & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2826 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPointingDevice &arg1 = gsi::arg_reader<const QPointingDevice & >() (args, heap);
  ret.write<bool > ((bool)((QPointingDevice *)cls)->operator== (arg1));
}


// QPointingDevice::PointerType QPointingDevice::pointerType()


static void _init_f_pointerType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QPointingDevice::PointerType>::target_type > ();
}

static void _call_f_pointerType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QPointingDevice::PointerType>::target_type > ((qt_gsi::Converter<QPointingDevice::PointerType>::target_type)qt_gsi::CppToQtAdaptor<QPointingDevice::PointerType>(((QPointingDevice *)cls)->pointerType ()));
}


// void QPointingDevice::setCapabilities(QFlags<QInputDevice::Capability> caps)


static void _init_f_setCapabilities_3475 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("caps");
  decl->add_arg<QFlags<QInputDevice::Capability> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCapabilities_3475 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QInputDevice::Capability> arg1 = gsi::arg_reader<QFlags<QInputDevice::Capability> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointingDevice *)cls)->setCapabilities (arg1);
}


// void QPointingDevice::setMaximumTouchPoints(int c)


static void _init_f_setMaximumTouchPoints_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMaximumTouchPoints_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointingDevice *)cls)->setMaximumTouchPoints (arg1);
}


// void QPointingDevice::setType(QInputDevice::DeviceType devType)


static void _init_f_setType_2763 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("devType");
  decl->add_arg<const qt_gsi::Converter<QInputDevice::DeviceType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setType_2763 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QInputDevice::DeviceType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QInputDevice::DeviceType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPointingDevice *)cls)->setType (qt_gsi::QtToCppAdaptor<QInputDevice::DeviceType>(arg1).cref());
}


// QPointingDeviceUniqueId QPointingDevice::uniqueId()


static void _init_f_uniqueId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPointingDeviceUniqueId > ();
}

static void _call_f_uniqueId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPointingDeviceUniqueId > ((QPointingDeviceUniqueId)((QPointingDevice *)cls)->uniqueId ());
}


// static const QPointingDevice *QPointingDevice::primaryPointingDevice(const QString &seatName)


static void _init_f_primaryPointingDevice_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("seatName", true, "QString()");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<const QPointingDevice * > ();
}

static void _call_f_primaryPointingDevice_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<const QPointingDevice * > ((const QPointingDevice *)QPointingDevice::primaryPointingDevice (arg1));
}


// static QString QPointingDevice::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QPointingDevice::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QPointingDevice () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("buttonCount", "@brief Method int QPointingDevice::buttonCount()\n", true, &_init_f_buttonCount_c0, &_call_f_buttonCount_c0);
  methods += new qt_gsi::GenericMethod ("grabChanged", "@brief Method void QPointingDevice::grabChanged(QObject *grabber, QPointingDevice::GrabTransition transition, const QPointerEvent *event, const QEventPoint &point)\n", true, &_init_f_grabChanged_c9569, &_call_f_grabChanged_c9569);
  methods += new qt_gsi::GenericMethod ("maximumPoints", "@brief Method int QPointingDevice::maximumPoints()\n", true, &_init_f_maximumPoints_c0, &_call_f_maximumPoints_c0);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QPointingDevice::operator==(const QPointingDevice &other)\n", true, &_init_f_operator_eq__eq__c2826, &_call_f_operator_eq__eq__c2826);
  methods += new qt_gsi::GenericMethod ("pointerType", "@brief Method QPointingDevice::PointerType QPointingDevice::pointerType()\n", true, &_init_f_pointerType_c0, &_call_f_pointerType_c0);
  methods += new qt_gsi::GenericMethod ("setCapabilities", "@brief Method void QPointingDevice::setCapabilities(QFlags<QInputDevice::Capability> caps)\n", false, &_init_f_setCapabilities_3475, &_call_f_setCapabilities_3475);
  methods += new qt_gsi::GenericMethod ("setMaximumTouchPoints", "@brief Method void QPointingDevice::setMaximumTouchPoints(int c)\n", false, &_init_f_setMaximumTouchPoints_767, &_call_f_setMaximumTouchPoints_767);
  methods += new qt_gsi::GenericMethod ("setType", "@brief Method void QPointingDevice::setType(QInputDevice::DeviceType devType)\n", false, &_init_f_setType_2763, &_call_f_setType_2763);
  methods += new qt_gsi::GenericMethod ("uniqueId", "@brief Method QPointingDeviceUniqueId QPointingDevice::uniqueId()\n", true, &_init_f_uniqueId_c0, &_call_f_uniqueId_c0);
  methods += new qt_gsi::GenericStaticMethod ("primaryPointingDevice", "@brief Static method const QPointingDevice *QPointingDevice::primaryPointingDevice(const QString &seatName)\nThis method is static and can be called without an instance.", &_init_f_primaryPointingDevice_2025, &_call_f_primaryPointingDevice_2025);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPointingDevice::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QInputDevice> &qtdecl_QInputDevice ();

qt_gsi::QtNativeClass<QPointingDevice> decl_QPointingDevice (qtdecl_QInputDevice (), "QtGui", "QPointingDevice_Native",
  methods_QPointingDevice (),
  "@hide\n@alias QPointingDevice");

GSI_QTGUI_PUBLIC gsi::Class<QPointingDevice> &qtdecl_QPointingDevice () { return decl_QPointingDevice; }

}


class QPointingDevice_Adaptor : public QPointingDevice, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPointingDevice_Adaptor();

  //  [adaptor ctor] QPointingDevice::QPointingDevice(QObject *parent)
  QPointingDevice_Adaptor() : QPointingDevice()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointingDevice::QPointingDevice(QObject *parent)
  QPointingDevice_Adaptor(QObject *parent) : QPointingDevice(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointingDevice::QPointingDevice(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent)
  QPointingDevice_Adaptor(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointingDevice::QPointingDevice(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent)
  QPointingDevice_Adaptor(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointingDevice::QPointingDevice(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent)
  QPointingDevice_Adaptor(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPointingDevice::QPointingDevice(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent)
  QPointingDevice_Adaptor(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent) : QPointingDevice(name, systemId, devType, pType, caps, maxPoints, buttonCount, seatName, uniqueId, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QPointingDevice::isSignalConnected(const QMetaMethod &signal)
  bool fp_QPointingDevice_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QPointingDevice::isSignalConnected(signal);
  }

  //  [expose] int QPointingDevice::receivers(const char *signal)
  int fp_QPointingDevice_receivers_c1731 (const char *signal) const {
    return QPointingDevice::receivers(signal);
  }

  //  [expose] QObject *QPointingDevice::sender()
  QObject * fp_QPointingDevice_sender_c0 () const {
    return QPointingDevice::sender();
  }

  //  [expose] int QPointingDevice::senderSignalIndex()
  int fp_QPointingDevice_senderSignalIndex_c0 () const {
    return QPointingDevice::senderSignalIndex();
  }

  //  [adaptor impl] bool QPointingDevice::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QPointingDevice::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QPointingDevice_Adaptor, bool, QEvent *>(&QPointingDevice_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QPointingDevice::event(_event);
    }
  }

  //  [adaptor impl] bool QPointingDevice::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QPointingDevice::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QPointingDevice_Adaptor, bool, QObject *, QEvent *>(&QPointingDevice_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QPointingDevice::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QPointingDevice::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QPointingDevice::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QPointingDevice_Adaptor, QChildEvent *>(&QPointingDevice_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QPointingDevice::childEvent(event);
    }
  }

  //  [adaptor impl] void QPointingDevice::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QPointingDevice::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QPointingDevice_Adaptor, QEvent *>(&QPointingDevice_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QPointingDevice::customEvent(event);
    }
  }

  //  [adaptor impl] void QPointingDevice::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QPointingDevice::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QPointingDevice_Adaptor, const QMetaMethod &>(&QPointingDevice_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QPointingDevice::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QPointingDevice::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QPointingDevice::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QPointingDevice_Adaptor, QTimerEvent *>(&QPointingDevice_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QPointingDevice::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QPointingDevice_Adaptor::~QPointingDevice_Adaptor() { }

//  Constructor QPointingDevice::QPointingDevice(QObject *parent) (adaptor class)

static void _init_ctor_QPointingDevice_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QPointingDevice_Adaptor> ();
}

static void _call_ctor_QPointingDevice_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QPointingDevice_Adaptor *> (new QPointingDevice_Adaptor (arg1));
}


//  Constructor QPointingDevice::QPointingDevice(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent) (adaptor class)

static void _init_ctor_QPointingDevice_Adaptor_19111 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("systemId");
  decl->add_arg<qint64 > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("devType");
  decl->add_arg<const qt_gsi::Converter<QInputDevice::DeviceType>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("pType");
  decl->add_arg<const qt_gsi::Converter<QPointingDevice::PointerType>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("caps");
  decl->add_arg<QFlags<QInputDevice::Capability> > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("maxPoints");
  decl->add_arg<int > (argspec_5);
  static gsi::ArgSpecBase argspec_6 ("buttonCount");
  decl->add_arg<int > (argspec_6);
  static gsi::ArgSpecBase argspec_7 ("seatName", true, "QString()");
  decl->add_arg<const QString & > (argspec_7);
  static gsi::ArgSpecBase argspec_8 ("uniqueId", true, "QPointingDeviceUniqueId()");
  decl->add_arg<QPointingDeviceUniqueId > (argspec_8);
  static gsi::ArgSpecBase argspec_9 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_9);
  decl->set_return_new<QPointingDevice_Adaptor> ();
}

static void _call_ctor_QPointingDevice_Adaptor_19111 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  qint64 arg2 = gsi::arg_reader<qint64 >() (args, heap);
  const qt_gsi::Converter<QInputDevice::DeviceType>::target_type & arg3 = gsi::arg_reader<const qt_gsi::Converter<QInputDevice::DeviceType>::target_type & >() (args, heap);
  const qt_gsi::Converter<QPointingDevice::PointerType>::target_type & arg4 = gsi::arg_reader<const qt_gsi::Converter<QPointingDevice::PointerType>::target_type & >() (args, heap);
  QFlags<QInputDevice::Capability> arg5 = gsi::arg_reader<QFlags<QInputDevice::Capability> >() (args, heap);
  int arg6 = gsi::arg_reader<int >() (args, heap);
  int arg7 = gsi::arg_reader<int >() (args, heap);
  const QString &arg8 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  QPointingDeviceUniqueId arg9 = args ? gsi::arg_reader<QPointingDeviceUniqueId >() (args, heap) : gsi::arg_maker<QPointingDeviceUniqueId >() (QPointingDeviceUniqueId(), heap);
  QObject *arg10 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QPointingDevice_Adaptor *> (new QPointingDevice_Adaptor (arg1, arg2, qt_gsi::QtToCppAdaptor<QInputDevice::DeviceType>(arg3).cref(), qt_gsi::QtToCppAdaptor<QPointingDevice::PointerType>(arg4).cref(), arg5, arg6, arg7, arg8, arg9, arg10));
}


// void QPointingDevice::childEvent(QChildEvent *event)

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
  ((QPointingDevice_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointingDevice_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QPointingDevice::customEvent(QEvent *event)

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
  ((QPointingDevice_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointingDevice_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QPointingDevice::disconnectNotify(const QMetaMethod &signal)

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
  ((QPointingDevice_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointingDevice_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QPointingDevice::event(QEvent *event)

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
  ret.write<bool > ((bool)((QPointingDevice_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointingDevice_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QPointingDevice::eventFilter(QObject *watched, QEvent *event)

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
  ret.write<bool > ((bool)((QPointingDevice_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointingDevice_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QPointingDevice::isSignalConnected(const QMetaMethod &signal)

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
  ret.write<bool > ((bool)((QPointingDevice_Adaptor *)cls)->fp_QPointingDevice_isSignalConnected_c2394 (arg1));
}


// exposed int QPointingDevice::receivers(const char *signal)

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
  ret.write<int > ((int)((QPointingDevice_Adaptor *)cls)->fp_QPointingDevice_receivers_c1731 (arg1));
}


// exposed QObject *QPointingDevice::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QPointingDevice_Adaptor *)cls)->fp_QPointingDevice_sender_c0 ());
}


// exposed int QPointingDevice::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPointingDevice_Adaptor *)cls)->fp_QPointingDevice_senderSignalIndex_c0 ());
}


// void QPointingDevice::timerEvent(QTimerEvent *event)

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
  ((QPointingDevice_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QPointingDevice_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QPointingDevice> &qtdecl_QPointingDevice ();

static gsi::Methods methods_QPointingDevice_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPointingDevice::QPointingDevice(QObject *parent)\nThis method creates an object of class QPointingDevice.", &_init_ctor_QPointingDevice_Adaptor_1302, &_call_ctor_QPointingDevice_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPointingDevice::QPointingDevice(const QString &name, qint64 systemId, QInputDevice::DeviceType devType, QPointingDevice::PointerType pType, QFlags<QInputDevice::Capability> caps, int maxPoints, int buttonCount, const QString &seatName, QPointingDeviceUniqueId uniqueId, QObject *parent)\nThis method creates an object of class QPointingDevice.", &_init_ctor_QPointingDevice_Adaptor_19111, &_call_ctor_QPointingDevice_Adaptor_19111);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QPointingDevice::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QPointingDevice::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QPointingDevice::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QPointingDevice::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QPointingDevice::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QPointingDevice::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QPointingDevice::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QPointingDevice::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QPointingDevice::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QPointingDevice::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QPointingDevice_Adaptor> decl_QPointingDevice_Adaptor (qtdecl_QPointingDevice (), "QtGui", "QPointingDevice",
  methods_QPointingDevice_Adaptor (),
  "@qt\n@brief Binding of QPointingDevice");

}


//  Implementation of the enum wrapper class for QPointingDevice::GrabTransition
namespace qt_gsi
{

static gsi::Enum<QPointingDevice::GrabTransition> decl_QPointingDevice_GrabTransition_Enum ("QtGui", "QPointingDevice_GrabTransition",
    gsi::enum_const ("GrabPassive", QPointingDevice::GrabPassive, "@brief Enum constant QPointingDevice::GrabPassive") +
    gsi::enum_const ("UngrabPassive", QPointingDevice::UngrabPassive, "@brief Enum constant QPointingDevice::UngrabPassive") +
    gsi::enum_const ("CancelGrabPassive", QPointingDevice::CancelGrabPassive, "@brief Enum constant QPointingDevice::CancelGrabPassive") +
    gsi::enum_const ("OverrideGrabPassive", QPointingDevice::OverrideGrabPassive, "@brief Enum constant QPointingDevice::OverrideGrabPassive") +
    gsi::enum_const ("GrabExclusive", QPointingDevice::GrabExclusive, "@brief Enum constant QPointingDevice::GrabExclusive") +
    gsi::enum_const ("UngrabExclusive", QPointingDevice::UngrabExclusive, "@brief Enum constant QPointingDevice::UngrabExclusive") +
    gsi::enum_const ("CancelGrabExclusive", QPointingDevice::CancelGrabExclusive, "@brief Enum constant QPointingDevice::CancelGrabExclusive"),
  "@qt\n@brief This class represents the QPointingDevice::GrabTransition enum");

static gsi::QFlagsClass<QPointingDevice::GrabTransition > decl_QPointingDevice_GrabTransition_Enums ("QtGui", "QPointingDevice_QFlags_GrabTransition",
  "@qt\n@brief This class represents the QFlags<QPointingDevice::GrabTransition> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QPointingDevice> inject_QPointingDevice_GrabTransition_Enum_in_parent (decl_QPointingDevice_GrabTransition_Enum.defs ());
static gsi::ClassExt<QPointingDevice> decl_QPointingDevice_GrabTransition_Enum_as_child (decl_QPointingDevice_GrabTransition_Enum, "GrabTransition");
static gsi::ClassExt<QPointingDevice> decl_QPointingDevice_GrabTransition_Enums_as_child (decl_QPointingDevice_GrabTransition_Enums, "QFlags_GrabTransition");

}


//  Implementation of the enum wrapper class for QPointingDevice::PointerType
namespace qt_gsi
{

static gsi::Enum<QPointingDevice::PointerType> decl_QPointingDevice_PointerType_Enum ("QtGui", "QPointingDevice_PointerType",
    gsi::enum_const ("Unknown", QPointingDevice::PointerType::Unknown, "@brief Enum constant QPointingDevice::PointerType::Unknown") +
    gsi::enum_const ("Generic", QPointingDevice::PointerType::Generic, "@brief Enum constant QPointingDevice::PointerType::Generic") +
    gsi::enum_const ("Finger", QPointingDevice::PointerType::Finger, "@brief Enum constant QPointingDevice::PointerType::Finger") +
    gsi::enum_const ("Pen", QPointingDevice::PointerType::Pen, "@brief Enum constant QPointingDevice::PointerType::Pen") +
    gsi::enum_const ("Eraser", QPointingDevice::PointerType::Eraser, "@brief Enum constant QPointingDevice::PointerType::Eraser") +
    gsi::enum_const ("Cursor", QPointingDevice::PointerType::Cursor, "@brief Enum constant QPointingDevice::PointerType::Cursor") +
    gsi::enum_const ("AllPointerTypes", QPointingDevice::PointerType::AllPointerTypes, "@brief Enum constant QPointingDevice::PointerType::AllPointerTypes"),
  "@qt\n@brief This class represents the QPointingDevice::PointerType enum");

static gsi::QFlagsClass<QPointingDevice::PointerType > decl_QPointingDevice_PointerType_Enums ("QtGui", "QPointingDevice_QFlags_PointerType",
  "@qt\n@brief This class represents the QFlags<QPointingDevice::PointerType> flag set");

static gsi::ClassExt<QPointingDevice> decl_QPointingDevice_PointerType_Enum_as_child (decl_QPointingDevice_PointerType_Enum, "PointerType");
static gsi::ClassExt<QPointingDevice> decl_QPointingDevice_PointerType_Enums_as_child (decl_QPointingDevice_PointerType_Enums, "QFlags_PointerType");

}

