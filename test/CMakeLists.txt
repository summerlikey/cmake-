#所有测试cpp文件名，都会生产一个可执行文件
SET(TEST_SOURCES test1 test2)

FOREACH (test_src ${TEST_SOURCES})
    ADD_EXECUTABLE(${test_src} ${test_src}.cpp)
    TARGET_LINK_LIBRARIES(${test_src} my_shared_lib ${THIRD_PARTY_LIBS}  ${INTERNAL_LIB})
    ADD_TEST(${test_src} ${test_src})
ENDFOREACH (test_src)