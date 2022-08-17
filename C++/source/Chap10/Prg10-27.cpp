/**************************************************************
 * 2진수 문자열을 10진수 숫자로 변환하는 프로그램             *
 **************************************************************/
#include "customized.h"
#include <string>
#include <iostream>
using namespace std;
/**************************************************************
 * 문자를 해당하는 정수로                                     *
 * 변환하는 함수                                              *
 **************************************************************/
int findValue(char ch)
{
  return static_cast<int>(ch) - 48;
}

int main()
{
  // 선언, 입력, 유효성 검사
  string binary;
  do 
  {
      cout << "2진수 숫자를 입력하세요: ";
    getline(cin, binary);
  } while(binary.find_first_not_of("01") < binary.size());
  // 10진수 숫자로 변환하고 출력
  int base = 2;
  int decimal = 0;
  while(!binary.empty())
  {
    decimal *= base;
    char ch = popFront(binary);
    decimal += findValue(ch); 
  }
  cout << "10진수의 값: " << decimal;
  return 0;
}