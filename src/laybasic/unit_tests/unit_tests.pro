
DESTDIR_UT = $$OUT_PWD/../..
DESTDIR = $$OUT_PWD/..

TARGET = laybasic_tests

include($$PWD/../../lib_ut.pri)

SOURCES = \
  layAnnotationShapes.cc \
  layBitmap.cc \
  layBitmapsToImage.cc \
  layColorTests.cc \
  layLayerProperties.cc \
  layParsedLayerSource.cc \
  layPixelBufferTests.cc \
  layRenderer.cc \
  layNetlistBrowserModelTests.cc \
  layNetlistBrowserTreeModelTests.cc \
  layAbstractMenuTests.cc \
  laySnapTests.cc

INCLUDEPATH += $$TL_INC $$LAYBASIC_INC $$DB_INC $$GSI_INC $$OUT_PWD/../laybasic
DEPENDPATH += $$TL_INC $$LAYBASIC_INC $$DB_INC $$GSI_INC $$OUT_PWD/../laybasic

LIBS += -L$$DESTDIR_UT -lklayout_laybasic -lklayout_db -lklayout_tl -lklayout_gsi

