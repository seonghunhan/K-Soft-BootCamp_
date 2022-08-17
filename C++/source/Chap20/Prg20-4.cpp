/**************************************************************
 * Shape 추상 클래스,                                         *
 * Square과 Circle 구체 클래스의 인터페이스 파일              *
 **************************************************************/
#ifndef FACTORY_H
#define FACTORY_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

// Shape 베이스 클래스의 정의
class Shape  
{  
  public:
    static Shape* factory(string);
    virtual void draw() = 0 ; 
    virtual ~Shape();
}; 
// Square 클래스의 정의
class Square : public Shape  
{  
  private:
    Square();
  public:
    static Shape* factory();
    void draw();
};
// Circle 클래스의 정의
class Circle : public Shape  
{
  private:
    Circle();
  public:  
    static Shape* factory();
    void draw();
}; 
#endif