#pragma once

#include <benchmark/benchmark.h>
#include <cstdlib>

constexpr unsigned long min = 10000000;
constexpr unsigned long max = 1000000000;
constexpr unsigned long multiplier = 10;

constexpr int run_num = 20;
constexpr auto unit = benchmark::kMillisecond;

#define BENCHMARK_SEARCH(benchmark_name, function_name) \
static void benchmark_name(benchmark::State& state) \
{\
    for (auto _ : state)\
    {\
        state.PauseTiming();\
        unsigned long size = state.range(0);\
        double *a = (double*)malloc(sizeof(double)*size);\
        state.ResumeTiming();\
        function_name(a, a + size);\
        state.PauseTiming();\
        free(a);\
        state.ResumeTiming();\
    }\
}\
BENCHMARK(benchmark_name)->RangeMultiplier(multiplier)->Range(min, max)->Unit(unit)->UseRealTime()->Repetitions(run_num)\
->DisplayAggregatesOnly(true);

#define BENCHMARK_SEARCH_OPENMP(benchmark_name, function_name, thread_count) \
static void benchmark_name(benchmark::State& state) \
{\
    for (auto _ : state)\
    {\
        state.PauseTiming();\
        unsigned long size = state.range(0);\
        double *a = (double*)malloc(sizeof(double)*size);\
        state.ResumeTiming();\
        function_name(a, a + size, thread_count);\
        state.PauseTiming();\
        free(a);\
        state.ResumeTiming();\
    }\
}\
BENCHMARK(benchmark_name)->RangeMultiplier(multiplier)->Range(min, max)->Unit(unit)->UseRealTime()->Repetitions(run_num)\
->DisplayAggregatesOnly(true);

#define MPI_BENCHMARK_SEARCH(benchmark_name, function_name) \
static void benchmark_name(benchmark::State& state) \
{\
    for (auto _ : state)\
    {\
        state.PauseTiming();\
        unsigned long size = state.range(0);\
        double *a = (double*)malloc(sizeof(double)*size);\
        double *max = (double*)malloc(sizeof(double));\
        state.ResumeTiming();\
        function_name(MPI_COMM_WORLD, max, a, a + size);\
        state.PauseTiming();\
        free(a);\
        free(max);\
        state.ResumeTiming();\
    }\
}\
BENCHMARK(benchmark_name)->RangeMultiplier(multiplier)->Range(min, max)->Unit(unit)->UseRealTime()->Repetitions(run_num)\
->DisplayAggregatesOnly(true);

#define MPI_BENCHMARK_SEARCH_OPENMP(benchmark_name, function_name, thread_count) \
static void benchmark_name(benchmark::State& state) \
{\
    for (auto _ : state)\
    {\
        state.PauseTiming();\
        unsigned long size = state.range(0);\
        double *a = (double*)malloc(sizeof(double)*size);\
        double *max = (double*)malloc(sizeof(double));\
        state.ResumeTiming();\
        function_name(MPI_COMM_WORLD, max, a, a + size, thread_count);\
        state.PauseTiming();\
        free(a);\
        free(max);\
        state.ResumeTiming();\
    }\
}\
BENCHMARK(benchmark_name)->RangeMultiplier(multiplier)->Range(min, max)->Unit(unit)->UseRealTime()->Repetitions(run_num)\
->DisplayAggregatesOnly(true);
