find_package(MPI REQUIRED)

include(GoogleTest)

add_executable( all.test test_all.cpp )
target_link_libraries( all.test 3 -lgtest -lpthread -fopenmp )

add_test(NAME all COMMAND all.test)

add_executable( mpi.test mpi_test.cpp )
target_link_libraries( mpi.test 3mpi -lgtest -lpthread ${MPI_LIBRARIES} )