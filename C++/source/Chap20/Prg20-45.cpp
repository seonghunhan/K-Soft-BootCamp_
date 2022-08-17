/**************************************************************
 * 중재자 패턴 예제의 구현 파일                               *
 **************************************************************/
#include "mediator.h"

// Employee1의 getMessage 멤버 함수
void Employee1::getMessage(string message)
{
  cout << "Employee1 객체가 메시지를 받았습니다: " << message << endl;
}
// Employee2의 getMessage 멤버 함수
void Employee2::getMessage(string message)
{
    cout << "Employee2 객체가 메시지를 받았습니다: " << message << endl;
}
// Employee3의 getMessage 멤버 함수
void Employee3::getMessage(string message)
{
  cout << "Employee3 객체가 메시지를 받았습니다: " << message << endl;
}
// Employee4의 getMessage 멤버 함수
void Employee4::getMessage(string message)
{
  cout << "Employee4 객체가 메시지를 받았습니다: " << message << endl;
}
// Mediator 클래스의 생성자
Mediator::Mediator()
{
  employees.push_back(new Employee1());
  employees.push_back(new Employee2());
  employees.push_back(new Employee3());
  employees.push_back(new Employee4());
}
// Mediator 클래스의 소멸자
Mediator::~Mediator()
{
  for(int i = 0; i < employees.size(); i++)
  {
    delete employees[i];
  }
}
// 메시지를 브로드캐스트하는 sendMessage 멤버 함수
void Mediator::sendMessage(string message)
{
  for(int i = 0; i < employees.size(); i++)
  {
    employees[i]->getMessage(message);
  }
}