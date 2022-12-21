
include_directories(${DependsPath}/gtest/googletest/include/)
include_directories(${DependsPath}/gtest/googlemock/include/)
include_directories(${DependsPath}/gtest/googletest/)
include_directories(${DependsPath}/gtest/googlemock/)

file(GLOB GTEST_SOURCE_FILES ${DependsPath}/gtest/googletest/src/*.cc)
file(GLOB GMOCK_SOURCE_FILES ${DependsPath}/gtest/googlemock/src/*.cc)

add_library(gtest STATIC ${GTEST_SOURCE_FILES})
add_library(gmock STATIC ${GMOCK_SOURCE_FILES})
set_target_properties(gtest PROPERTIES FOLDER "TEST")
set_target_properties(gmock PROPERTIES FOLDER "TEST")

add_subdirectory(testfoo)
