cmake_minimum_required(VERSION 3.0)

project(CommonResourcesMethods)

set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include" )

set(CommResMeth_SRCS 
    ${PROJECT_SOURCE_DIR}/Angle.cpp
    ${PROJECT_SOURCE_DIR}/AssetManager.cpp
    ${PROJECT_SOURCE_DIR}/Button.cpp
    ${PROJECT_SOURCE_DIR}/FrameTimer.cpp
    ${PROJECT_SOURCE_DIR}/Menu.cpp
    ${PROJECT_SOURCE_DIR}/Methods.cpp
    ${PROJECT_SOURCE_DIR}/Scene.cpp
    ${PROJECT_SOURCE_DIR}/TextBox.cpp
    ${PROJECT_SOURCE_DIR}/TextManager.cpp
    ${PROJECT_SOURCE_DIR}/UDPSocket.cpp
)

include_directories(
    "${PROJECT_INCLUDE_DIR}"
    "${SFML_INCLUDE_DIR}"
)
link_directories("${SFML_BINARY_DIR}")

add_library(
    CommonResourcesMethods
    SHARED
    ${CommResMeth_SRCS}
)

target_link_libraries(
    CommonResourcesMethods
    sfml-main-d
    sfml-system-d
    sfml-window-d
    sfml-graphics-d
    sfml-network-d
    sfml-audio-d
    FLAC
    freetype
    jpeg
    ogg
    openal32
    vorbis
    vorbisenc
    vorbisfile
)
