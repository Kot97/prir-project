#include "parameters3.hpp"
#include <serial_.h>
#include <openmp_.h>

// ./benchmark3 --benchmark_out="../../data/x/benchmark3.json" --benchmark_out_format=json --benchmark_report_aggregates_only=true

BENCHMARK_SEARCH(BM_c_serial, serial)
BENCHMARK_SEARCH(BM_openmp_for, openmp_parallel_for)
BENCHMARK_SEARCH(BM_openmp_task, openmp_task)