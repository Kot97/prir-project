#pragma once

#include <gtest/gtest.h>
#include <mpi.h>

class MPIEnvironment : public ::testing::Environment
{
public:
    void SetUp() override
    {
        char** argv;
        int argc = 0;
        int mpiError = MPI_Init(&argc, &argv);
        ASSERT_FALSE(mpiError);
    }
    void TearDown() override
    {
        int mpiError = MPI_Finalize();
        ASSERT_FALSE(mpiError);
    }
    virtual ~MPIEnvironment() {}
};