/**************************************************************
 * Figure, Point, Mulripoint 클래스의 인터페이스              *
 **************************************************************/
#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// Figure 클래스의 인터페이스
class Figure  
{
  public: 
  virtual void show() = 0;
};
// Point 클래스의 인터페이스
class Point : public Figure  
{
  private:
    pair<double, double> point;
  public: 
    Point(double x, double y);
    void show();
};
// Multipoint 클래스의 인터페이스
class Multipoint : public Figure  
{
  private:
    int size;
    vector<Figure*> points;
  public:
    Multipoint();
    void addPoint(Figure* point); 
    void show();
};
#endif