#include "MemorySimulatorParallel.h"
#include <iostream>
#include <thread>

void MemorySimulatorParallel::allocateMemoryInThread(int threadID) {
    int* memory = new int(100 + threadID);
    std::cout << "Thread " << threadID << " allocated memory at " << memory
        << " with value: " << *memory << std::endl;
    delete memory;
}

void MemorySimulatorParallel::startMemoryAllocation() {
    std::thread t1(&MemorySimulatorParallel::allocateMemoryInThread, this, 1);
    std::thread t2(&MemorySimulatorParallel::allocateMemoryInThread, this, 2);

    t1.join();
    t2.join();
}
