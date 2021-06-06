find_package(MPI REQUIRED)

add_executable( benchmark3 benchmark3.cpp )
target_link_libraries( benchmark3 PRIVATE
                    3 -lbenchmark -lbenchmark_main -lpthread -fopenmp)

add_executable( benchmark3mpi benchmark3mpi.cpp )
target_link_libraries( benchmark3mpi PRIVATE
                    3mpi -lbenchmark -lpthread -fopenmp ${MPI_LIBRARIES})