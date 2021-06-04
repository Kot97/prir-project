#include "parameters3.hpp"
#include <mpi_.h>

// mpirun benchmark1mpi --benchmark_out="../../data/1/benchmark1mpi.json" --benchmark_out_format=json --benchmark_report_aggregates_only=true

MPI_BENCHMARK_SEARCH(BM_mpi, mpi)
MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp_1, mpi_openmp, 1)
MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp_2, mpi_openmp, 2)
MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp_3, mpi_openmp, 3)
MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp_4, mpi_openmp, 4)
MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp_5, mpi_openmp, 5)
MPI_BENCHMARK_SEARCH_OPENMP(BM_mpi_openmp_6, mpi_openmp, 6)

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