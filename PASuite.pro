#-------------------------------------------------
#
# Project created by QtCreator 2017-07-26T20:45:02
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


