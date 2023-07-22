cmake_minimum_required(VERSION 3.25)
project(klausurtraining)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("D:\\Projekte\\Sandbox\\klausurtraininng\\clion\\klausurtraining\\googletest")

add_executable(my_tests Complex.cpp Complex.h VectorTemplate.h StackTemplate.h test_complex.cpp test_vector_template.cpp test_stack_template.cpp FunctorTemplate.h test_functor_template.cpp)
target_link_libraries(my_tests PRIVATE gtest gtest_main)
