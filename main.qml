import QtQuick
import QtQuick3D

Item {
    View3D {
        anchors.fill: parent

        PerspectiveCamera {
            z: 600
        }

        DirectionalLight {
        }

        Model {
            source: "#Cube"
            eulerRotation.x: 30
            materials: PrincipledMaterial { }
        }
    }
}
