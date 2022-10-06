#-------------------------------------------------
#
# Project created by QtCreator 2016-10-28T12:24:19
#
#-------------------------------------------------


TARGET = gameSkyrimSEGOG
TEMPLATE = lib

CONFIG += plugins
CONFIG += dll

DEFINES += GAMESKYRIMSE_GOG_LIBRARY

SOURCES += gameskyrimsegog.cpp \
    skyrimsegogbsainvalidation.cpp \
    skyrimsegogscriptextender.cpp \
    skyrimsegogdataarchives.cpp \
    skyrimsegogsavegame.cpp \
    skyrimsegogsavegameinfo.cpp

HEADERS += gameskyrimsegog.h \
    skyrimsegogbsainvalidation.h \
    skyrimsegogscriptextender.h \
    skyrimsegogdataarchives.h \
    skyrimsegogsavegame.h \
    skyrimsegogsavegameinfo.h

CONFIG(debug, debug|release) {
  LIBS += -L"$${OUT_PWD}/../gameGamebryo/debug"
  PRE_TARGETDEPS += \
    $$OUT_PWD/../gameGamebryo/debug/gameGamebryo.lib
} else {
  LIBS += -L"$${OUT_PWD}/../gameGamebryo/release"
  PRE_TARGETDEPS += \
    $$OUT_PWD/../gameGamebryo/release/gameGamebryo.lib
}

include(../plugin_template.pri)

INCLUDEPATH += "$${BOOSTPATH}" "$${PWD}/../gamefeatures" "$${PWD}/../gamegamebryo"

LIBS += -ladvapi32 -lole32 -lgameGamebryo

OTHER_FILES += \
    gameskyrimse.json\
    SConscript \
    CMakeLists.txt

