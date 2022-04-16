
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
*  @file gsiDeclQShortcutEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QShortcutEvent>
#include <QKeySequence>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QShortcutEvent

// QShortcutEvent *QShortcutEvent::clone()


static void _init_f_clone_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QShortcutEvent * > ();
}

static void _call_f_clone_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QShortcutEvent * > ((QShortcutEvent *)((QShortcutEvent *)cls)->clone ());
}


// bool QShortcutEvent::isAmbiguous()


static void _init_f_isAmbiguous_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isAmbiguous_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QShortcutEvent *)cls)->isAmbiguous ());
}


// const QKeySequence &QShortcutEvent::key()


static void _init_f_key_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QKeySequence & > ();
}

static void _call_f_key_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QKeySequence & > ((const QKeySequence &)((QShortcutEvent *)cls)->key ());
}


// int QShortcutEvent::shortcutId()


static void _init_f_shortcutId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_shortcutId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QShortcutEvent *)cls)->shortcutId ());
}


namespace gsi
{

static gsi::Methods methods_QShortcutEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("clone", "@brief Method QShortcutEvent *QShortcutEvent::clone()\nThis is a reimplementation of QEvent::clone", true, &_init_f_clone_c0, &_call_f_clone_c0);
  methods += new qt_gsi::GenericMethod ("isAmbiguous?", "@brief Method bool QShortcutEvent::isAmbiguous()\n", true, &_init_f_isAmbiguous_c0, &_call_f_isAmbiguous_c0);
  methods += new qt_gsi::GenericMethod ("key", "@brief Method const QKeySequence &QShortcutEvent::key()\n", true, &_init_f_key_c0, &_call_f_key_c0);
  methods += new qt_gsi::GenericMethod ("shortcutId", "@brief Method int QShortcutEvent::shortcutId()\n", true, &_init_f_shortcutId_c0, &_call_f_shortcutId_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QShortcutEvent> decl_QShortcutEvent (qtdecl_QEvent (), "QtGui", "QShortcutEvent_Native",
  methods_QShortcutEvent (),
  "@hide\n@alias QShortcutEvent");

GSI_QTGUI_PUBLIC gsi::Class<QShortcutEvent> &qtdecl_QShortcutEvent () { return decl_QShortcutEvent; }

}


class QShortcutEvent_Adaptor : public QShortcutEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QShortcutEvent_Adaptor();

  //  [adaptor ctor] QShortcutEvent::QShortcutEvent(const QKeySequence &key, int id, bool ambiguous)
  QShortcutEvent_Adaptor(const QKeySequence &key, int id) : QShortcutEvent(key, id)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QShortcutEvent::QShortcutEvent(const QKeySequence &key, int id, bool ambiguous)
  QShortcutEvent_Adaptor(const QKeySequence &key, int id, bool ambiguous) : QShortcutEvent(key, id, ambiguous)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QShortcutEvent *QShortcutEvent::clone()
  QShortcutEvent * cbs_clone_c0_0() const
  {
    return QShortcutEvent::clone();
  }

  virtual QShortcutEvent * clone() const
  {
    if (cb_clone_c0_0.can_issue()) {
      return cb_clone_c0_0.issue<QShortcutEvent_Adaptor, QShortcutEvent *>(&QShortcutEvent_Adaptor::cbs_clone_c0_0);
    } else {
      return QShortcutEvent::clone();
    }
  }

  //  [adaptor impl] void QShortcutEvent::setAccepted(bool accepted)
  void cbs_setAccepted_864_0(bool accepted)
  {
    QShortcutEvent::setAccepted(accepted);
  }

  virtual void setAccepted(bool accepted)
  {
    if (cb_setAccepted_864_0.can_issue()) {
      cb_setAccepted_864_0.issue<QShortcutEvent_Adaptor, bool>(&QShortcutEvent_Adaptor::cbs_setAccepted_864_0, accepted);
    } else {
      QShortcutEvent::setAccepted(accepted);
    }
  }

  gsi::Callback cb_clone_c0_0;
  gsi::Callback cb_setAccepted_864_0;
};

QShortcutEvent_Adaptor::~QShortcutEvent_Adaptor() { }

//  Constructor QShortcutEvent::QShortcutEvent(const QKeySequence &key, int id, bool ambiguous) (adaptor class)

static void _init_ctor_QShortcutEvent_Adaptor_3931 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("key");
  decl->add_arg<const QKeySequence & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("id");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("ambiguous", true, "false");
  decl->add_arg<bool > (argspec_2);
  decl->set_return_new<QShortcutEvent_Adaptor> ();
}

static void _call_ctor_QShortcutEvent_Adaptor_3931 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QKeySequence &arg1 = gsi::arg_reader<const QKeySequence & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  bool arg3 = args ? gsi::arg_reader<bool >() (args, heap) : gsi::arg_maker<bool >() (false, heap);
  ret.write<QShortcutEvent_Adaptor *> (new QShortcutEvent_Adaptor (arg1, arg2, arg3));
}


// QShortcutEvent *QShortcutEvent::clone()

static void _init_cbs_clone_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QShortcutEvent * > ();
}

static void _call_cbs_clone_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QShortcutEvent * > ((QShortcutEvent *)((QShortcutEvent_Adaptor *)cls)->cbs_clone_c0_0 ());
}

static void _set_callback_cbs_clone_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcutEvent_Adaptor *)cls)->cb_clone_c0_0 = cb;
}


// void QShortcutEvent::setAccepted(bool accepted)

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
  ((QShortcutEvent_Adaptor *)cls)->cbs_setAccepted_864_0 (arg1);
}

static void _set_callback_cbs_setAccepted_864_0 (void *cls, const gsi::Callback &cb)
{
  ((QShortcutEvent_Adaptor *)cls)->cb_setAccepted_864_0 = cb;
}


namespace gsi
{

gsi::Class<QShortcutEvent> &qtdecl_QShortcutEvent ();

static gsi::Methods methods_QShortcutEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QShortcutEvent::QShortcutEvent(const QKeySequence &key, int id, bool ambiguous)\nThis method creates an object of class QShortcutEvent.", &_init_ctor_QShortcutEvent_Adaptor_3931, &_call_ctor_QShortcutEvent_Adaptor_3931);
  methods += new qt_gsi::GenericMethod ("clone", "@brief Virtual method QShortcutEvent *QShortcutEvent::clone()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("clone", "@hide", true, &_init_cbs_clone_c0_0, &_call_cbs_clone_c0_0, &_set_callback_cbs_clone_c0_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@brief Virtual method void QShortcutEvent::setAccepted(bool accepted)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0);
  methods += new qt_gsi::GenericMethod ("setAccepted", "@hide", false, &_init_cbs_setAccepted_864_0, &_call_cbs_setAccepted_864_0, &_set_callback_cbs_setAccepted_864_0);
  return methods;
}

gsi::Class<QShortcutEvent_Adaptor> decl_QShortcutEvent_Adaptor (qtdecl_QShortcutEvent (), "QtGui", "QShortcutEvent",
  methods_QShortcutEvent_Adaptor (),
  "@qt\n@brief Binding of QShortcutEvent");

}

