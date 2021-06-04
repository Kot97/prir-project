#pragma once
#include "serial_.h"

#ifdef __cplusplus
extern "C" {
#endif

double openmp_parallel_for(const double *a, const double *b, unsigned int thread_count);

#ifdef __cplusplus
}
#endif