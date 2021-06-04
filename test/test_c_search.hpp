#pragma once

#include <serial_.h>
#include <openmp_.h>
#include "test_search.hpp"

TEST_SEARCH(Serial, serial)
TEST_SEARCH_OPENMP(OpenmpFor, openmp_parallel_for)