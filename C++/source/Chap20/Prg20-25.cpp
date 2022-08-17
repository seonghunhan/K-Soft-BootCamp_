/**************************************************************
 * 템플릿 메소드 패턴 예제의 인터페이스                       *
 **************************************************************/
#ifndef MEETING_H
#define MEETING_H
#include <iostream>
using namespace std;

// Meeting 베이스 클래스의 인터페이스
class Meeting  
{
  public: 
    void meeting();
    virtual void greeting() = 0;
    virtual void farewell() = 0;
};
// EnglishMeeting 서브 클래스의 인터페이스
class EnglishMeeting : public Meeting  
{
  public:  
    void greeting();
    void farewell();      
}; 
// FrenchMeeting 서브 클래스의 인터페이스
class FrenchMeeting: public Meeting  
{
  public:  
    void greeting();
    void farewell();      
};
#endif