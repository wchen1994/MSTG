cmake_minimum_required(VERSION 3.0)

project(RootProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE_OUTPUT_PATH "../build/Debug/x64")
set(LIBRARY_OUTPUT_PATH "../build/Debug/x64")


set(PROJECT_BINARY_DIR "../build/Debug/x64")

set(SFML_DIR "~/SFML-2.4.2")
set(SFML_INCLUDE_DIR "${SFML_DIR}/include")
set(SFML_BINARY_DIR "${SFML_DIR}/lib")

add_subdirectory(CommonResourcesMethods)
add_subdirectory(SceneStartMenu)
add_subdirectory(SceneBulletHell)
add_subdirectory(TestScene)
add_subdirectory(TestStartMenu)
add_subdirectory(TestBulletHell)

add_dependencies(SceneStartMenu CommonResourcesMethods)
add_dependencies(SceneBulletHell CommonResourcesMethods)
add_dependencies(TestScene CommonResourcesMethods)
add_dependencies(TestScene SceneStartMenu)
add_dependencies(TestBulletHell SceneBulletHell)
