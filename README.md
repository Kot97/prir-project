Simplified benchmark for PK project based on my old project: https://github.com/Kot97/parallel_benchmark

Problem: Finding maximum value in vector  

Project structure:  
    /src/task/model/ - contain solutions of problems in C and C++  
    /benchmark/ - contain code which generate time data  
    /data/env/ - contain time data for plotting  
    /plot/env/ - contain plots of task size vs execution time  
    /test/ - contain unit tests of solutions  

Build system: CMake  
Unit tests: googletest  
Benchmarks: googlebenchmark  
Plots: bmplot

