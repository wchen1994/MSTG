cmake_minimum_required(VERSION 3.0)

project(SceneBulletHell)

set(CommResMeh_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../CommonResourcesMethods/include")

set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

set(PROJECT_SRCS
    "${PROJECT_SOURCE_DIR}/BehaviourController.cpp"
    "${PROJECT_SOURCE_DIR}/Board.cpp"
    "${PROJECT_SOURCE_DIR}/Collider.cpp"
    "${PROJECT_SOURCE_DIR}/GameObject.cpp"
    "${PROJECT_SOURCE_DIR}/ObjCreator.cpp"
    "${PROJECT_SOURCE_DIR}/Renderer.cpp"
    "${PROJECT_SOURCE_DIR}/SceneBulletHell.cpp"
)

include_directories(
    ${PROJECT_INCLUDE_DIR}
    ${SFML_INCLUDE_DIR}
    ${CommResMeh_INCLUDE_DIR}
)
link_directories(
    ${PROJECT_BINARY_DIR}
    ${SFML_BINARY_DIR}
)

add_library(
    SceneBulletHell
    SHARED
    ${PROJECT_SRCS}
)

target_link_libraries(
    SceneBulletHell
    CommonResourcesMethods
)
