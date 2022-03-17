cmake_minimum_required(VERSION 3.14)
project(sponzatestapp LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core)
find_package(Qt6 COMPONENTS Gui)
find_package(Qt6 COMPONENTS Qml)
find_package(Qt6 COMPONENTS Quick)
find_package(Qt6 COMPONENTS Quick3D)

qt_add_executable(sponzatestapp
    main.cpp
)
target_link_libraries(sponzatestapp PUBLIC
    Qt::Core
    Qt::Gui
    Qt::Qml
    Qt::Quick
    Qt::Quick3D
)

set(sponzatestapp_resource_files
    "main.qml"
)

qt6_add_resources(sponzatestapp "sponzatestapp"
    PREFIX
        "/"
    FILES
        ${sponzatestapp_resource_files}
)
