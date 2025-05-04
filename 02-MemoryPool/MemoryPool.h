#ifndef MEMORYPOOL_H
#define MEMORYPOOL_H

#include <iostream>
#include <deque>

class MemoryPool 
{
private:
    std::deque<int*> pool;  // Simulating a memory pool using deque
    const int POOL_SIZE = 5;  // Number of blocks in the pool

public:
    // Constructor: Pre-allocate memory blocks in the pool
    MemoryPool(); 
    
    // Destructor: Free memory when the pool goes out of scope
    ~MemoryPool();
    
    // Allocate memory from the pool
    int* allocate();
    
    // Return memory to the pool
    void deallocate(int* ptr);
};

#endif
