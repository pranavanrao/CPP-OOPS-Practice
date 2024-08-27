TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        rectangle/Rectangle.cpp \
        student/Student.cpp

HEADERS += \
    rectangle/Rectangle.h \
    student/Student.h
