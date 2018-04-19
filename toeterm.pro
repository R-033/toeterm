TARGET = toeterm
CONFIG += sailfishapp link_pkgconfig
PKGCONFIG += nemonotifications-qt5
LIBS += -lutil

system($$PWD/updateversion.sh)

QT += feedback
DEFINES += HAVE_FEEDBACK

# Input
HEADERS += \
    src/ptyiface.h \
    src/terminal.h \
    src/textrender.h \
    src/util.h \
    src/keyloader.h \
    src/mainwindow.h

SOURCES += \
    src/main.cpp \
    src/terminal.cpp \
    src/textrender.cpp \
    src/ptyiface.cpp \
    src/util.cpp \
    src/keyloader.cpp \
    src/mainwindow.cpp

OTHER_FILES += \
    qml/Main.qml \
    qml/MainPage.qml \
    qml/AboutPage.qml \
    qml/SettingsMenu.qml \
    qml/Cover.qml \
    qml/Keyboard.qml \
    qml/Key.qml \
    qml/Lineview.qml

RESOURCES += \
    resources.qrc

unix:!symbian:!maemo5 {
    target.path = /usr/bin
    INSTALLS += target
}

maemo5 {
    target.path = /usr/bin
    INSTALLS += target
}

CONFIG += sailfishapp_i18n

TRANSLATIONS += translations/toeterm-ru.ts

DISTFILES += \
    translations/*.ts \
    rpm/toeterm.yaml \
    rpm/toeterm.spec

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

