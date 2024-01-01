
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
*  @file gsiDeclQFontDatabase.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QFontDatabase>
#include <QFont>
#include <QFontInfo>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QFontDatabase

//  Constructor QFontDatabase::QFontDatabase()


static void _init_ctor_QFontDatabase_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QFontDatabase> ();
}

static void _call_ctor_QFontDatabase_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFontDatabase *> (new QFontDatabase ());
}


// bool QFontDatabase::bold(const QString &family, const QString &style)


static void _init_f_bold_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_bold_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->bold (arg1, arg2));
}


// QStringList QFontDatabase::families(QFontDatabase::WritingSystem writingSystem)


static void _init_f_families_c3214 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("writingSystem", true, "QFontDatabase::Any");
  decl->add_arg<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_families_c3214 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & arg1 = args ? gsi::arg_reader<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QFontDatabase::WritingSystem>(heap, QFontDatabase::Any), heap);
  ret.write<QStringList > ((QStringList)((QFontDatabase *)cls)->families (qt_gsi::QtToCppAdaptor<QFontDatabase::WritingSystem>(arg1).cref()));
}


// QFont QFontDatabase::font(const QString &family, const QString &style, int pointSize)


static void _init_f_font_c4601 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style");
  decl->add_arg<const QString & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("pointSize");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QFont > ();
}

static void _call_f_font_c4601 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  int arg3 = gsi::arg_reader<int >() (args, heap);
  ret.write<QFont > ((QFont)((QFontDatabase *)cls)->font (arg1, arg2, arg3));
}


// bool QFontDatabase::hasFamily(const QString &family)


static void _init_f_hasFamily_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_hasFamily_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->hasFamily (arg1));
}


// bool QFontDatabase::isBitmapScalable(const QString &family, const QString &style)


static void _init_f_isBitmapScalable_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isBitmapScalable_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->isBitmapScalable (arg1, arg2));
}


// bool QFontDatabase::isFixedPitch(const QString &family, const QString &style)


static void _init_f_isFixedPitch_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isFixedPitch_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->isFixedPitch (arg1, arg2));
}


// bool QFontDatabase::isPrivateFamily(const QString &family)


static void _init_f_isPrivateFamily_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isPrivateFamily_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->isPrivateFamily (arg1));
}


// bool QFontDatabase::isScalable(const QString &family, const QString &style)


static void _init_f_isScalable_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isScalable_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->isScalable (arg1, arg2));
}


// bool QFontDatabase::isSmoothlyScalable(const QString &family, const QString &style)


static void _init_f_isSmoothlyScalable_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_isSmoothlyScalable_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->isSmoothlyScalable (arg1, arg2));
}


// bool QFontDatabase::italic(const QString &family, const QString &style)


static void _init_f_italic_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_italic_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QFontDatabase *)cls)->italic (arg1, arg2));
}


// QList<int> QFontDatabase::pointSizes(const QString &family, const QString &style)


static void _init_f_pointSizes_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style", true, "QString()");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QList<int> > ();
}

static void _call_f_pointSizes_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QList<int> > ((QList<int>)((QFontDatabase *)cls)->pointSizes (arg1, arg2));
}


// QList<int> QFontDatabase::smoothSizes(const QString &family, const QString &style)


static void _init_f_smoothSizes_3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<QList<int> > ();
}

static void _call_f_smoothSizes_3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QList<int> > ((QList<int>)((QFontDatabase *)cls)->smoothSizes (arg1, arg2));
}


// QString QFontDatabase::styleString(const QFont &font)


static void _init_f_styleString_1801 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("font");
  decl->add_arg<const QFont & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_styleString_1801 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFont &arg1 = gsi::arg_reader<const QFont & >() (args, heap);
  ret.write<QString > ((QString)((QFontDatabase *)cls)->styleString (arg1));
}


// QString QFontDatabase::styleString(const QFontInfo &fontInfo)


static void _init_f_styleString_2197 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fontInfo");
  decl->add_arg<const QFontInfo & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_styleString_2197 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QFontInfo &arg1 = gsi::arg_reader<const QFontInfo & >() (args, heap);
  ret.write<QString > ((QString)((QFontDatabase *)cls)->styleString (arg1));
}


