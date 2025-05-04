#include "MemoryBlockAllocator.h"

// Constructor to pre-allocate memory blocks
MemoryBlockAllocator::MemoryBlockAllocator() {
    for (int i = 0; i < NUM_BLOCKS; ++i) {
        memoryBlocks.push_back(new int[BLOCK_SIZE]);  // Allocate a block of memory
        std::cout << "Allocated block " << i + 1 << " at address: " << memoryBlocks[i] << std::endl;
    }
}

// Destructor to free all allocated memory blocks
MemoryBlockAllocator::~MemoryBlockAllocator() {
    for (int* block : memoryBlocks) {
        delete[] block;  // Deallocate each block of memory
    }
}
