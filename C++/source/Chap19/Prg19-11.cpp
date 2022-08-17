/*************************************************************
 * 스택으로 10진수를 16진수로 변환하기                       *
 *************************************************************/
#include <stack>
#include <iostream>
using namespace std;

int main()
{
  // 스택 인스턴스화
  stack<char> stk;
  // 두 문자열과 변수 선언
  string converter("0123456789ABCDEF");
  string hexadecimal;
  int decimal;
  // 10진수 입력받기
  do 
  {
    cout << "양의 정수를 입력해주세요: ";
    cin >> decimal;
  } while(decimal <= 0);
  // 16진수 문자로 변환하고 스택에 입력  
  while(decimal != 0)
  {
    stk.push(converter[decimal % 16]);
    decimal = decimal / 16;
  }
  // 스택에서 요소를 꺼내서 문자열에 붙임
  while(!stk.empty())
  {
    hexadecimal.push_back(stk.top());
    stk.pop();
  }
  cout << "16진수 변환 결과 = " << hexadecimal;
  return 0;
}