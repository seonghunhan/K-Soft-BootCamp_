/**************************************************************
 * Point와 Multipoint 클래스의 구현 파일                      *
 **************************************************************/
#include "composite.h"

// Point의 생성자
Point::Point(double x, double y)
{
  point.first = x;
  point.second = y;
}
// Point의 show 멤버 함수
void Point::show()
{
  cout << "(" << point.first << " , " << point.second << ")" << endl ;
}
// Multipoint의 생성자
Multipoint::Multipoint()
{
  size = 0;
}
// Multipoint의 addPoint 멤버 함수
void Multipoint::addPoint(Figure* point)
{
  points.push_back(point);
  size++;
}
// Multipoint의 show 멤버 함수
void Multipoint::show()
{
  for(int i = 0; i < size; i++)
  {
    points[i]->show();
  }    
}