﻿/************************************************************************
 * Circle 클래스를 구현하는 구현 파일                                   *
 * 모든 멤버 함수를 정의                                                *
 * 이 파일을 컴파일 하려면 앞 부분에서 인터페이스 파일을 읽어 들여야 함 *
 ************************************************************************/
# include "circle.h"
/*************************************************************
 * 매개변수가 하나 있는 생성자                               *
 * 객체를 어떤 값으로 초기화해서 생성하고 싶을 때 사용       * 
 * 매개변수가 0 또는 양의 정수인지 확인하고,                 * 
 * 아니라면 프로그램을 중단                                  *
 *************************************************************/
Circle::Circle(double rds)
: radius(rds)
{
  if(radius < 0.0)
  {
    assert(false);
  }
}
/*************************************************************
 * 기본 생성자                                               *
 * 원을 반지름 0.0으로 초기화하여 생성                       *
 *************************************************************/
Circle::Circle()
: radius(0.0)
{
}
/***********************************************************************
 * 복사 생성자이며 다른 원의 반지름을 기반으로 객체를 초기화해서 생성  *
 * 복사 대상 객체가 이미 반지름 0 또는 양의 정수라는 것이              * 
 * 확인되었을 것이므로 별도의 확인을 하지 않음                         *
 ***********************************************************************/
Circle::Circle(const Circle& circle)
: radius(circle.radius)
{
}
/*************************************************************
 * 객체가 파괴될 때                                          *
 * 객체와 관련된 것을 정리해주는 소멸자                      *
 *************************************************************/
Circle::~Circle()
{
}
/*************************************************************
 * setRadius 함수의 정의                                     *
 * 원의 반지름을 변경하고 싶을 때 사용                       *
 * 입력된 매개변수가 0 또는 양의 정수인지 확인               *
 *************************************************************/
void Circle::setRadius(double value)
{
  radius = value;
  if(radius < 0.0)
  {
    assert(false);
  }
}
/*****************************************************************
 * getRadius 함수 정의                                           *
 * 원의 반지름을 리턴                                            * 
 * 호스트 객체의 데이터 멤버를 변경하지 않게 const 한정자를 붙임 *
 *****************************************************************/
double Circle::getRadius() const
{
  return radius;
}
/*****************************************************************
 * getArea 함수 정의                                             * 
 * 원의 넓이를 리턴                                              *
 * 호스트 객체의 데이터 멤버를 변경하지 않게 const 한정자를 붙임 *
 *****************************************************************/
double Circle::getArea() const
{
  const double PI  = 3.14; 
  return (PI * radius * radius);
}
/*****************************************************************
 * getPerimeter 함수 정의                                        * 
 * 원의 둘레를 리턴                                              * 
 * 호스트 객체의 데이터 멤버를 변경하지 않게 const 한정자를 붙임 *
 *****************************************************************/
double Circle::getPerimeter() const
{
  const double PI  = 3.14; 
  return (2 * PI * radius);
}