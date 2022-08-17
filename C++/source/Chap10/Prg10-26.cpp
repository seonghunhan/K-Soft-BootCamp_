/**************************************************************
 * 이전의 헤더 파일에서 만든                                  *
 * 4개의 사용자 정의 함수를 테스트하는 프로그램               *
 **************************************************************/
#include "customized.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
  // 문자열 선언
  string strg("abcdefgh");
  // pushFront 함수 테스트
  cout << "PushFront 전의 문자열: " << strg << endl;
  pushFront(strg, 'A');
  cout << "pushFront 후의 문자열: " << strg << endl;
  cout << endl;
  // pushBack 함수 테스트
  cout << "pushBack 전의 문자열: " << strg << endl;
  pushBack(strg, 'Z');
  cout << "pushBack 후의 문자열: " << strg << endl;
  cout << endl;
  // popFront 함수 테스트
  cout << "popFront 전의 문자열: " << strg << endl;
  char c1 = popFront(strg);
  cout << "popFront 후의 문자열: " << strg << endl;
  cout << "추출한 문자: " << c1 << endl;
  cout << endl;
  // popBack 함수 테스트
  cout << "popBack 전의 문자열: " << strg << endl;
  char c2 = popBack(strg);
  cout << "popBack 후의 문자열: " << strg << endl;
  cout << "추출한 문자: " << c2 << endl;
  cout << endl;
  return 0;
}