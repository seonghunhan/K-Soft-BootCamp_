/**************************************************************
 * 표현식의 괄호 짝이 맞는지 확인하는 프로그램                *
 **************************************************************/
#include <stack>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  // 스택, 문자열, 불 선언
  stack<char> stk;
  string expr;
  bool paired = true;
  // 입력받고 스택에 넣고 빼기
  cout << "표현식을 입력해주세요: ";
  getline(cin, expr);
  int i = 0;
  while(i < expr.size() && paired)
  {
    char next = expr[i];
    if(next == '(')
    {
      stk.push(next);
    }
    else if(next == ')')
    {
       if(stk.empty())
       {
         paired = false;  // 스택이 여기에서 비어 버리면 짝이 안 맞음
       }
       else 
       {
         stk.pop();
       }
    }
    i++;
  }
  // 스택이 비어 있지 않다면 짝이 안 맞는다는 의미
  if(!stk.empty())
  { 
    paired = false;
  }
  // 결과 출력
  if(paired)
  {
    cout << "괄호 짝이 맞는 정상적인 표현식입니다." << endl;
  }
  else
  {
    cout << "괄호 짝이 맞지 않습니다!" << endl;
  }
  return 0;
}