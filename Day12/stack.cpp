#ifndef STACK_CPP
#define STACK_CPP
#include "stack.h"

// 생성자
template<typename T>
Stack<T>::Stack(int capacity)
    : capacity(capacity), size(0)
{
    ptr = new T[capacity];
}
// 소멸자
template<typename T>
Stack<T>::~Stack()
{
    delete[] ptr;
}
// push 함수
template<typename T>
void Stack<T>::push(const T& element)
{
    if (size < capacity)
    {
        ptr[size] = element;
        size++;
    }
    else
    {
        cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
        assert(false);
    }
}
// pop 함수
template<typename T>
T Stack<T>::pop()
{
    if (size > 0)
    {
        T temp = ptr[size - 1];
        //ptr[size - 1] = 0; 
        size--;
        return temp;
    }
    else
    {
        cout << "스택이 비어서 삭제할 수 없습니다." << endl;
        assert(false);
    }
}
template<typename T>
T Stack<T>::peek()
{
    if (size > 0)       
        return ptr[size - 1];
}
template<typename T>
void Stack<T>::printStack()
{
    cout << "\n STACK [ ";
    for (int i = 0; i < size; i++)
        cout << ptr[i] << " ";
        //cout << stack[i] << " ";
    cout << "] ";
}
#endif