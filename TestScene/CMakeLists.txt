cmake_minimum_required(VERSION 3.0)

project(TestScene)

set(CommResMeth_INCLUDE_DIR "../CommonResourcesMethods/include")

set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(PROJECT_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

set(PROJECT_SRCS
    "${PROJECT_SRC_DIR}/Source.cpp"
)

include_directories(
    ${PROJECT_INCLUDE_DIR}
    ${CommResMeth_INCLUDE_DIR}
    ${SFML_INCLUDE_DIR}
)
link_directories(
    ${PROJECT_BINARY_DIR}
    ${SFML_BINARY_DIR}
)

add_executable(
    TestScene
    ${PROJECT_SRCS}
    ${CommResMeth_INCLUDE_DIR}
)

target_link_libraries(
    TestScene
    CommonResourcesMethods
    sfml-system-d
    sfml-window-d
    sfml-graphics-d
)
