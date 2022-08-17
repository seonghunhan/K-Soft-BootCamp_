/*************************************************************
 * 피보나치 수를 찾는 프로그램 *
 *************************************************************/
#include <iostream>
using namespace std;

// Function declaration
long long fib(int n);

int main()
{ 
  // 0~10 범위의 피보나치 수 테스트
  cout << "0~10 범위의 피보나치 수 테스트" << endl;
  for(int i = 0; i <= 10; i++)
  {
    cout << "fib(" << i << ") = " << fib(i) << endl;
  }
  cout << endl;
  // 35와 36 피보나치 수 테스트
  cout << "35와 36 피보나치 수 테스트" << endl;
  cout << "fib(35) = " << fib(35) << endl;
  cout << "fib(36) = " << fib(36) << endl;
  return 0;
}
// 함수 정의
long long fib(int n)
{
  if(n == 0 || n ==1)
  {
    return n;
  }
  else
  {
    return(fib(n - 2) + fib(n - 1));
  }
}
/*
0~10 범위의 피보나치 수 테스트
fib(0) = 0
fib(1) = 1
fib(2) = 1
fib(3) = 2
fib(4) = 3
fib(5) = 5
fib(6) = 8
fib(7) = 13
fib(8) = 21
fib(9) = 34
fib(10) = 55

35와 36 피보나치 수 테스트
fib(35) = 9227465
fib(36) = 14930352
*/