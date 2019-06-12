#-------------------------------------------------
#
# Project created by QtCreator 2017-07-18T11:12:39
#
#-------------------------------------------------

QT       -= gui

TARGET = PASPerfLib
TEMPLATE = lib

DEFINES += PASPERFLIB_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        PASPerfLib.cpp \
    CpuParamCustomTool.cpp \
    CpuParamTool.cpp \
    GpuParamCustomTool.cpp \
    GpuParamTool.cpp \
    InputAdapter.cpp \
    InputDataParser.cpp \
    LogDataFormatter.cpp \
    OutputAdapter.cpp \
    PerformanceManager.cpp \
    ToolAdapter.cpp \
    PerformanceLogger.cpp

HEADERS += \
        PASPerfLib.h \
        pasperflib_global.h \ 
    CpuParamCustomTool.h \
    CpuParamTool.h \
    GpuParamCustomTool.h \
    GpuParamTool.h \
    InputAdapter.h \
    InputDataParser.h \
    LogDataFormatter.h \
    OutputAdapter.h \
    PerformanceManager.h \
    ToolAdapter.h \
    PerformanceLogger.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
