/**************************************************************
 * Circle 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef CIRCLE_H
#define CIRCLE_H
#include <cassert>
#include <iostream>
#include <iomanip>
using namespace std;

class Circle
{
private:
    int radious;
public:
    Circle(); // 생성자
    Circle(int rd);
    ~Circle();
    Circle(const Circle& circle);
    void print() const;
};
#endif