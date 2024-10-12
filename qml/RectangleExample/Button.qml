import QtQuick

Rectangle {
    id: root

    // 修改这个就相当于修改子模块的 Text .text
    property alias text: label.text
    signal clicked

    width:116; height: 26
    color: "lightsteelblue"
    border.color: "slategrey"

    Text{
        id: label
        anchors.centerIn: parent
        text: "Start"
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
        }
    }
}
