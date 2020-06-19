#版本
cmake_minimum_required(VERSION 3.0)
#项目名
project(veh)

#cmake模式
set(CMAKE_BUILD_TYPE Release)

#设置可执行文件路径todo
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#设置动态库输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

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
)

#本地的include头文件
set(INTERNAL_INCLUDE
        ${PROJECT_SOURCE_DIR}/include)
#本地的lib库文件
set(INTERNAL_LI
        ${PROJECT_SOURCE_DIR}/lib/*.a
        ${PROJECT_SOURCE_DIR}/lib/*.so)


#测试暂时不看
#enable_testing()

############### source and test ######################
#头文件搜索目录，本地和第三方的
include_directories(${INTERNAL_INCLUDE}
                    ${THIRD_INCLUDE_DIRS})
#本地库文件搜索目录
link_libraries(${INTERNAL_LIB})

add_subdirectory(src)
add_subdirectory(test)
