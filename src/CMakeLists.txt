
#自己的源文件生成一个动态库
add_library(myfun_lib SHARED
    func1.cpp
    func2.cpp
    getimages.cpp
)
#动态库也要链接第三方库
target_link_libraries(myfun_lib ${THIRD_PARTY_LIBS})

#可执行文件
ADD_EXECUTABLE(${PROJECT_NAME} main.cpp)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${THIRD_PARTY_LIBS} myfun_lib ${INTERNAL_LIB})
