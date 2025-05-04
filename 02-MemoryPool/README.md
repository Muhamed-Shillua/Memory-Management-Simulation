# Memory Pool Simulation

## Overview
This simulation demonstrates how a **memory pool** works in managing memory. A memory pool is a technique that pre-allocates a set of memory blocks and then reuses them for future allocations. This can improve performance, especially in systems with frequent memory allocations and deallocations.

## Code Explanation
- The `MemoryPool` class contains a `std::deque<int*>` to simulate the pool of allocated memory blocks.
- When the `allocate()` function is called, it returns a block of memory from the pool, and when the `deallocate()` function is called, it returns the block back to the pool.

## Features
- Pre-allocated memory blocks to avoid frequent allocations.
- Deallocates memory when no longer needed.
- Efficient memory management.

## How to Use
1. Create an instance of the `MemoryPool` class.
2. Use the `allocate()` function to allocate memory.
3. Use the `deallocate()` function to return memory to the pool.
