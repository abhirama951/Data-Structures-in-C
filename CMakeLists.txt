cmake_minimum_required(VERSION 3.10)
project(LinkedListExample C)

# Set your source and include directories
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Src)
set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Inc)

# Add the library
add_library(linkedlist ${SRC_DIR}/linked_list.c)
add_library(stack_array ${SRC_DIR}/stack_arr.c)
add_library(doublylinkedlist ${SRC_DIR}/doublelinked_list.c)

# Add the executable
add_executable(main ${SRC_DIR}/main.c)

# Link the library to the executable
target_link_libraries(main linkedlist stack_array doublylinkedlist)

# Tell CMake where to find headers
target_include_directories(stack_array PUBLIC ${INC_DIR})
target_include_directories(linkedlist PUBLIC ${INC_DIR})
target_include_directories(doublylinkedlist PUBLIC ${INC_DIR})
target_include_directories(main PUBLIC ${INC_DIR})

