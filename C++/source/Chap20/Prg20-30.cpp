/**************************************************************
 * 커맨드 패턴 예제의 구현 파일                               *
 **************************************************************/
#include "command.h"

// action 멤버 함수                                                                                                         
void Receiver::action()
{
  cout << "명령을 실행합니다." << endl;
}
// ConcreteCommand 클래스의 생성자
ConcreteCommand::ConcreteCommand(Receiver*  recv)
:receiver(recv) 
{
}
// execute 멤버 함수
void ConcreteCommand::execute()
{
  receiver->action();
}
// storeCommand 멤버 함수
void Invoker::storeCommand(Command* cmnd)
{
  command = cmnd;
  bool rightTime = false;
  while(!rightTime)
  {
    cout << "적절한 시점에 1을 입력해주세요(이외의 경우 0): ";
    cin >> rightTime; 
    if(rightTime)
    {
      command->execute();
    }
  }
}