/*************************************************************
 * 팩토리얼 값과 합계 값을 찾는 프로그램 *
 *************************************************************/
#include <iostream>
using namespace std;

// sum 함수 선언
int sum(int n);
// factorial 함수 선언
int factorial(int n);
 
int main()
{ 
  // sum(0)과 factorial(1) 테스트
  cout << "sum(0) = " << sum(0) << endl ;  
  cout << "factorial(1) = " << factorial(1) << endl << endl;
  // sum(3)과 factorial(3) 테스트
  cout << "sum(3) = " << sum(3) << endl;  
  cout << "factorial(3) = " << factorial(3) << endl << endl;
  // sum(7)과 factorial(7) 테스트
  cout << "sum(7) = " << sum(7) << endl;  
  cout << "factorial(7) = " << factorial(7);
  return 0;
}
// sum(n) 재귀 함수 정의
int sum(int n)
{
  if(n <= 0)
  {
    return 0;
  }
  return n + sum(n - 1);
}
// factorial(n) 재귀 함수 정의
int factorial(int n)
{
  if(n <= 1)
  {
    return 1;
  }
  return  n * factorial(n - 1);
}