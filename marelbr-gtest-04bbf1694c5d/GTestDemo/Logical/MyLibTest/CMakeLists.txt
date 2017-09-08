add_executable(MyLibTest "MyLibTests.cpp")
target_link_libraries(MyLibTest gtest_main gmock)
add_test(MyLibTestRun MyLibTest)
target_compile_options(MyLibTest PRIVATE -Wall)
