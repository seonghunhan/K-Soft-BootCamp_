/**************************************************************
 * 옵저버 패턴 예제의 구현 파일                               *
 **************************************************************/
#include "observer.h"
                                                                                                                      
// Subject 클래스의 subscribe 멤버 함수
void Subject::subscribe(Observer* observer)
{
  observers.insert(observer);
}
// Subject 클래스의 unsubscribe 멤버 함수
void Subject::unsubscribe(Observer* observer)
{
  observers.erase(observer);
}
// 모든 객체에게 통지하는 Subject 클래스의 notify 멤버 함수
void Subject::notify(int price)
{
  set<Observer*>::iterator iter;
  for(iter = observers.begin(); iter != observers.end(); iter++)
  {
   (*iter)->update(price);
  }
}
// Observer1 클래스의 생성자
Observer1::Observer1(Subject* sj)
:subject(sj)
{
}
// Observer1 클래스의 update 멤버 함수
void Observer1::update(int price)
{
  cout <<  "Observer1: 현재 가격이 " << price << "이므로 구매합니다." << endl;
}
// Observer2 클래스의 생성자
Observer2::Observer2(Subject* sj)
:subject(sj)
{
}
// Observer2 클래스의 update 멤버 함수
void Observer2::update(int price)
{
  cout << "Observer2: 현재 가격이 " << price << "이므로 구매합니다." << endl;
}