/**************************************************************
 * 커맨드 패턴 예제의 인터페이스                              *
 **************************************************************/
#ifndef COMMAND_H
#define COMMAND_H
#include <string>
#include <iostream>
using namespace std;

// 명령을 받는 Receiver 클래스
class Receiver  
{  
  public:                                                                                                                      
    void action();    
}; 
// Command 추상 클래스
class Command 
{
  public:
    virtual void execute() = 0;
};
// 실질적인 명령을 나타내는 ConcreteCommand 클래스
class ConcreteCommand : public Command 
{
  private:
    Receiver* receiver;
  public:
    ConcreteCommand(Receiver* receiver);
    void execute();
};
// 명령을 호출하는 Invoker 클래스
class Invoker 
{
  private:
    Command* command;
    public: 
    void storeCommand(Command* command);
};
#endif