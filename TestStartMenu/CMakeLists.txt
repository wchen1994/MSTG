cmake_minimum_required(VERSION 3.0)

project(TestStartMenu)

set(CommResMEths_INCLUDE_DIR "../CommonResourcesMethods/include")
set(ScnStartMenu_INCLUDE_DIR "../SceneStartMenu/include")

set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(PROJECT_SRCS "${PROJECT_SOURCE_DIR}/Source.cpp")

include_directories(
    ${PROJECT_SOURCE_DIR}
    ${SFML_INCLUDE_DIR}
    ${CommResMEths_INCLUDE_DIR}
    ${ScnStartMenu_INCLUDE_DIR}
)

link_directories(
    ${PROJECT_BINARY_DIR}
    ${SFML_BINARY_DIR}
)

add_executable(
    TestStartMenu
    ${PROJECT_SRCS}
)

target_link_libraries(
    TestStartMenu
    CommonResourcesMethods
    SceneStartMenu
)
