cmake_minimum_required(VERSION 3.0)

project(TestBulletHell)

set(CommResMeth_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../CommonResourcesMethods/include")
set(ScnBulletHell_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../SceneBulletHell/include")

set(PROJECT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")
set(PROJECT_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")
set(PROJECT_SRCS
    "${PROJECT_SOURCE_DIR}/Source.cpp"
)

include_directories(
    ${PROJECT_INCLUDE_DIR}
    ${ScnBulletHell_INCLUDE_DIR}
    ${CommResMeth_INCLUDE_DIR}
    ${SFML_INCLUDE_DIR}
)

link_directories(
    ${PROJECT_BINARY_DIR}
    ${SFML_BINARY_DIR}
)

add_executable(
    TestBulletHell
    ${PROJECT_SRCS}
)

target_link_libraries(
    TestBulletHell
    CommonResourcesMethods
    SceneBulletHell
)
