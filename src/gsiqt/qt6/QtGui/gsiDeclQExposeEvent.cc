
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
*  @file gsiDeclQExposeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QExposeEvent>
#include <QRegion>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QExposeEvent

// const QRegion &QExposeEvent::region()


static void _init_f_region_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QRegion & > ();
}

static void _call_f_region_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QRegion & > ((const QRegion &)((QExposeEvent *)cls)->region ());
}


namespace gsi
{

static gsi::Methods methods_QExposeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("region", "@brief Method const QRegion &QExposeEvent::region()\n", true, &_init_f_region_c0, &_call_f_region_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QExposeEvent> decl_QExposeEvent (qtdecl_QEvent (), "QtGui", "QExposeEvent_Native",
  methods_QExposeEvent (),
  "@hide\n@alias QExposeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QExposeEvent> &qtdecl_QExposeEvent () { return decl_QExposeEvent; }

}


class QExposeEvent_Adaptor : public QExposeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QExposeEvent_Adaptor();

  //  [adaptor ctor] QExposeEvent::QExposeEvent(const QRegion &m_region)
  QExposeEvent_Adaptor(const QRegion &m_region) : QExposeEvent(m_region)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QExposeEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QExposeEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QExposeEvent_Adaptor, bool>(&QExposeEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QExposeEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_setAccepted_864_0;
};

QExposeEvent_Adaptor::~QExposeEvent_Adaptor() { }

//  Constructor QExposeEvent::QExposeEvent(const QRegion &m_region) (adaptor class)

static void _init_ctor_QExposeEvent_Adaptor_2006 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("m_region");
  decl->add_arg<const QRegion & > (argspec_0);
  decl->set_return_new<QExposeEvent_Adaptor> ();
}

static void _call_ctor_QExposeEvent_Adaptor_2006 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QRegion &arg1 = gsi::arg_reader<const QRegion & >() (args, heap);
  ret.write<QExposeEvent_Adaptor *> (new QExposeEvent_Adaptor (arg1));
}


// void QExposeEvent::setAccepted(bool accepted)

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
  ((QExposeEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QExposeEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QExposeEvent> &qtdecl_QExposeEvent ();

static gsi::Methods methods_QExposeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QExposeEvent::QExposeEvent(const QRegion &m_region)\nThis method creates an object of class QExposeEvent.", &_init_ctor_QExposeEvent_Adaptor_2006, &_call_ctor_QExposeEvent_Adaptor_2006);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QExposeEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QExposeEvent_Adaptor> decl_QExposeEvent_Adaptor (qtdecl_QExposeEvent (), "QtGui", "QExposeEvent",
  methods_QExposeEvent_Adaptor (),
  "@qt\n@brief Binding of QExposeEvent");

}

