#pragma once

#include "clew/clew.h"

struct BitonicCLArgs
{
  cl_kernel        bitonic512;
  cl_kernel        bitonicPassK;
  cl_command_queue cmdQueue;
};

void bitonic_sort_gpu(cl_mem a_buffer, int a_N, BitonicCLArgs other);
void bitonic_sort_gpu_simple(cl_mem a_data, int a_N, BitonicCLArgs other);