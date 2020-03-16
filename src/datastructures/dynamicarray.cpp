#include <iostream>
#include "dynamicarray.h"

void setVertexOnStackIncorrect(Vertex v)
{
    v.x = 100;
    v.y = 200;
    v.z = 300;
}

void setVertexOnStackCorrect(Vertex& v)
{
    v.x = 100;
    v.y = 200;
    v.z = 300;
}

void setVertexOnStackIncorrect(Vertex* v)
{
    v->x = 100;
    v->y = 200;
    v->z = 300;
}

void setVertexOnHeapIncorrect(Vertex* v)
{
    v = new struct Vertex;
    v->x = 100;
    v->y = 200;
    v->z = 300;
}

void setVertexOnHeapCorrect(Vertex*& v)
{
    v = new struct Vertex;
    v->x = 100;
    v->y = 200;
    v->z = 300;
}

void setVertexOnHeapCorrect(Vertex** v)
{
    *v = new struct Vertex;
    (*v)->x = 100;
    (*v)->y = 200;
    (*v)->z = 300;
}

void printVertex(Vertex& v)
{
    std::cout << "X = " << v.x
            << " Y = " << v.y
            << " Z = " << v.z << std::endl;
}

void printVertex(Vertex* v)
{
    std::cout << "X = " << v->x
            << " Y = " << v->y
            << " Z = " << v->z << std::endl;
}