/**************************************************************
 * 데코레이터 패턴 예제의 인터페이스 파일                     *
 **************************************************************/
#ifndef DECORATOR_H
#define DECORATOR_H
#include <string>
#include <iostream>
using namespace std;

// Component 클래스의 선언
class Component
{
  private:
    string text;
    public:
    Component(string text);
    void draw();
};
// Decorator 클래스의 선언
class Decorator
{
  private:
    Component component;
  public:
    Decorator(Component component);
    void draw();
};
#endif