// QStringList QFontDatabase::styles(const QString &family)


static void _init_f_styles_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_styles_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QStringList > ((QStringList)((QFontDatabase *)cls)->styles (arg1));
}


// int QFontDatabase::weight(const QString &family, const QString &style)


static void _init_f_weight_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("style");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_weight_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<int > ((int)((QFontDatabase *)cls)->weight (arg1, arg2));
}


// QList<QFontDatabase::WritingSystem> QFontDatabase::writingSystems()


static void _init_f_writingSystems_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QFontDatabase::WritingSystem> > ();
}

static void _call_f_writingSystems_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QFontDatabase::WritingSystem> > ((QList<QFontDatabase::WritingSystem>)((QFontDatabase *)cls)->writingSystems ());
}


// QList<QFontDatabase::WritingSystem> QFontDatabase::writingSystems(const QString &family)


static void _init_f_writingSystems_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("family");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QList<QFontDatabase::WritingSystem> > ();
}

static void _call_f_writingSystems_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QList<QFontDatabase::WritingSystem> > ((QList<QFontDatabase::WritingSystem>)((QFontDatabase *)cls)->writingSystems (arg1));
}


// static int QFontDatabase::addApplicationFont(const QString &fileName)


static void _init_f_addApplicationFont_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_addApplicationFont_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<int > ((int)QFontDatabase::addApplicationFont (arg1));
}


// static int QFontDatabase::addApplicationFontFromData(const QByteArray &fontData)


static void _init_f_addApplicationFontFromData_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fontData");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_addApplicationFontFromData_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<int > ((int)QFontDatabase::addApplicationFontFromData (arg1));
}


// static QStringList QFontDatabase::applicationFontFamilies(int id)


static void _init_f_applicationFontFamilies_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QStringList > ();
}

static void _call_f_applicationFontFamilies_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QStringList > ((QStringList)QFontDatabase::applicationFontFamilies (arg1));
}


// static bool QFontDatabase::removeAllApplicationFonts()


static void _init_f_removeAllApplicationFonts_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_removeAllApplicationFonts_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QFontDatabase::removeAllApplicationFonts ());
}


// static bool QFontDatabase::removeApplicationFont(int id)


static void _init_f_removeApplicationFont_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("id");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_removeApplicationFont_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<bool > ((bool)QFontDatabase::removeApplicationFont (arg1));
}


// static QList<int> QFontDatabase::standardSizes()


static void _init_f_standardSizes_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_standardSizes_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)QFontDatabase::standardSizes ());
}


// static bool QFontDatabase::supportsThreadedFontRendering()


static void _init_f_supportsThreadedFontRendering_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_supportsThreadedFontRendering_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QFontDatabase::supportsThreadedFontRendering ());
}


// static QFont QFontDatabase::systemFont(QFontDatabase::SystemFont type)


static void _init_f_systemFont_2881 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QFontDatabase::SystemFont>::target_type & > (argspec_0);
  decl->set_return<QFont > ();
}

static void _call_f_systemFont_2881 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFontDatabase::SystemFont>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QFontDatabase::SystemFont>::target_type & >() (args, heap);
  ret.write<QFont > ((QFont)QFontDatabase::systemFont (qt_gsi::QtToCppAdaptor<QFontDatabase::SystemFont>(arg1).cref()));
}


// static QString QFontDatabase::writingSystemName(QFontDatabase::WritingSystem writingSystem)


static void _init_f_writingSystemName_3214 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("writingSystem");
  decl->add_arg<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_writingSystemName_3214 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QFontDatabase::writingSystemName (qt_gsi::QtToCppAdaptor<QFontDatabase::WritingSystem>(arg1).cref()));
}


// static QString QFontDatabase::writingSystemSample(QFontDatabase::WritingSystem writingSystem)


