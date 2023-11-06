project(source)

set(SOURCE_FILES
        glad/glad.c
        get-start/demo-window.h
        get-start/demo-window.cc
)
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

find_library(GLFW glfw3 lib)
find_package(spdlog REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${spdlog_INCLUDE_DIR})

target_link_libraries(${PROJECT_NAME} PUBLIC
        ${GLFW}
        spdlog::spdlog $<$<BOOL:${MINGW}>:ws2_32>
)

if (APPLE)
    find_library(COREFOUNDATION CoreFoundation)
    find_library(COCOA Cocoa)
    find_library(IOKIT IOKit)
    find_library(COREVIDEO CoreVideo)

    target_link_libraries(${PROJECT_NAME} PUBLIC
            ${COREFOUNDATION}
            ${COCOA}
            ${IOKIT}
            ${COREVIDEO}
    )
endif ()