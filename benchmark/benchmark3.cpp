#include "parameters3.hpp"
#include "../src/serial_.h"
#include "../src/openmp_.h"

// clang++ -o benchmark3 benchmark3.cpp ../src/serial_.c ../src/openmp_.c -lpthread -fopenmp -lbenchmark -lbenchmark_main
// ./benchmark3

BENCHMARK_SEARCH(BM_c_serial, serial)
BENCHMARK_SEARCH_OPENMP(BM_openmp_for_1, openmp_parallel_for, 1)
BENCHMARK_SEARCH_OPENMP(BM_openmp_for_2, openmp_parallel_for, 2)
BENCHMARK_SEARCH_OPENMP(BM_openmp_for_3, openmp_parallel_for, 3)
BENCHMARK_SEARCH_OPENMP(BM_openmp_for_4, openmp_parallel_for, 4)
BENCHMARK_SEARCH_OPENMP(BM_openmp_for_5, openmp_parallel_for, 5)
BENCHMARK_SEARCH_OPENMP(BM_openmp_for_6, openmp_parallel_for, 6)