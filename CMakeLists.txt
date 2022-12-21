cmake_minimum_required(VERSION 2.8)

project(myProject)

#工程通用配置路径
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

SET(DependsPath ${PROJECT_SOURCE_DIR}/depends)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

#涵盖自己库的目录
link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})					# 项目生成目录

add_subdirectory(main)
add_subdirectory(libfoo)
add_subdirectory(libbar)
add_subdirectory(money)
enable_testing()
add_subdirectory(test)