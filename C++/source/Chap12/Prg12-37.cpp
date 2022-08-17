/**************************************************************
 * Person 구체 클래스의 구현 파일                             *
 **************************************************************/
#include "person.h"

// 생성자
Person::Person(string nm)
: name(nm)
{
}
// print 멤버 함수
void Person::print()
{
  cout << "Name: " << name << endl;
}