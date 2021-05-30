#pragma once
#include "serial_.h"

#ifdef __cplusplus
extern "C" {
#endif

double openmp_parallel_for(const double *a, const double *b);
double openmp_task(const double *a, const double *b);

#ifdef __cplusplus
}
#endif