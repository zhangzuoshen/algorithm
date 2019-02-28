TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

SUBDIRS += \
    sorting.pro

HEADERS += \
    bubble.hpp \
    debug.h \
    insertion.hpp \
    quicksort.hpp \
    selection.hpp \
    shellsort.hpp
