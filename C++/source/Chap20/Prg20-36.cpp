/*************************************************************
 * 상태 패턴 예제의 구현 파일                                *
 *************************************************************/
#include "state.h"

// setState 멤버 함수
void Light::setState(State* st)
{
  state = st;  
}
// deleteState 멤버 함수
void Light::deleteState()
{
  delete state;  
}
// turnSwitch 멤버 함수
void Light::turnSwitch()
{
  state->handle(this);
}
// OffState 클래스의 handle 멤버 함수
void OffState::handle(Light* light)
{
  cout << "불을 켭니다." << endl;
  light->deleteState();
  light->setState(new OnState);
}
// OnState 클래스의 handle 멤버 함수
void OnState::handle(Light* light)
{
  cout << "불을 끕니다." << endl;
  light->deleteState();
  light->setState(new OffState);
}