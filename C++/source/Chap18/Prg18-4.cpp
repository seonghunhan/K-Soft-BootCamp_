/**************************************************************
 * List 클래스를 기반(복합)으로 구현한                        *
 * Stack 클래스의 인터페이스 파일                             *
 **************************************************************/
#ifndef STACK_H
#define STACK_H
#include "list.cpp"

// Stack 클래스 정의(List 클래스를 복합으로 포함)
template<typename T>
class Stack
{
  private:
    List<T> list;
  public:
    void push(const T& data);
    void pop();
    T& top() const;
    int size() const;
};
#endif