#ifndef DYNAMIC_ARRAY_H
#define  DYNAMIC_ARRAY_H

namespace datastructures
{
  class DynamicArray
  {
  private:
    std::unique_ptr<int> array_;
    size_t capacity_ = 0;
    size_t size_ = 0;
    void Resize(size_t factor);
  public:
    ~DynamicArray();
    DynamicArray(size_t capacity);
    int Size();
    bool isEmpty();
    int Get(int index);
    void Set(int index, int value);
    void Add(int value);
    void Shrink();
    //void Remove(int value);
    //void Clear();
    //void Iterator();
  };
}

#endif
