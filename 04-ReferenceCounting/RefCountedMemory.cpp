#include "RefCountedMemory.h"
#include <iostream>

RefCountedMemory::RefCountedMemory(int value) {
    data = new int(value);
    refCount = new int(1);
    std::cout << "Allocated memory at " << data << " with value " << *data << std::endl;
}

RefCountedMemory::RefCountedMemory(const RefCountedMemory& other) {
    data = other.data;
    refCount = other.refCount;
    (*refCount)++;
    std::cout << "Copied memory at " << data << " with refCount: " << *refCount << std::endl;
}

RefCountedMemory::~RefCountedMemory() {
    (*refCount)--;
    std::cout << "Decrementing refCount: " << *refCount << std::endl;
    if (*refCount == 0) {
        delete data;
        delete refCount;
        std::cout << "Freed memory at " << data << std::endl;
    }
}

int RefCountedMemory::getValue() const {
    return *data;
}
