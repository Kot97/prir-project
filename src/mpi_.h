#pragma once

#include <mpi.h>
#include <stdlib.h>
#include "serial_.h"
#include "openmp_.h"

#ifdef __cplusplus
extern "C" {
#endif

void mpi(const MPI_Comm comm, double *max, const double *a, const double *b);
void mpi_openmp(const MPI_Comm comm, double *max, const double *a, const double *b, unsigned int thread_count);

#ifdef __cplusplus
}
#endif