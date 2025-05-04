# Multi-threaded Memory Allocation Simulation

## Overview
This simulation demonstrates how memory can be allocated and deallocated in a **multi-threaded** environment. Each thread in the simulation will allocate a block of memory and perform operations on it.

## Code Explanation
- The `MemorySimulatorParallel` class contains a function `allocateMemoryInThread()` that allocates memory in a separate thread.
- Two threads are created to simulate concurrent memory allocation and deallocation.

## Features
- Demonstrates memory allocation in a multi-threaded environment.
- Uses `std::thread` to allocate memory in parallel.
- Shows how memory is managed by each thread.

## How to Use
1. Create an instance of `MemorySimulatorParallel`.
2. Call the `startMemoryAllocation()` function to simulate multi-threaded memory allocation.
3. The memory is allocated and deallocated in parallel by multiple threads.
