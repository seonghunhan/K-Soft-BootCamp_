/*************************************************************
 * 각 단어의 첫글자를 대문자로 만드는 프로그램               *
 *************************************************************/
#include <iostream>
using namespace std; 

int main()
{
  char c; 
  cout << "여러 줄의 글자를 입력하세요(종료하려면 eof 입력)" << endl; 
  char pre = '\n';
  while(cin.get(c))
  {
    if(pre == ' ' || pre == '\n' ) 
    {
      cout.put(toupper(c));
    }
    else
    {
      cout.put(c);
    }
    pre = c;
  }
  return 0;  
}