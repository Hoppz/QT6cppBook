import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import Qt.labs.platform as Platform

ApplicationWindow {
    id: window
    visible: true
    width: 640
    height: 480
    title: qsTr("ImageViewer")
    // ...
    function openFileDialog() { fileOpenDialog.open(); }
    function openAboutDialog() { aboutDialog.open(); }

    background: Rectangle {
        color: "darkGray"
    }

    header: ToolBar {
        Flow {
            anchors.fill: parent
            ToolButton {
                text: qsTr("Open")
                icon.name: "document-open"
                onClicked: fileOpenDialog.open()
            }
        }
    }

    Platform.FileDialog {
        id: fileOpenDialog
        title: "Select an image file"
        folder: StandardPaths.writableLocation(StandardPaths.DocumentsLocation)
        nameFilters: [
            "Image files (*.png *.jpeg *.jpg)",
        ]
        onAccepted: {
            image.source = fileOpenDialog.file
        }
    }


    menuBar: MenuBar {
            Menu {
                title: qsTr("&File")
                MenuItem {
                    text: qsTr("&Open...")
                    icon.name: "document-open"
                    onTriggered: window.openFileDialog()
                }
            }

            Menu {
                title: qsTr("&Help")
                MenuItem {
                    text: qsTr("&About...")
                    onTriggered: window.openAboutDialog()
                }
            }
        }

    Image {
        id: image
        anchors.fill: parent
        fillMode: Image.PreserveAspectFit
        asynchronous: true
    }

    Dialog {
        id: aboutDialog
        title: qsTr("About")
        Label {
            anchors.fill: parent
            text: qsTr("QML Image Viewer\nA part of the QmlBook\nhttp://qmlbook.org")
            horizontalAlignment: Text.AlignHCenter
        }

        standardButtons: StandardButton.Ok
    }

}
