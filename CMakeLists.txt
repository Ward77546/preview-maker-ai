cmake_minimum_required(VERSION 3.16)
project(preview-maker-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(previewmakerai
    src/main.cpp
    src/extract.cpp
    src/compose.cpp
    src/text.cpp
    src/cli.cpp
)

target_include_directories(previewmakerai PRIVATE include)

if(WIN32)
    target_link_libraries(previewmakerai PRIVATE userenv)
endif()
