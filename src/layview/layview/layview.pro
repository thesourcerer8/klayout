
DESTDIR = $$OUT_PWD/../..
TARGET = klayout_ui

include($$PWD/../../lib.pri)

DEFINES += MAKE_UI_LIBRARY

FORMS = \

RESOURCES = \

SOURCES = \

HEADERS = \
  layLayoutView.h

!equals(HAVE_QT, "0") {

  SOURCES += \
    layLayoutView_qt.cc \
    gsiDeclLayLayoutView_qt.cc \

  HEADERS += \
    layLayoutView_qt.h \

} else {

  SOURCES += \
    layLayoutView_noqt.cc \
    gsiDeclLayLayoutView_noqt.cc \

  HEADERS += \
    layLayoutView_noqt.h \

}

INCLUDEPATH += $$LAYBASIC_INC $$TL_INC $$GSI_INC $$DB_INC $$RDB_INC
DEPENDPATH += $$LAYBASIC_INC $$TL_INC $$GSI_INC $$DB_INC $$RDB_INC
LIBS += -L$$DESTDIR -lklayout_laybasic -lklayout_tl -lklayout_gsi -lklayout_db -lklayout_rdb 

!equals(HAVE_QT, "0") {

  INCLUDEPATH += $$QTBASIC_INC $$LAYUI_INC
  DEPENDPATH += $$QTBASIC_INC $$LAYUI_INC
  LIBS += -lklayout_layui

  equals(HAVE_QTBINDINGS, "1") {
    LIBS += -lklayout_qtbasic -lklayout_QtGui -lklayout_QtCore
    greaterThan(QT_MAJOR_VERSION, 4) {
      LIBS += -lklayout_QtWidgets
    }
  }

}
