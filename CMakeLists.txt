cmake_minimum_required(VERSION 3.10)

project(shell++)

set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(shell
    src/main.cpp
    src/modules/argparse.cpp
    src/modules/command.cpp
    src/modules/dir.cpp
    src/modules/name.cpp
    src/modules/printsh.cpp
    src/commands/cd.cpp
    src/commands/help.cpp
    src/commands/history.cpp
)

# Set include directories
target_include_directories(shell PRIVATE
    include
)

# Set compiler flags
target_compile_options(shell PRIVATE
    -Wall
    -O2
)

# Set link libraries
target_link_libraries(shell PRIVATE
    stdc++fs
)