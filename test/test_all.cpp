#include "test_c_search.hpp"

// clang++ -o all.test test_all.cpp -lgtest -fopenmp -lpthread

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}