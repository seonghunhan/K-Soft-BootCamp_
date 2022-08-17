/*************************************************************
 * 중재자 패턴 예제의 인터페이스 파일                        *
 *************************************************************/
#ifndef MEDIATOR_H
#define MEDIATOR_H 
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Employee 추상 클래스
class Employee
{
  public:
  virtual void getMessage(string message) = 0;
};
// Employee1 구체 클래스
class Employee1 : public Employee 
{
  public:
  void getMessage(string message);
};
// Employee2 구체 클래스
class Employee2 : public Employee 
{
  public:
  void getMessage(string message);
};
// Employee3 구체 클래스
class Employee3 : public Employee 
{
  public:
  void getMessage(string message);
};
// Employee4 구체 클래스
class Employee4 : public Employee 
{
  public:
  void getMessage(string message);
};
// Mediator 클래스는 Employee 객체의 벡터를 캡슐화
class Mediator
{
  private:
    vector<Employee*> employees;
  public:
    Mediator();
    ~Mediator();
    void sendMessage(string message);
 };
#endif