TARGET = toeterm
CONFIG += sailfishapp link_pkgconfig
PKGCONFIG += sailfishapp nemonotifications-qt5
LIBS += -lutil

system($$PWD/updateversion.sh)

QT += feedback

HEADERS += \
    src/ptyiface.h \
    src/terminal.h \
    src/textrender.h \
    src/util.h \
    src/keyloader.h

SOURCES += \
    src/main.cpp \
    src/terminal.cpp \
    src/textrender.cpp \
    src/ptyiface.cpp \
    src/util.cpp \
    src/keyloader.cpp

OTHER_FILES += qml/*

RESOURCES += \
    resources.qrc

target.path = /usr/bin
INSTALLS += target

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

CONFIG += sailfishapp_i18n

TRANSLATIONS += translations/toeterm-ru.ts
TRANSLATIONS += translations/toeterm-nl.ts
TRANSLATIONS += translations/toeterm-sv.ts
TRANSLATIONS += translations/toeterm-nl_BE.ts
TRANSLATIONS += translations/toeterm-es.ts

DISTFILES += \
    translations/toeterm-nl.ts \
    translations/toeterm-ru.ts \
    rpm/toeterm.yaml \
    rpm/toeterm.spec \
    translations/toeterm-sv.ts \
    translations/toeterm-nl_BE.ts \
    translations/toeterm-es.ts