static void _init_f_writingSystemSample_3214 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("writingSystem");
  decl->add_arg<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_writingSystemSample_3214 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QFontDatabase::WritingSystem>::target_type & >() (args, heap);
  ret.write<QString > ((QString)QFontDatabase::writingSystemSample (qt_gsi::QtToCppAdaptor<QFontDatabase::WritingSystem>(arg1).cref()));
}



namespace gsi
{

static gsi::Methods methods_QFontDatabase () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QFontDatabase::QFontDatabase()\nThis method creates an object of class QFontDatabase.", &_init_ctor_QFontDatabase_0, &_call_ctor_QFontDatabase_0);
  methods += new qt_gsi::GenericMethod ("bold", "@brief Method bool QFontDatabase::bold(const QString &family, const QString &style)\n", true, &_init_f_bold_c3942, &_call_f_bold_c3942);
  methods += new qt_gsi::GenericMethod ("families", "@brief Method QStringList QFontDatabase::families(QFontDatabase::WritingSystem writingSystem)\n", true, &_init_f_families_c3214, &_call_f_families_c3214);
  methods += new qt_gsi::GenericMethod ("font", "@brief Method QFont QFontDatabase::font(const QString &family, const QString &style, int pointSize)\n", true, &_init_f_font_c4601, &_call_f_font_c4601);
  methods += new qt_gsi::GenericMethod ("hasFamily", "@brief Method bool QFontDatabase::hasFamily(const QString &family)\n", true, &_init_f_hasFamily_c2025, &_call_f_hasFamily_c2025);
  methods += new qt_gsi::GenericMethod ("isBitmapScalable?", "@brief Method bool QFontDatabase::isBitmapScalable(const QString &family, const QString &style)\n", true, &_init_f_isBitmapScalable_c3942, &_call_f_isBitmapScalable_c3942);
  methods += new qt_gsi::GenericMethod ("isFixedPitch?", "@brief Method bool QFontDatabase::isFixedPitch(const QString &family, const QString &style)\n", true, &_init_f_isFixedPitch_c3942, &_call_f_isFixedPitch_c3942);
  methods += new qt_gsi::GenericMethod ("isPrivateFamily?", "@brief Method bool QFontDatabase::isPrivateFamily(const QString &family)\n", true, &_init_f_isPrivateFamily_c2025, &_call_f_isPrivateFamily_c2025);
  methods += new qt_gsi::GenericMethod ("isScalable?", "@brief Method bool QFontDatabase::isScalable(const QString &family, const QString &style)\n", true, &_init_f_isScalable_c3942, &_call_f_isScalable_c3942);
  methods += new qt_gsi::GenericMethod ("isSmoothlyScalable?", "@brief Method bool QFontDatabase::isSmoothlyScalable(const QString &family, const QString &style)\n", true, &_init_f_isSmoothlyScalable_c3942, &_call_f_isSmoothlyScalable_c3942);
  methods += new qt_gsi::GenericMethod ("italic", "@brief Method bool QFontDatabase::italic(const QString &family, const QString &style)\n", true, &_init_f_italic_c3942, &_call_f_italic_c3942);
  methods += new qt_gsi::GenericMethod ("pointSizes", "@brief Method QList<int> QFontDatabase::pointSizes(const QString &family, const QString &style)\n", false, &_init_f_pointSizes_3942, &_call_f_pointSizes_3942);
  methods += new qt_gsi::GenericMethod ("smoothSizes", "@brief Method QList<int> QFontDatabase::smoothSizes(const QString &family, const QString &style)\n", false, &_init_f_smoothSizes_3942, &_call_f_smoothSizes_3942);
  methods += new qt_gsi::GenericMethod ("styleString", "@brief Method QString QFontDatabase::styleString(const QFont &font)\n", false, &_init_f_styleString_1801, &_call_f_styleString_1801);
  methods += new qt_gsi::GenericMethod ("styleString", "@brief Method QString QFontDatabase::styleString(const QFontInfo &fontInfo)\n", false, &_init_f_styleString_2197, &_call_f_styleString_2197);
  methods += new qt_gsi::GenericMethod ("styles", "@brief Method QStringList QFontDatabase::styles(const QString &family)\n", true, &_init_f_styles_c2025, &_call_f_styles_c2025);
  methods += new qt_gsi::GenericMethod ("weight", "@brief Method int QFontDatabase::weight(const QString &family, const QString &style)\n", true, &_init_f_weight_c3942, &_call_f_weight_c3942);
  methods += new qt_gsi::GenericMethod ("writingSystems", "@brief Method QList<QFontDatabase::WritingSystem> QFontDatabase::writingSystems()\n", true, &_init_f_writingSystems_c0, &_call_f_writingSystems_c0);
  methods += new qt_gsi::GenericMethod ("writingSystems", "@brief Method QList<QFontDatabase::WritingSystem> QFontDatabase::writingSystems(const QString &family)\n", true, &_init_f_writingSystems_c2025, &_call_f_writingSystems_c2025);
  methods += new qt_gsi::GenericStaticMethod ("addApplicationFont", "@brief Static method int QFontDatabase::addApplicationFont(const QString &fileName)\nThis method is static and can be called without an instance.", &_init_f_addApplicationFont_2025, &_call_f_addApplicationFont_2025);
  methods += new qt_gsi::GenericStaticMethod ("addApplicationFontFromData", "@brief Static method int QFontDatabase::addApplicationFontFromData(const QByteArray &fontData)\nThis method is static and can be called without an instance.", &_init_f_addApplicationFontFromData_2309, &_call_f_addApplicationFontFromData_2309);
  methods += new qt_gsi::GenericStaticMethod ("applicationFontFamilies", "@brief Static method QStringList QFontDatabase::applicationFontFamilies(int id)\nThis method is static and can be called without an instance.", &_init_f_applicationFontFamilies_767, &_call_f_applicationFontFamilies_767);
  methods += new qt_gsi::GenericStaticMethod ("removeAllApplicationFonts", "@brief Static method bool QFontDatabase::removeAllApplicationFonts()\nThis method is static and can be called without an instance.", &_init_f_removeAllApplicationFonts_0, &_call_f_removeAllApplicationFonts_0);
  methods += new qt_gsi::GenericStaticMethod ("removeApplicationFont", "@brief Static method bool QFontDatabase::removeApplicationFont(int id)\nThis method is static and can be called without an instance.", &_init_f_removeApplicationFont_767, &_call_f_removeApplicationFont_767);
  methods += new qt_gsi::GenericStaticMethod ("standardSizes", "@brief Static method QList<int> QFontDatabase::standardSizes()\nThis method is static and can be called without an instance.", &_init_f_standardSizes_0, &_call_f_standardSizes_0);
  methods += new qt_gsi::GenericStaticMethod ("supportsThreadedFontRendering", "@brief Static method bool QFontDatabase::supportsThreadedFontRendering()\nThis method is static and can be called without an instance.", &_init_f_supportsThreadedFontRendering_0, &_call_f_supportsThreadedFontRendering_0);
  methods += new qt_gsi::GenericStaticMethod ("systemFont", "@brief Static method QFont QFontDatabase::systemFont(QFontDatabase::SystemFont type)\nThis method is static and can be called without an instance.", &_init_f_systemFont_2881, &_call_f_systemFont_2881);
  methods += new qt_gsi::GenericStaticMethod ("writingSystemName", "@brief Static method QString QFontDatabase::writingSystemName(QFontDatabase::WritingSystem writingSystem)\nThis method is static and can be called without an instance.", &_init_f_writingSystemName_3214, &_call_f_writingSystemName_3214);
  methods += new qt_gsi::GenericStaticMethod ("writingSystemSample", "@brief Static method QString QFontDatabase::writingSystemSample(QFontDatabase::WritingSystem writingSystem)\nThis method is static and can be called without an instance.", &_init_f_writingSystemSample_3214, &_call_f_writingSystemSample_3214);
  return methods;
}

