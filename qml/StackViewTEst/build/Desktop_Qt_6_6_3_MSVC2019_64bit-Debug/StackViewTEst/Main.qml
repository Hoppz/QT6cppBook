import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material


ApplicationWindow  {
    id: window
    width: 380
    height: 600
    visible: true
    title: qsTr("Hello World")


    header: ToolBar {
        contentHeight: toolButton.implicitHeight

        // 进入下一个界面， 退出当前界面
        ToolButton {
            id: toolButton
            text: stackView.depth > 1 ? "\u25C0" : "\u2630"
            font.pixelSize: Qt.application.font.pixelSize * 1.6
            onClicked: {
                if (stackView.depth > 1) {
                    stackView.pop()
                } else {
                    drawer.open()
                }
            }
        }

        Label {
            text: stackView.currentItem.title
            anchors.centerIn: parent
        }
    }

    Drawer {
        id: drawer
        x: 10
        width: window.width * 0.66
        height: window.height

        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("Profile")
                width: parent.width
                onClicked: {
                    stackView.push("Profile.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("About")
                width: parent.width
                onClicked: {
                    stackView.push("About.qml")
                    drawer.close()
                }
            }
        }
    }

    StackView {
        id: stackView
        anchors.fill: parent
        initialItem: Home {}
    }



}
