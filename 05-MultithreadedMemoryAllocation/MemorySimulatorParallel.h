#pragma once
#ifndef MEMORY_SIMULATOR_PARALLEL_H
#define MEMORY_SIMULATOR_PARALLEL_H

class MemorySimulatorParallel {
public:
    void allocateMemoryInThread(int threadID); // Memory allocation in a thread
    void startMemoryAllocation();              // Starts the threads
};

#endif // MEMORY_SIMULATOR_PARALLEL_H
