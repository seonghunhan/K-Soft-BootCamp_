/**************************************************************
 * 옵저버 패턴 예제의 인터페이스 파일                         *
 **************************************************************/
#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>
#include <iostream>
#include <set>
using namespace std;

class Observer;   // 전방 선언
// Subject(판매자) 클래스
class Subject
{
  private:
    set<Observer*> observers;
  public:
    void subscribe(Observer* observer);
    void unsubscribe(Observer* observer);
    void notify(int price);
};
// 추상 클래스
class Observer  
{  
  public:                                                                                                                      
    virtual void update(int price) = 0;  
    virtual ~Observer() {}
}; 
// Observer1(구매자1) 클래스
class Observer1 : public Observer 
{
  private:
    Subject* subject;  
  public:
    Observer1(Subject* subject);
    void update(int price);
};
// Observer2(구매자2) 클래스
class Observer2 : public Observer 
{
  private:
    Subject* subject;
  public:
    Observer2(Subject* subject);
    void update(int price);
};
#endif