set(TEST_APP test_mr_logging)
set(SOURCE test_base_log.cpp ../src/base_log.cpp)

find_package(Boost REQUIRED)

include_directories(../include ${Boost_INCLUDE_DIRS})

add_executable(${TEST_APP} ${SOURCE})

target_link_libraries(${TEST_APP} ${Boost_LIBRARIES})
