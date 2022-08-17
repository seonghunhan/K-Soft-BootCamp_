#pragma once
#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class Stack
{
private:
//public:
    T* ptr;
    int capacity;
    int size;
public:
    Stack(int capacity);
    ~Stack();
    void push(const T& element);
    T pop();
    T peek();
    void printStack();
};
