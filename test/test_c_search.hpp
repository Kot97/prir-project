#pragma once

#include <serial_.h>
#include <openmp_.h>
#include "test_search.hpp"

TEST_SEARCH(Serial, serial)
TEST_SEARCH(OpenmpFor, openmp_parallel_for)
TEST_SEARCH(OpenmpTask, openmp_task)