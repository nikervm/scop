CMAKE_MINIMUM_REQUIRED(VERSION 3.17)
PROJECT(scop C)

SET(CMAKE_C_STANDARD 99)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(glfw glfw/src)

FIND_PACKAGE(OpenGL REQUIRED)

ADD_EXECUTABLE(scop main.c parser.c utils.c)
TARGET_LINK_LIBRARIES(scop glfw)
TARGET_LINK_LIBRARIES(scop OpenGL::GL)