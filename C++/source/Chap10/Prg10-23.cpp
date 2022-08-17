/**************************************************************
 * 문자열과 문자를 연결하는 프로그램                          *
 **************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
  // 선언
  string first, last;
  char init;
  // 입력받기  
  cout << "First Name을 입력하세요: ";
  cin >> first;
  cout << "Last Name을 입력하세요: ";
  cin >> last;
  cout << "이니셜을 입력하세요: ";
  cin >> init;
  // 첫 번째 형식으로 Full Name 출력
  cout << endl;
  cout << "첫 번째 형식의 Full Name: ";
  cout << first + " " + init + "." + " " + last << endl;
  // 두 번째 형식으로 Full Name 출력  
  cout << "두 번째 형식의 Full Name: ";
  cout << last + ", " + first + " " + init + ".";
  return 0;
}