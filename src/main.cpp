#include <iostream>
#include "dynamicarray.h"

int main(int argc, char* argv[]) {

    struct Vertex vtx {10, 10 ,10};
    struct Vertex* vtxPtr = &vtx;
    struct Vertex* newVtxAddress;
    struct Vertex** newVtxAddressLocation = &newVtxAddress;

    std::cout << "Setting vertex struct on stack (incorrect)" << std::endl;
    setVertexOnStackIncorrect(vtx);
    printVertex(&vtx);

    std::cout << "Setting vertex struct on stack (correct)" << std::endl;
    setVertexOnStackCorrect(vtx);
    printVertex(&vtx);

    std::cout << "Setting vertex struct on heap (incorrect)" << std::endl;
    setVertexOnHeapIncorrect(newVtxAddress);
    std::cout << "crash!" << std::endl;
    // printVertex(newVtxAddress); // gives segmentation error

    std::cout << "Setting vertex struct on heap (correct)" << std::endl;
    setVertexOnHeapCorrect(newVtxAddressLocation);
    printVertex(newVtxAddress);

    return 0;
}