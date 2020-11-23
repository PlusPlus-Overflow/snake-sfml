cmake_minimum_required(VERSION 3.1)

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin) Para cambiar la ruta del target

set (CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set the project name and version
project(snake-sfml)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_DEBUG " -fsanitize=address -pedantic-errors -Wall -Wextra -Werror -DDEBUG -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall")

# Source code
include_directories(
  "include/snake" 
  "include/SFML" 
)

file(GLOB SOURCES 
  "src/snake/*.cc"
)

# Libraries path
LINK_DIRECTORIES(lib/)

add_executable(snake ${SOURCES})
target_link_libraries(snake sfml-audio sfml-graphics sfml-system sfml-window)