#include "mpi_environment.hpp"
#include "mpi_test_search.hpp"

C_MPI_TEST_SEARCH(Mpi, mpi)
C_MPI_TEST_SEARCH_OPENMP(MpiOpenmp, mpi_openmp)

// mpic++ -o mpi.test mpi_test.cpp ../src/mpi_.c ../src/serial_.c ../src/openmp_.c -lgtest -lpthread -fopenmp
// mpirun -n N mpi.test

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    testing::AddGlobalTestEnvironment(new MPIEnvironment);
    return RUN_ALL_TESTS();
}