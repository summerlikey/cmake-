#自己的源文件生成一个动态库
add_library(my_shared_lib SHARED
    optionimage.cpp
    optionpointcloud.cpp
    file.cpp
)

#可执行文件
ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} my_shared_lib ${THIRD_PARTY_LIBS} ${INTERNAL_LIB})
