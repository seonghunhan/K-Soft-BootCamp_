/**************************************************************
 * 상태 패턴 예제의 애플리케이션 파일                         *
 **************************************************************/
#include "state.h"

int main()
{
  // 객체를 인스턴스화
  Light* light  = new Light;
  State* state = new OffState ;
  light->setState(state);
  // turnSwitch 함수를 3번 호출
  light->turnSwitch();
  light->turnSwitch();
  light->turnSwitch();
  // 객체를 해제
  delete state;
  delete light;
  return 0;
}