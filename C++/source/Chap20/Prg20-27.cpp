/**************************************************************
 * 템플릿 메소드 패턴 예제의 애플리케이션                     * 
 **************************************************************/
#include "meeting.h"

int main()
{
  // EnglishMeeting 클래스 인스턴스화
  cout << "영어 인사" << endl;
  EnglishMeeting engMt;
  engMt.meeting();
  cout << endl;
  // FrenchMeeting 클래스 인스턴스화
  cout << "프랑스어 인사" << endl;
  FrenchMeeting freMt;
  freMt.meeting();
  cout << endl;
  return 0;
}