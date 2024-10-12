import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    header: ToolBar {
        contentHeight: toolButton.implicitHeight

        // 进入下一个界面， 退出当前界面
        ToolButton {
            id: toolButton
            text: "\u2630"
            font.pixelSize: Qt.application.font.pixelSize * 1.6
            // onClicked: {
            //     if (stackView.depth > 1) {
            //         stackView.pop()
            //     } else {
            //         drawer.open()
            //     }
            // }
        }

        Label {
            text: stackView.currentItem.title
            anchors.centerIn: parent
        }
    }
    Rectangle {
        anchors.fill: parent
        border.color : "red"

        Row {

            spacing: 10
            anchors.centerIn: parent



            Label {
                id: rec_lab

                text: ""
                font.pixelSize: 20
            }

            Button{
                id: btn_get
                text: "获取"                //按钮显示文字
                width: 80                 //按钮宽度
                height: 40                 //按钮高度

                onClicked: {
                    rec_lab.text = myQmlClass.getValue()
                }
            }

            TextField {
                id: text_in

                width:80
                height:40
                color: "white"

            }

            Button{
                id: btn_set
                text: "设置"                //按钮显示文字
                width: 80                 //按钮宽度
                height: 40                 //按钮高度

                onClicked: {
                     myQmlClass.setValue( text_in.text );
                }
            }
        }
    }


}
