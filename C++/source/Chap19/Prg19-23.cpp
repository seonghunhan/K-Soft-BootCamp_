/*************************************************************
 * 값을 출력하는 함수 객체 사용하기                          *
 *************************************************************/
#include <iostream>
using namespace std;

class Print 
{
  public: 
  void operator()(int value) {cout << value;}
};

int main()
{
  Print print;  // Print 객체 생성
  print(45);    // operator() 호출
  return 0;
}