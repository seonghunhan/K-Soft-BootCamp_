/**************************************************************
 * 메멘토 패턴 예제의 애플리케이션 파일                       *
 **************************************************************/
#include "memento.h"

int main()
{
  Originator originator;
  originator.setState("안녕하세요"); // 첫 번째 상태 설정
  cout << originator.getState() << endl;  // 첫 번째 상태 출력
  originator.setState("안녕"); // 두 번째 상태 변경
  cout << originator.getState() << endl; // 두 번째 상태 출력
  originator.restoreState(); // 상태 복원
  cout << originator.getState() << endl; // 복원한 상태 출력
  return 0;
}