/**************************************************************
 * Person 클래스의 구현 파일                                  *
 **************************************************************/
#include "Circle.h"

 // 기본 생성자
Circle::Circle()
	: radious(0)
{
}
// 매개변수가 있는 생성자  
Circle::Circle(int rd)
	: radious(rd)
{
	
}
// 복사 생성자
Circle::Circle(const Circle& circle)
	: radious(circle.radious)
{
}
// 소멸자      
Circle::~Circle()
{
}
// 접근자 멤버 함수
void Circle::print() const
{
	cout << "Circle : " << 2 * 3.14 * radious << endl;
}