cmake_minimum_required(VERSION 3.10)
project(LinkedListExample C)

# Always build with debug symbols by default
set(CMAKE_BUILD_TYPE Debug)

# Optional: explicitly control compiler flags
set(CMAKE_C_FLAGS_DEBUG "-g -O0")

# Set your source and include directories
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Src)
set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Inc)

# Add the library
add_library(linkedlist ${SRC_DIR}/linked_list.c)
add_library(stackarray ${SRC_DIR}/stack_arr.c)
add_library(doublylinkedlist ${SRC_DIR}/doublelinked_list.c)
add_library(stacklinkedlist ${SRC_DIR}/stack_ll.c)
add_library(queuearray ${SRC_DIR}/queue_array.c)
add_library(queuelist ${SRC_DIR}/queue_list.c)

# Add the executable
add_executable(main ${SRC_DIR}/main.c)

# Make linkedlist a dependancy for stack_linkedlist
target_link_libraries(stacklinkedlist PUBLIC linkedlist)
target_link_libraries(queuelist PUBLIC linkedlist)

# Link the library to the executable
target_link_libraries(main linkedlist stackarray doublylinkedlist stacklinkedlist queuearray queuelist) 

# Tell CMake where to find headers
target_include_directories(stackarray PUBLIC ${INC_DIR})
target_include_directories(linkedlist PUBLIC ${INC_DIR})
target_include_directories(doublylinkedlist PUBLIC ${INC_DIR})
target_include_directories(stacklinkedlist PUBLIC ${INC_DIR})
target_include_directories(queuearray PUBLIC ${INC_DIR})
target_include_directories(queuelist PUBLIC ${INC_DIR})
target_include_directories(main PUBLIC ${INC_DIR})


