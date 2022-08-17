/**************************************************************
 * 연산자를 사용하여 문자열을 비교하는 프로그램               *
 **************************************************************/
#include <string>
#include <iostream>
using namespace std;

int main()
{
  // 문자열 4개 생성
  string strg1;                                  
  string strg2(5, 'a');                      
  string strg3("Hello Friends");      
  string strg4("Hi People", 4); 
  // 연산자를 사용해서 비교
  cout << "strg1 < strg2 : " << boolalpha <<(strg1 < strg2);                    
  cout << endl;                    
  cout << "strg2 >= strg3: " << boolalpha <<(strg2 >= strg3);
  cout << endl;
  cout << "strg1 == strg2: " <<  boolalpha <<(strg1 == strg2);
  cout << endl;
  cout << "Hi P != strg4: " << boolalpha <<("Hi P" != strg4);  
  return 0;
} 