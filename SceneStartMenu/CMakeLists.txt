cmake_minimum_required(VERSION 3.0)

project(SceneStartMenu)

set(CommResMeth_INCLUDE_DIR "../CommonResourcesMethods/include")

set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

set(ScnStartMenu_SRCS
    "${PROJECT_SOURCE_DIR}/SceneStartMenu.cpp"
)

include_directories(
    ${PROJECT_INCLUDE_DIR}
    ${SFML_INCLUDE_DIR}
    ${CommResMeth_INCLUDE_DIR}
)

link_directories(
    ${SFML_BINARY_DIR}
    ${PROJECT_BINARY_DIR}
)

add_library(
    SceneStartMenu
    SHARED
    ${ScnStartMenu_SRCS}
)

target_link_libraries(
    SceneStartMenu
    CommonResourcesMethods
    sfml-system-d
    sfml-window-d
    sfml-graphics-d
    sfml-network-d
    sfml-audio-d
)
