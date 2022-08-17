/*************************************************************
 * 다른 함수를 호출하는 함수 사용하기                        *
 *************************************************************/
#include <iostream>
using namespace std;

// print 함수의 정의
void print(int value) 
{
  cout << value << endl;
}
// fun 함수의 정의
void fun(int x, void(*f)(int))
{
  f(x);
}

int main()
{
  fun(24, print);  // fun 함수 호출
  fun(88, print);  // fun 함수 호출
  return 0;
}