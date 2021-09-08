project(game_number_test)

set(gtest_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../lib/googletest/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


link_directories(../lib)
add_executable(game_number_test_run GameNumberTest.cpp)

target_link_libraries(game_number_test_run game_number_lib)
target_link_libraries(game_number_test_run libgtest.a libgtest_main.a)

