add_library( 3
    3/c/serial_.c 3/c/openmp_.c )
target_include_directories(3 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(3 -lpthread -fopenmp)

add_library( 3mpi 
    3/c/serial_.c 3/c/openmp_.c 3/c/mpi_.c )
target_include_directories(3mpi PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(3mpi -fopenmp)