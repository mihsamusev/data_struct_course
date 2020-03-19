#include <iostream>
#include "dynamic_array.h"

using namespace datastructures;

int main(int argc, char* argv[]) {
    DynamicArray d = DynamicArray(16);
    d.Add(3);
    d.Add(5);
    d.Add(7);
    std::cout << "Dynamic array is empty?" << d.isEmpty() << std::endl;
    std::cout << "Ok whats the size?" << d.Size() << std::endl;
    std::cout << "Ok whats the content?" << std::endl;
    for (size_t i = 0; i < d.Size(); i++)
    {
        std::cout << i << ": " << d.Get(i) << std::endl;
    }
    
    return 0;
}