/**************************************************************
 * 문자열 입출력 연산자를 사용하는 프로그램                 *
 **************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{ 
  // 빈 문자열 생성
  string strg;
  // 입력받고 출력
  cout << "문자열을 입력하세요: ";
  cin >>  strg;
  cout << strg << endl;
  return 0;
} 