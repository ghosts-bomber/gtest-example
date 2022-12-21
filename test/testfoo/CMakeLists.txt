file(GLOB SRCS *.cpp)

link_directories(${DependsPath}/gtest/lib/)

ADD_EXECUTABLE(testfoo ${SRCS})
TARGET_LINK_LIBRARIES(testfoo
    libfoo
    money
    gtest
    gmock
)


add_test(NAME testfoo
         COMMAND testfoo)

set_target_properties(testfoo PROPERTIES FOLDER "TEST")