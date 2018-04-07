import Music 1.0

import QtQuick 2.9
import QtQuick.Controls 2.2

Page {
    id: page
    width: 600
    height: 400

    header: Label {
        id: pageTitleLabel
        text: qsTr("Metronome")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10

        background: Rectangle {
            width: parent.width / 5 + 30

            anchors.left: parent.left
            anchors.top: parent.top
            anchors.bottom: parent.bottom

            anchors.topMargin: -20
            anchors.leftMargin: -20

            radius: 20
            border.color: "black"
            border.width: 2

            color: "lightgrey"
        }

        Slider {
            id: volumeSlider
            anchors.verticalCenter: pageTitleLabel.verticalCenter
            anchors.right: pageTitleLabel.right
            anchors.rightMargin: 20

            from: 0
            to: 100
            stepSize: 1
            value: 50

            Connections {
                target: metronome
                onValueChanged: setVolume(volumeSlider.value)
            }
        }

        Text {
            id: volumeText

            height: volumeSlider.height
            anchors.verticalCenter: parent.verticalCenter
            anchors.right: volumeSlider.left
            anchors.rightMargin: 20

            text: qsTr("Volume: ") + volumeSlider.value + qsTr("%")
            font.pixelSize: 2 / 3 * height
        }
    }
    
    Metronome {
        id: metronome
    }

    Slider {
        id: tempoSlider
        height: 40
        width: parent.width - 40
        anchors.centerIn: parent

        stepSize: 1
        from: 20
        to: 300
        value: 120

        Connections {
            target: metronome
            onValueChanged: setTempo(tempoSlider.value)
        }
    }

    Button {
        id: playButton

        width: parent.width - 40
        height: 80

        anchors.bottom: parent.bottom
        anchors.bottomMargin: 20
        anchors.horizontalCenter: parent.horizontalCenter

        text: checked ? qsTr("Stop") : qsTr("Play")
        font.pixelSize: 2 / 3 * height

        checkable: true

        background: Rectangle {
            anchors.fill: parent
            radius: 10
            border.width: 2
            border.color: (parent.hovered) ? "red" : "black"
            color: parent.checked ? "grey" : "lightgrey"
        }

        Connections {
            target: metronome
            onClicked: playStopButtonPressed()
        }
    }
    
    
    
    Text {
        id: tempoTextInt

        text: qsTr("Tempo: ") + tempoSlider.value + qsTr(" bpm")
        font.pointSize: 24

        anchors.bottom: tempoSlider.top
        anchors.bottomMargin: 20
        anchors.horizontalCenter: tempoSlider.horizontalCenter
    }

    
}
