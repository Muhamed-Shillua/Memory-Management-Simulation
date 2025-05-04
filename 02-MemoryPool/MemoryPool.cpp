#include "MemoryPool.h"

// Constructor: Pre-allocate memory blocks in the pool
MemoryPool::MemoryPool() 
{
    for (int i = 0; i < POOL_SIZE; ++i) 
    {
        pool.push_back(new int(0));  // Allocate memory block initialized to 0
    }
}

// Destructor: Free memory when the pool goes out of scope
MemoryPool::~MemoryPool() 
{
    for (int* ptr : pool) 
    {
        delete ptr;  // Deallocate memory blocks
    }
}

// Allocate memory from the pool
int* MemoryPool::allocate() 
{
    if (!pool.empty()) 
    {
        int* ptr = pool.back();
        pool.pop_back();  // Remove the block from the pool
        std::cout << "Allocated from pool: " << ptr << std::endl;
        return ptr;
    }
    std::cout << "No available memory in the pool!" << std::endl;
    return nullptr;
}

// Return memory to the pool
void MemoryPool::deallocate(int* ptr) 
{
    pool.push_back(ptr);  // Push the memory block back to the pool
    std::cout << "Deallocated and returned to pool: " << ptr << std::endl;
}
