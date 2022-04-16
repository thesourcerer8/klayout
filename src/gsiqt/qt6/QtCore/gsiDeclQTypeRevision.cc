
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
*  @file gsiDeclQTypeRevision.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTypeRevision>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTypeRevision

//  Constructor QTypeRevision::QTypeRevision()


static void _init_ctor_QTypeRevision_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTypeRevision> ();
}

static void _call_ctor_QTypeRevision_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTypeRevision *> (new QTypeRevision ());
}


// bool QTypeRevision::hasMajorVersion()


static void _init_f_hasMajorVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasMajorVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTypeRevision *)cls)->hasMajorVersion ());
}


// bool QTypeRevision::hasMinorVersion()


static void _init_f_hasMinorVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasMinorVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTypeRevision *)cls)->hasMinorVersion ());
}


// bool QTypeRevision::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTypeRevision *)cls)->isValid ());
}


// quint8 QTypeRevision::majorVersion()


static void _init_f_majorVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint8 > ();
}

static void _call_f_majorVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint8 > ((quint8)((QTypeRevision *)cls)->majorVersion ());
}


// quint8 QTypeRevision::minorVersion()


static void _init_f_minorVersion_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<quint8 > ();
}

static void _call_f_minorVersion_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<quint8 > ((quint8)((QTypeRevision *)cls)->minorVersion ());
}


// static QTypeRevision QTypeRevision::zero()


static void _init_f_zero_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QTypeRevision > ();
}

static void _call_f_zero_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTypeRevision > ((QTypeRevision)QTypeRevision::zero ());
}



namespace gsi
{

static gsi::Methods methods_QTypeRevision () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTypeRevision::QTypeRevision()\nThis method creates an object of class QTypeRevision.", &_init_ctor_QTypeRevision_0, &_call_ctor_QTypeRevision_0);
  methods += new qt_gsi::GenericMethod ("hasMajorVersion", "@brief Method bool QTypeRevision::hasMajorVersion()\n", true, &_init_f_hasMajorVersion_c0, &_call_f_hasMajorVersion_c0);
  methods += new qt_gsi::GenericMethod ("hasMinorVersion", "@brief Method bool QTypeRevision::hasMinorVersion()\n", true, &_init_f_hasMinorVersion_c0, &_call_f_hasMinorVersion_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTypeRevision::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("majorVersion", "@brief Method quint8 QTypeRevision::majorVersion()\n", true, &_init_f_majorVersion_c0, &_call_f_majorVersion_c0);
  methods += new qt_gsi::GenericMethod ("minorVersion", "@brief Method quint8 QTypeRevision::minorVersion()\n", true, &_init_f_minorVersion_c0, &_call_f_minorVersion_c0);
  methods += new qt_gsi::GenericStaticMethod ("zero", "@brief Static method QTypeRevision QTypeRevision::zero()\nThis method is static and can be called without an instance.", &_init_f_zero_0, &_call_f_zero_0);
  return methods;
}

gsi::Class<QTypeRevision> decl_QTypeRevision ("QtCore", "QTypeRevision",
  methods_QTypeRevision (),
  "@qt\n@brief Binding of QTypeRevision");


GSI_QTCORE_PUBLIC gsi::Class<QTypeRevision> &qtdecl_QTypeRevision () { return decl_QTypeRevision; }

}

