#pragma once
#ifndef MEMORY_BLOCK_ALLOCATOR_H
#define MEMORY_BLOCK_ALLOCATOR_H

#include <vector>
#include <iostream>

class MemoryBlockAllocator {
private:
    std::vector<int*> memoryBlocks;  // Vector to store allocated blocks
    const int BLOCK_SIZE = 3;  // Size of each block
    const int NUM_BLOCKS = 5;  // Number of blocks to allocate

public:
    MemoryBlockAllocator();  // Constructor to pre-allocate memory blocks
    ~MemoryBlockAllocator(); // Destructor to free memory blocks
};

#endif // MEMORY_BLOCK_ALLOCATOR_H
