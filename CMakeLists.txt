cmake_minimum_required (VERSION 3.0)
project (CTextDemosAndTests)
# The version number.
# set (CText_VERSION_MAJOR 1)
# set (CText_VERSION_MINOR 0)

# Uncomment below to build and run in Unicode
# add_definitions(-DUNICODE -D_UNICODE)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

 add_definitions(-DUNICODE -D_UNICODE)
 set(CMAKE_DEBUG_POSTFIX _d)
# add the binary tree to the search path for include files
include_directories("${PROJECT_BINARY_DIR}")
include_directories("${CMAKE_SOURCE_DIR}/CText")
include_directories("${CMAKE_SOURCE_DIR}/Tests")
 
add_executable(UnitTests 
Tests/UnitTests.cpp
Tests/Main.cpp
Tests/terminal.cpp
)

add_subdirectory (Demos/CollectSentences)
add_subdirectory (Demos/PaddRightLines)
add_subdirectory (Demos/SortLines)
add_subdirectory (Demos/TrimLines)
add_subdirectory (Demos/WordFrequencies)
add_subdirectory (Demos/HighlightWords)

set_target_properties( UnitTests PROPERTIES  VS_DEBUGGER_WORKING_DIRECTORY "$<TARGET_FILE_DIR:UnitTests>")
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT UnitTests)
set_property(TARGET UnitTests PROPERTY
  MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

file(COPY ${PROJECT_SOURCE_DIR}/Demos/data DESTINATION ${CMAKE_SOURCE_DIR}/build/Debug)
file(COPY ${PROJECT_SOURCE_DIR}/Demos/data DESTINATION ${CMAKE_SOURCE_DIR}/build/Release)