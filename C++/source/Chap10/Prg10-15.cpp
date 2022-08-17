/**************************************************************
 * 문자열에서 문자 하나를                                     *
 * 추출해서 출력하는 프로그램                                 *
 **************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{                                 
  // 문자열 생성
  string strg("A short string");
  // 5, 8번째 인덱스 위치의 문자 추출
  cout << "인덱스 5 위치의 문자: " << strg[5] << endl;;
  cout << "인덱스 8 위치의 문자: " << strg.at(8) << endl;
  return 0;
} 