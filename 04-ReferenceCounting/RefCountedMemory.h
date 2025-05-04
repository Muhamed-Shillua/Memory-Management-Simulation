#pragma once
#ifndef REF_COUNTED_MEMORY_H
#define REF_COUNTED_MEMORY_H

class RefCountedMemory {
private:
    int* data;      // Pointer to the allocated data
    int* refCount;  // Pointer to the reference count

public:
    RefCountedMemory(int value);                  // Constructor
    RefCountedMemory(const RefCountedMemory& other); // Copy constructor
    ~RefCountedMemory();                          // Destructor

    int getValue() const;                         // Accessor for data
};

#endif // REF_COUNTED_MEMORY_H
