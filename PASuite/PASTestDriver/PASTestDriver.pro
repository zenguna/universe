QT       += core
QT       -= gui

TARGET = PASTestDriver

TEMPLATE = lib

DEFINES += PASTESTDRIVER_LIBRARY

SOURCES += \#main.cpp \
    PASApplicationStateMonitor.cpp \
    PASBaseMetricExtractor.cpp \
    PASConfigReader.cpp \
    PASEventManager.cpp \
    PASLogger.cpp \
    PASTestDriver.cpp \
    PASTestRunner.cpp

HEADERS += \
    PASApplicationStateMonitor.h \
    PASBaseMetricExtractor.h \
    PASConfigReader.h \
    PASEventManager.h \
    PASLogger.h \
    PASTestDriver.h \
    PASTestRunner.h \
    PASTestDriver_global.h

QMAKE_PKGCONFIG_DESCRIPTION = Logging library for Qt
include(../libinstall.prf)
#---------------------------

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../PASPerfLib/release/ -lPASPerfLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../PASPerfLib/debug/ -lPASPerfLib
else:unix: LIBS += -L$$OUT_PWD/../PASPerfLib/ -lPASPerfLib
#message($$OUT_PWD/../PASPerfLib/)
INCLUDEPATH += $$PWD/../PASPerfLib
#message($${INCLUDEPATH})
DEPENDPATH += $$PWD/../PASPerfLib
#message($${DEPENDPATH})


