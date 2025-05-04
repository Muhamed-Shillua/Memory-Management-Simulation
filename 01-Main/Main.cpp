#include <iostream>
#include "MemoryPool.h"
#include "MemoryBlockAllocator.h"
#include "RefCountedMemory.h"
#include "MemorySimulatorParallel.h"

int main() 
{
    // Memory Pool Simulation
    std::cout << "Memory Pool Simulation:" << std::endl;
    MemoryPool pool;
    int* ptr1 = pool.allocate();  // Allocate memory from pool
    pool.deallocate(ptr1);  // Deallocate memory and return it to the pool

    // Memory Block Allocation Simulation
    std::cout << "\nMemory Block Allocation Simulation:" << std::endl;
    MemoryBlockAllocator blockAllocator;  // Allocate fixed-size blocks of memory

    // Reference Counting Simulation
    std::cout << "\nReference Counting Simulation:" << std::endl;
    RefCountedMemory refMem1(100);  // Allocate memory with reference counting
    RefCountedMemory refMem2 = refMem1;  // Copying the memory object will increment refCount

    // Multi-threaded Memory Allocation Simulation
    std::cout << "\nMulti-threaded Memory Allocation Simulation:" << std::endl;
    MemorySimulatorParallel parallelSimulator;
    parallelSimulator.startMemoryAllocation();  // Simulate memory allocation in parallel threads

    return 0;
}
