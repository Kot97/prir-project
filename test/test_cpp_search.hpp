#ifndef PARALLEL_BENCHMARK_TEST_CPP_SEARCH
#define PARALLEL_BENCHMARK_TEST_CPP_SEARCH

// #include "../src/3/cpp/serial_.hpp"
// #include "../src/3/cpp/std_.hpp"
// #include "../src/3/cpp/tbb_.hpp"
#include <3/cpp/serial_.hpp>
#include <3/cpp/std_.hpp>
#include "test_search.hpp"

TEST_SEARCH(SerialCpp, cpp3_serial)
TEST_SEARCH(TaskCpp, cpp3_task)
TEST_SEARCH(AsyncCpp, cpp3_async)

#endif