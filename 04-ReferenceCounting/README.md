# Reference Counting for Memory Management

## Overview
This simulation demonstrates memory management using **reference counting**. The idea is to keep track of how many references exist for a block of memory. When no references remain, the memory is automatically deallocated.

## Code Explanation
- The `RefCountedMemory` class manages a block of memory and a reference count.
- The reference count is incremented when a copy of the memory object is created, and decremented when the object is destroyed.
- When the reference count reaches zero, the memory is deallocated.

## Features
- Reference counting mechanism to track memory usage.
- Automatic deallocation when no references remain.
- Mimics behavior of smart pointers (`std::shared_ptr`).

## How to Use
1. Create an instance of `RefCountedMemory` with a value to allocate memory.
2. Copy the instance to see how reference count is managed.
3. The memory is automatically freed when the reference count reaches zero.