gsi::Class<QFontDatabase> decl_QFontDatabase ("QtGui", "QFontDatabase",
  methods_QFontDatabase (),
  "@qt\n@brief Binding of QFontDatabase");


GSI_QTGUI_PUBLIC gsi::Class<QFontDatabase> &qtdecl_QFontDatabase () { return decl_QFontDatabase; }

}


//  Implementation of the enum wrapper class for QFontDatabase::SystemFont
namespace qt_gsi
{

static gsi::Enum<QFontDatabase::SystemFont> decl_QFontDatabase_SystemFont_Enum ("QtGui", "QFontDatabase_SystemFont",
    gsi::enum_const ("GeneralFont", QFontDatabase::GeneralFont, "@brief Enum constant QFontDatabase::GeneralFont") +
    gsi::enum_const ("FixedFont", QFontDatabase::FixedFont, "@brief Enum constant QFontDatabase::FixedFont") +
    gsi::enum_const ("TitleFont", QFontDatabase::TitleFont, "@brief Enum constant QFontDatabase::TitleFont") +
    gsi::enum_const ("SmallestReadableFont", QFontDatabase::SmallestReadableFont, "@brief Enum constant QFontDatabase::SmallestReadableFont"),
  "@qt\n@brief This class represents the QFontDatabase::SystemFont enum");

static gsi::QFlagsClass<QFontDatabase::SystemFont > decl_QFontDatabase_SystemFont_Enums ("QtGui", "QFontDatabase_QFlags_SystemFont",
  "@qt\n@brief This class represents the QFlags<QFontDatabase::SystemFont> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QFontDatabase> inject_QFontDatabase_SystemFont_Enum_in_parent (decl_QFontDatabase_SystemFont_Enum.defs ());
static gsi::ClassExt<QFontDatabase> decl_QFontDatabase_SystemFont_Enum_as_child (decl_QFontDatabase_SystemFont_Enum, "SystemFont");
static gsi::ClassExt<QFontDatabase> decl_QFontDatabase_SystemFont_Enums_as_child (decl_QFontDatabase_SystemFont_Enums, "QFlags_SystemFont");

}


//  Implementation of the enum wrapper class for QFontDatabase::WritingSystem
namespace qt_gsi
{

static gsi::Enum<QFontDatabase::WritingSystem> decl_QFontDatabase_WritingSystem_Enum ("QtGui", "QFontDatabase_WritingSystem",
    gsi::enum_const ("Any", QFontDatabase::Any, "@brief Enum constant QFontDatabase::Any") +
    gsi::enum_const ("Latin", QFontDatabase::Latin, "@brief Enum constant QFontDatabase::Latin") +
    gsi::enum_const ("Greek", QFontDatabase::Greek, "@brief Enum constant QFontDatabase::Greek") +
    gsi::enum_const ("Cyrillic", QFontDatabase::Cyrillic, "@brief Enum constant QFontDatabase::Cyrillic") +
    gsi::enum_const ("Armenian", QFontDatabase::Armenian, "@brief Enum constant QFontDatabase::Armenian") +
    gsi::enum_const ("Hebrew", QFontDatabase::Hebrew, "@brief Enum constant QFontDatabase::Hebrew") +
    gsi::enum_const ("Arabic", QFontDatabase::Arabic, "@brief Enum constant QFontDatabase::Arabic") +
    gsi::enum_const ("Syriac", QFontDatabase::Syriac, "@brief Enum constant QFontDatabase::Syriac") +
    gsi::enum_const ("Thaana", QFontDatabase::Thaana, "@brief Enum constant QFontDatabase::Thaana") +
    gsi::enum_const ("Devanagari", QFontDatabase::Devanagari, "@brief Enum constant QFontDatabase::Devanagari") +
    gsi::enum_const ("Bengali", QFontDatabase::Bengali, "@brief Enum constant QFontDatabase::Bengali") +
    gsi::enum_const ("Gurmukhi", QFontDatabase::Gurmukhi, "@brief Enum constant QFontDatabase::Gurmukhi") +
    gsi::enum_const ("Gujarati", QFontDatabase::Gujarati, "@brief Enum constant QFontDatabase::Gujarati") +
    gsi::enum_const ("Oriya", QFontDatabase::Oriya, "@brief Enum constant QFontDatabase::Oriya") +
    gsi::enum_const ("Tamil", QFontDatabase::Tamil, "@brief Enum constant QFontDatabase::Tamil") +
    gsi::enum_const ("Telugu", QFontDatabase::Telugu, "@brief Enum constant QFontDatabase::Telugu") +
    gsi::enum_const ("Kannada", QFontDatabase::Kannada, "@brief Enum constant QFontDatabase::Kannada") +
    gsi::enum_const ("Malayalam", QFontDatabase::Malayalam, "@brief Enum constant QFontDatabase::Malayalam") +
    gsi::enum_const ("Sinhala", QFontDatabase::Sinhala, "@brief Enum constant QFontDatabase::Sinhala") +
    gsi::enum_const ("Thai", QFontDatabase::Thai, "@brief Enum constant QFontDatabase::Thai") +
    gsi::enum_const ("Lao", QFontDatabase::Lao, "@brief Enum constant QFontDatabase::Lao") +
    gsi::enum_const ("Tibetan", QFontDatabase::Tibetan, "@brief Enum constant QFontDatabase::Tibetan") +
    gsi::enum_const ("Myanmar", QFontDatabase::Myanmar, "@brief Enum constant QFontDatabase::Myanmar") +
    gsi::enum_const ("Georgian", QFontDatabase::Georgian, "@brief Enum constant QFontDatabase::Georgian") +
    gsi::enum_const ("Khmer", QFontDatabase::Khmer, "@brief Enum constant QFontDatabase::Khmer") +
    gsi::enum_const ("SimplifiedChinese", QFontDatabase::SimplifiedChinese, "@brief Enum constant QFontDatabase::SimplifiedChinese") +
    gsi::enum_const ("TraditionalChinese", QFontDatabase::TraditionalChinese, "@brief Enum constant QFontDatabase::TraditionalChinese") +
    gsi::enum_const ("Japanese", QFontDatabase::Japanese, "@brief Enum constant QFontDatabase::Japanese") +
    gsi::enum_const ("Korean", QFontDatabase::Korean, "@brief Enum constant QFontDatabase::Korean") +
    gsi::enum_const ("Vietnamese", QFontDatabase::Vietnamese, "@brief Enum constant QFontDatabase::Vietnamese") +
    gsi::enum_const ("Symbol", QFontDatabase::Symbol, "@brief Enum constant QFontDatabase::Symbol") +
    gsi::enum_const ("Other", QFontDatabase::Other, "@brief Enum constant QFontDatabase::Other") +
    gsi::enum_const ("Ogham", QFontDatabase::Ogham, "@brief Enum constant QFontDatabase::Ogham") +
    gsi::enum_const ("Runic", QFontDatabase::Runic, "@brief Enum constant QFontDatabase::Runic") +
    gsi::enum_const ("Nko", QFontDatabase::Nko, "@brief Enum constant QFontDatabase::Nko") +
    gsi::enum_const ("WritingSystemsCount", QFontDatabase::WritingSystemsCount, "@brief Enum constant QFontDatabase::WritingSystemsCount"),
  "@qt\n@brief This class represents the QFontDatabase::WritingSystem enum");

static gsi::QFlagsClass<QFontDatabase::WritingSystem > decl_QFontDatabase_WritingSystem_Enums ("QtGui", "QFontDatabase_QFlags_WritingSystem",
  "@qt\n@brief This class represents the QFlags<QFontDatabase::WritingSystem> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QFontDatabase> inject_QFontDatabase_WritingSystem_Enum_in_parent (decl_QFontDatabase_WritingSystem_Enum.defs ());
static gsi::ClassExt<QFontDatabase> decl_QFontDatabase_WritingSystem_Enum_as_child (decl_QFontDatabase_WritingSystem_Enum, "WritingSystem");
static gsi::ClassExt<QFontDatabase> decl_QFontDatabase_WritingSystem_Enums_as_child (decl_QFontDatabase_WritingSystem_Enums, "QFlags_WritingSystem");

}

