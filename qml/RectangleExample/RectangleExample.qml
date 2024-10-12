// RectangleExample.qml

import QtQuick
import QtQuick.Controls.Material

Rectangle {
    id: root
    width:400
    height:400
    color:"#c8c8c8"

    property int padding: 40
    property int duration: 4000
    property bool running: false

    Image {
        id: box
        x: root.padding;
        y: (root.height-height)/2
        source: "assets/green.svg"

        NumberAnimation on x {
            to: root.width - box.width - root.padding
            duration: root.duration
            running: root.running
        }
        RotationAnimation on rotation {
            to: 360
            duration: root.duration
            running: root.running
        }
    }

    MouseArea {
        anchors.fill: parent
        onClicked: root.running = true
    }

}
