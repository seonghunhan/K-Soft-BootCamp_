/**************************************************************
 * 상태 패턴 예제의 인터페이스 파일                           *
 **************************************************************/
#ifndef STATE_H
#define STATE_H
#include <iostream>
using namespace std;

class State;  // 전방 선언
// Light 클래스의 정의
class Light
{
  private: 
    State* state;
  public:
    void setState(State* state);
    void deleteState();
    void turnSwitch();
};

// State 추상 클래스의 정의
class State
{ 
  public: 
    virtual void handle(Light* light) = 0;
};
// OffState 구체 클래스의 정의
class OffState : public State
{
  public: 
    void handle(Light* light);
};
// OnState 구체 클래스의 정의
class OnState : public State
{
  public: 
    void handle(Light* light);
};
#endif