import QtQuick

Item {
    // set width based on given background
    width: bg.width
    height: bg.height

    Rectangle { // nice background image
        id: bg
        width:300; height:300;
    }

    MouseArea {
        id: backgroundClicker
        // needs to be before the images as order matters
        // otherwise this mousearea would be before the other elements
        // and consume the mouse events
        anchors.fill: parent
        onClicked: {
            // reset our little scene
            circle.x = 84
            box.rotation = 0
            triangle.rotation = 0
            triangle.scale = 1.0
        }
    }

    ClickableImage {
        id: circle
        x: 84; y: 68
        source: "assets/blue.svg"
        antialiasing: true
        onClicked: {
            // increase the x-position on click
            x += 20
        }
    }

    ClickableImage {
        id: box
        x: 300; y: 68
        source: "assets/green.svg"
        antialiasing: true
        onClicked: {
            // increase the rotation on click
            rotation += 15
        }
    }

    ClickableImage {
        id: triangle
        x: 500; y: 68
        source: "assets/red.svg"
        antialiasing: true
        smooth: true
        onClicked: {
            // several transformations
            rotation += 15
            scale += 0.05
        }
    }
}

