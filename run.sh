#!/bin/bash

g++ -o main -g main.cpp -lprofiler
export LD_PRELOAD=/usr/local/lib/libprofiler.so
export CPUPROFILE=main.prof
export CPUPROFILESIGNAL=12
./main &
killall -12 main
unset LD_PRELOAD
