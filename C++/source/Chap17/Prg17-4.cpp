/*************************************************************
 * 재귀적으로 문자열을 뒤집는 프로그램 *
 *************************************************************/
#include <iostream>
#include <string> 
using namespace std;

// 재귀 함수 선언
string reverse(string str);

int main()
{ 
  // 테스트
  cout << "'ABCD' 반전 = " << reverse("ABCD") << endl;
  cout << "'Hello' 반전 = " << reverse("Hello") << endl;
  cout << "'Bye' 반전 = " << reverse("Bye") << endl;
  return 0;
}
// 재귀 함수 정의
string reverse(string str)
{
  if(str.length() <= 1)
  {
    return str;
  }
  else
  {
    return reverse(str.substr(1, str.length() - 1)) + str.substr(0, 1); 
  }
}