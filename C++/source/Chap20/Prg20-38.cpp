/**************************************************************
 * 메멘토 패턴 예제의 인터페이스 파일                         *
 **************************************************************/
#ifndef MEMENTO_H
#define MEMENTO_H 
#include <iostream>
#include <string>
using namespace std;

class Memento;   // 전방 선언
// Originator 클래스의 정의
class Originator
{
  private:
    string state;
    Memento* memento; 
  public:
    Originator();
    ~Originator();
    string getState() const;
    void setState(string state);
    void restoreState();
 };
// Memento 클래스의 정의
class Memento
{
  private:
    string state;
  public:
    string getState() const;
    void setState(string state);   
};
#endif