#pragma once

struct Vertex {
    int x;
    int y;
    int z;
};

void setVertexOnStackIncorrect(Vertex v);
void setVertexOnStackCorrect(Vertex& v);
void setVertexOnStackIncorrect(Vertex* v);
void setVertexOnHeapIncorrect(Vertex* v);
void setVertexOnHeapCorrect(Vertex*& v);
void setVertexOnHeapCorrect(Vertex** v);
void printVertex(Vertex& v);
void printVertex(Vertex* v);
