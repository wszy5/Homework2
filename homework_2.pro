TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Invoice.cpp \
        Item.cpp \
        Time.cpp \
        main.cpp

HEADERS += \
    Invoice.h \
    Item.h \
    Time.h
