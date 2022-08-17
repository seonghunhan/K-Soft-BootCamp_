/*************************************************************
 * BigInteger 클래스를 사용하는 애플리케이션 파일            *
 *************************************************************/
#include <iostream>
#include <iomanip>
#include "bigInteger.h"
using namespace std;

int main()
{
  // 문자열 입력 받기
  string strg1, strg2;
  cout << "첫 번째 큰 정수를 입력해주세요: ";
  cin >> strg1; 
  cout << "두 번째 큰 정수를 입력해주세요: ";
  cin >> strg2;
  // BigInteger 객체 2개 생성
  BigInteger first(strg1);
  BigInteger second(strg2);
  // 두 정수를 더하고 result에 할당
  BigInteger result = first + second;
  // BigInteger 객체를 문자열로 변경
  strg1 = first.toString();
  strg2 = second.toString();
  string strg3 = result.toString();
  string dashes(strg3.length(), '-');
  // 결과 출력
  cout << "첫 번째 정수: " << setw(strg3.length());
  cout << right << strg1 << " + " << endl;
  cout << "두 번째 정수: " << setw(strg3.length());
  cout << right << strg2 << endl;
  cout << "                              " << dashes << endl;
  cout << "결과                    " << setw(strg3.length());
  cout << right << strg3 << endl;
  return 0;
}