QT += quick \
      multimedia \
      core
CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    metronome.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    metronome.h

DISTFILES += \
    Sounds/Claves.wav \
    Sounds/Bass_Drum.wav \
    Sounds/Claves.wav \
    Sounds/Cymbal.wav \
    Sounds/Snare_Drum_A.wav \
    Sounds/Snare_Drum_B.wav \
    Sounds/Tambourine.wav \
    Sounds/Triangle_Close.wav \
    Sounds/Triangle_Open.wav \
    Sounds/Wood_Blocks_High.wav \
    Sounds/Wood_Blocks_Low.wav
