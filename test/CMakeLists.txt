project(test)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(${CMAKE_SOURCE_DIR}/source)

add_executable(${PROJECT_NAME}
        get-start/demo-window.cc
)

target_link_libraries(${PROJECT_NAME}
        GTest::GTest
        GTest::Main
        source
)