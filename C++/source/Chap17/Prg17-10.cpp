/*************************************************************
 * 정수가 소수인지 확인하는 프로그램                         *
 *************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

// 함수 선언
bool isPrime(int num);
bool isPrime(int div, int num);

int main()
{ 
  // 정수가 소수인지 확인
  cout << "isPrime(1) = " << boolalpha << isPrime(1)   << endl;
  cout << "isPrime(2) = " << boolalpha << isPrime(2)   << endl;
  cout << "isPrime(7) = " << boolalpha << isPrime(7)   << endl;
  cout << "isPrime(21) = " << boolalpha << isPrime(21)  << endl;
  cout << "isPrime(59) = " << boolalpha << isPrime(59)  << endl;
  cout << "isPrime(97) = " << boolalpha << isPrime(97)  << endl;
  cout << "isPrime(301) = " << boolalpha << isPrime(301) << endl;
  return 0;
}
// isPrime 헬퍼 함수 정의
bool isPrime(int num)
{
  if(num  <= 1)
  {
    return false;
  }
  else if(num == 2) 
  {
    return true;
  }
  return isPrime(2, num);
}
// isPrime 재귀 함수 정의
bool isPrime(int div, int num)
{
  if(num % div == 0)
  {
    return false;
  }
  else if(div >= floor(sqrt(num)))
  {
    return true;
  }
  return isPrime(div + 1, num);	
}
/*
isPrime(1) = false
isPrime(2) = true
isPrime(7) = true
isPrime(21) = false
isPrime(59) = true
isPrime(97) = true
isPrime(301) = false
*/