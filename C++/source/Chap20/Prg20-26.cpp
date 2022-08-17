/**************************************************************
 * 템플릿 메소드 패턴 예제의 구현                             * 
 **************************************************************/
#include "meeting.h"

// 템플릿 메소드 구현
void Meeting::meeting()
{
  greeting();
  farewell();
}
// EnglishMeeting 클래스의 greeting 멤버 함수
void EnglishMeeting::greeting()
{
  cout << "Hello my friends!" << endl;
}
// EnglishMeeting 클래스의 farewell 멤버 함수
void EnglishMeeting::farewell()
{
  cout << "Bye my friends!" << endl;
}
// FrenchMeeting 클래스의 greeting 멤버 함수
void FrenchMeeting::greeting()
{
  cout << "Bonjour mes amis" << endl;
}
// FrenchMeeting 클래스의 farewell 멤버 함수
void FrenchMeeting::farewell()
{
  cout << "Au revoir mes amis" << endl;
}