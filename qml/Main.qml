/*
    Copyright 2011-2012 Heikki Holstila <heikki.holstila@gmail.com>

    This file is part of FingerTerm.

    FingerTerm is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    FingerTerm is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with FingerTerm.  If not, see <http://www.gnu.org/licenses/>.
*/

import QtQuick 2.0
import TextRender 1.0
import Sailfish.Silica 1.0

ApplicationWindow {
    id: appWindow
    focus: true
    Keys.onPressed: {
        if (window) {
            window.vkbKeypress(event.key,event.modifiers);
        }
    }
    property string windowTitle: util.currentWindowTitle()
    property variant lines: []
    cover: Qt.resolvedUrl("Cover.qml")
    initialPage: Qt.resolvedUrl("MainPage.qml")
    allowedOrientations: Orientation.All
}
