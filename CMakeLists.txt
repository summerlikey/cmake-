#版本
cmake_minimum_required(VERSION 3.0)
#项目名
project(cmake-demo)

#cmake模式
set(CMAKE_BUILD_TYPE Debug)
set(demo-version "3.0")
#设置可执行文件路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#设置动态库输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

#三方库
set(THIRD_PARTY_LIBS
        ${OpenCV_LIBS}
)

#三方头文件目录
set(THIRD_INCLUDE_DIRS
        ${OpenCV_INCLUDE_DIRS}
        ${Boost_INCLUDE_DIRS}
)

#本地的lib库文件
set(INTERNAL_LIB

)

#本地的include头文件
set(INTERNAL_INCLUDE
        ${PROJECT_SOURCE_DIR}/include)

        
#测试暂时不看
enable_testing()

############### source and test ######################
#头文件搜索目录，本地和第三方的
include_directories(
        ${PROJECT_SOURCE_DIR}/src
        ${INTERNAL_INCLUDE}
        ${THIRD_INCLUDE_DIRS})
#本地库文件搜索目录
link_libraries(${INTERNAL_LIB})

add_subdirectory(src)
add_subdirectory(test)
