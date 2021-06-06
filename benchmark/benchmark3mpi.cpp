#include "parameters3.hpp"
#include "../src/mpi_.h"

// mpic++ -o benchmark3mpi benchmark3mpi.cpp ../src/mpi_.c ../src/serial_.c ../src/openmp_.c -lpthread -fopenmp -lbenchmark
// mpirun -n N benchmark3mpi

MPI_BENCHMARK_SEARCH(BM_mpi, mpi)
//MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp, mpi_openmp, 1) // change thread_count when N changes, so that sum is 4

class NullReporter : public ::benchmark::BenchmarkReporter 
{
public:
  NullReporter() {}
  virtual bool ReportContext(const Context &) {return true;}
  virtual void ReportRuns(const std::vector<Run> &) {}
  virtual void Finalize() {}
};

int main(int argc, char **argv) 
{
    MPI_Init(&argc, &argv);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    ::benchmark::Initialize(&argc, argv);

    if(rank == 0)
    {
        ::benchmark::RunSpecifiedBenchmarks();
    }
    else 
    {
        NullReporter null;
        ::benchmark::RunSpecifiedBenchmarks(&null);
    }

    MPI_Finalize();
    return 0;
}
