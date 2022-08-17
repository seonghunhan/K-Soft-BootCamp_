/**************************************************************
 * 재귀적으로 최대 공약수를 구하는 프로그램                   *
 **************************************************************/
#include <iostream>
using namespace std;

// gcd 함수 선언
int gcd(int first, int second);

int main()
{
  // gcd 함수 테스트
  cout << "gcd(8, 6) = " << gcd(8, 6) << endl; 
  cout << "gcd(9, 12) = " << gcd(9, 12) << endl; 
  cout << "gcd(7, 11) = " << gcd(7, 11) << endl; 
  cout << "gcd(21, 35) = " << gcd(21, 35) << endl; 
  cout << "gcd(140, 12) = " << gcd(140, 12); 
  return 0;
}
// gcd 재귀 함수 정의
int gcd(int first, int second)
{
  if(second == 0)
  {
	return first;
  }
  else
  {
	return gcd(second, first % second);
  }
}