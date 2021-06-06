#include "openmp_.h"

double openmp_parallel_for(const double *a, const double *b, unsigned int thread_count)
{
    unsigned long size = b - a;
    double max = *a;
    #pragma omp parallel for num_threads(thread_count) reduction(max:max)
    for(unsigned long i = 1; i < size; ++i) if(a[i] > max) max = a[i];
    return max;
}