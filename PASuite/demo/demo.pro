QT       += core
QT       -= gui

TARGET = PASTestDriver-demo
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

include(../common.prf)

target.path = $$BINDIR

INSTALLS += target

INCLUDEPATH += $${IN_PWD}/../PASTestDriver/

windows {
  debug {
     build_path = $${OUT_PWD}/../PASTestDriver/debug
  } else {
     build_path = $${OUT_PWD}/../PASTestDriver/release
  }
} else {
   build_path = $${OUT_PWD}/../PASTestDriver
}

LIBS += -L$${build_path} -lPASTestDriver

