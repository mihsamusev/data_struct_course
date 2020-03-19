#include <iostream>
#include "dynamic_array.h"

using namespace datastructures;

DynamicArray::DynamicArray(size_t capacity = 16){
  if(capacity > 0){
    array_ = new int[capacity];
    capacity_ = capacity;
  }
}

DynamicArray::~DynamicArray(){
  delete[] array_;
  array_ = nullptr;
}

int DynamicArray::Size(){
  return size_;
}

bool DynamicArray::isEmpty(){
  return size_ == 0;
}

int DynamicArray::Get(int index){
  if (index >= size_){
    throw std::out_of_range("Index out of bounds");
  }
  return array_[index];
}

void DynamicArray::Set(int index, int value){
  if (index >= size_){
    throw std::out_of_range("Index out of bounds");
  }
  array_[index] = value;
}

void DynamicArray::Resize(size_t new_capacity){
  int* temp = new int[new_capacity];
  for (size_t i = 0; i < size_; i++){
    temp[i] = std::move(array_[i]);
  }
  delete[] array_;
  capacity_ = new_capacity;
  array_ = temp;
}

void DynamicArray::Shrink(){
  if (capacity_ > size_){
    Resize(size_);
  }
}
void DynamicArray::Add(int value){
    if(size_ + 1 > capacity_){
      Resize(2);
    }
    array_[size_] = value;
    size_++;
}