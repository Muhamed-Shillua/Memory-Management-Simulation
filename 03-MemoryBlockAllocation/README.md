# Memory Block Allocation Simulation

## Overview
This simulation shows how to manage memory allocation in fixed-size blocks. This is particularly useful when the memory size needed is known in advance, and you want to avoid the overhead of dynamic memory allocation during runtime.

## Code Explanation
- The `MemoryBlockAllocator` class pre-allocates a set number of memory blocks.
- Each block is allocated with a fixed size, and all blocks are deallocated when the class object is destroyed.

## Features
- Allocates a fixed number of memory blocks at the start.
- Deallocates all blocks in the destructor.
- Simple memory management approach using arrays.

## How to Use
1. Create an instance of the `MemoryBlockAllocator` class.
2. The blocks will be allocated automatically upon initialization.
3. The blocks will be deallocated when the class object is destroyed.
