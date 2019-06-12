#-------------------------------------------------
#
# Project created by QtCreator 2019-06-12T20:45:02
#
#-------------------------------------------------

TEMPLATE = subdirs

CONFIG += ordered

SUBDIRS += \
    PASPerfLib \
    PASTestDriver \
    unit \
    demo

OTHER_FILES += \
    *.prf \
    doc/src/*.dox \
    scripts/*.py \
    *.py

include(coverage.prf)
include(doxy.prf)


