/**************************************************************
 * 커맨드 패턴 예제의 애플리케이션 파일                       *
 **************************************************************/
#include "command.h"

int main()
{
  // Receiver 객체 인스턴스화
  Receiver* receiver;
  // Command 객체 인스턴스화
  Command* command = new ConcreteCommand(receiver);
  // Invoker 객체 인스턴스화하고 멤버 함수 호출
  Invoker invoker;
  invoker.storeCommand(command);
  // 포인터 제거
  delete receiver;
  delete command;
  return 0;
}