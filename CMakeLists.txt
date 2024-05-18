project(lockfree)

add_subdirectory(concurrentqueue)
add_subdirectory(readerwriterqueue)

include_directories(concurrentqueue readerwriterqueue)

add_library(${PROJECT_NAME}  INTERFACE IMPORTED GLOBAL)
target_link_libraries(${PROJECT_NAME} INTERFACE concurrent_queue readerwriter_queue)
target_include_directories(${PROJECT_NAME} INTERFACE include)
