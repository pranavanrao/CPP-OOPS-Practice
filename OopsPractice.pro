TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        animal/Animal.cpp \
        animal/Dog.cpp \
        animal/parseAnimal.cpp \
        main.cpp \
        rectangle/Rectangle.cpp \
        rectangle/parseRectangle.cpp \
        signalslots/Signal.cpp \
        signalslots/signalsAndSlots.cpp \
        student/Student.cpp \
        student/parseStudent.cpp

HEADERS += \
    animal/Animal.h \
    animal/Dog.h \
    rectangle/Rectangle.h \
    signalslots/Signal.h \
    student/Student.h
