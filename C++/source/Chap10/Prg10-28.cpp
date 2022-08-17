/**************************************************************
 * 10진수 숫자를 2진수 문자열로 변환하는 프로그램             *
 **************************************************************/
#include <string>
#include "customized.h"
#include <iostream>
using namespace std;

/**************************************************************
 * 정수를 문자로 변환하는 함수                                *
 **************************************************************/
char findChar(int digit)
{
  return char(digit + 48);
}

int main()
{
  // 변수 선언
  int decimal;
  int base = 2;
  string strg;
  // 10진수 입력 유효성 검사
  do 
  {
    cout << "10진수 정수를 입력하세요: ";
    cin >> decimal;
  } while(decimal <= 0);
  // 2진수로 변환
  while(decimal > 0)
  {
    int digit = decimal % base;
    char ch = findChar(digit);
    pushFront(strg, ch);
   decimal /= base;
  }
  // 2진수 출력
  cout  << "2진수: " << strg;
  return 0;
}