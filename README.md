
[gperf cpuprofiler](http://gperftools.googlecode.com/svn/trunk/doc/cpuprofile.html)

## Introduction

To test turn on/off by signal

## Usage

`./run.sh`

default turn on when program start (write at run.sh)
you can remove it and send signal by yourself
sameway to turn off

If profiler started succeddfully, you'll see **Using signal 12 as cpu profiling switch **.

and when you send signal to stop it, message'll be **PROFILE: interrupts/evictions/bytes = 5164/2301/135704 **.

gl hf
