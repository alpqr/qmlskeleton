cmake_minimum_required(VERSION 3.14)
project(contextinfo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Qml)
find_package(Qt6 COMPONENTS Quick)
find_package(Qt6 COMPONENTS Quick3D)

qt_add_executable(testapp
    main.cpp
)
target_link_libraries(testapp PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
    Qt::Quick3D
)

set(testapp_resource_files
    "main.qml"
    "Stuff/MyMaterial.qml"
    "Stuff/x.frag"
)

qt6_add_resources(testapp "testapp"
    PREFIX
        "/"
    FILES
        ${testapp_resource_files}
)
