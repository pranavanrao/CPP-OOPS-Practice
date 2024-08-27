TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        animal/Animal.cpp \
        animal/Dog.cpp \
        main.cpp \
        rectangle/Rectangle.cpp \
        student/Student.cpp

HEADERS += \
    animal/Animal.h \
    animal/Dog.h \
    rectangle/Rectangle.h \
    student/Student.h
