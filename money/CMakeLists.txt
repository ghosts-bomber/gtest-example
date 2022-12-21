set(ProjectName "money")
project(${ProjectName})

set(SHARE_LIBS "")				# 全局依赖库的路径
set(SOURCE_FILES "")			# 全局源文件的路径
file(GLOB SOURCE_FILES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp" "*.c" "*.h")
# Declare the library
add_library(${ProjectName} STATIC
    ${SOURCE_FILES}
)
include_directories(./)
# Specify here the include directories exported
# by this library
target_include_directories(libfoo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
