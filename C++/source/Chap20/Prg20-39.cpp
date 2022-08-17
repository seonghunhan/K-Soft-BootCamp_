/**************************************************************
 * 메멘토 패턴 예제의 구현 파일                               *
 **************************************************************/
#include "memento.h"

// Originator 클래스의 생성자는 Memento 클래스에 대한 포인터를 캡슐화
Originator::Originator()
{
  memento = new Memento;
}
// Originator의 소멸자 Memento 객체를 제거하여 메모리 누수를 막음
Originator::~Originator()
{
  delete memento;
}
// getState 멤버 함수
string Originator::getState() const
{
  return state;
}
// setState 멤버 함수(Memento 객체로 상태를 저장)
void Originator::setState(string st)
{
  memento->setState(state);
  state = st;
}
// restore 멤버 함수 
void Originator::restoreState()
{
  state = memento->getState();
}
// Memento 클래스의 getState 멤버 함수(Originator 클래스에서 사용)
string Memento::getState() const
{
  return state;
}
// Memento 클래스의 setState 멤버 함수(Originator 클래스에서 사용)
void Memento::setState(string st)
{
  state = st;
}  