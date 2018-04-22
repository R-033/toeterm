TARGET = toeterm
CONFIG += sailfishapp link_pkgconfig
PKGCONFIG += nemonotifications-qt5
LIBS += -lutil

system($$PWD/updateversion.sh)

QT += feedback

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

OTHER_FILES += qml/*

RESOURCES += \
    resources.qrc

target.path = /usr/bin
INSTALLS += target

SAILFISHAPP_ICONS = 86x86 108x108 128x128 172x172

CONFIG += sailfishapp_i18n

TRANSLATIONS += translations/toeterm-ru.ts
TRANSLATIONS += translations/toeterm-nl.ts

update_qml.target = qml.qrc
update_qml.commands = echo>>$${update_qml.target}
update_qml.depends = $$files(path/to/resource/files/*, true)
QMAKE_EXTRA_TARGETS += update_qml
PRE_TARGETDEPS += $${update_qml.target}

DISTFILES += \
    translations/toeterm-nl.ts \
    translations/toeterm-ru.ts \
    rpm/toeterm.yaml \
    rpm/toeterm.spec
