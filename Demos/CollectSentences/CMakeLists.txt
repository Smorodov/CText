cmake_minimum_required (VERSION 3.0)
project (CollectSentences)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
 
# add the binary tree to the search path for include files
include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/../../")

add_executable(CollectSentences CollectSentences.cpp)
