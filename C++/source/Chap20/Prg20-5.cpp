/**************************************************************
 * Shape 추상 클래스,                                         *
 * Square과 Circle 구체 클래스의 구현 파일                    *
 **************************************************************/
#include "factory.h"

// Shape 클래스의 정적 factory 함수 정의
Shape* Shape::factory(string type)
{
  if(type == "square")
  {
    return (Square::factory());
  }
  else if(type == "circle")
  {
    return (Circle::factory());
  }
  else
  {
    cout << "주어진 형태의 도형 객체를 생성할 수 없습니다.";
    assert(false);
  }
}
// Shape 클래스의 가상 소멸자 정의
Shape::~Shape()
{
}
// Square 클래스의 생성자 정의
Square::Square()
{
    // 초기화와 관련된 처리
}
// Square 클래스의 정적 factory 함수 정의
Shape* Square::factory()
{
  return new Square();
}
// Square 클래스의 draw 함수 정의
void Square::draw()
{
  cout << "Square 객체를 그렸습니다." << endl;
}
// Circle 클래스의 정적 factory 함수 정의
Shape* Circle::factory()
{
  return new Circle();
}
// Circle 클래스의 생성자 정의
Circle::Circle()
{
  // 초기화와 관련된 처리
}
// Circle 클래스의 draw 함수 정의
void Circle::draw()
{
  cout << "Circle 객체를 그렸습니다." << endl;
}