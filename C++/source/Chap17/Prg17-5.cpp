/*************************************************************
 * 문자열이 회문인지 확인하는 프로그램 *
 *************************************************************/
#include <iostream>
#include <string>
using namespace std;

// 재귀 함수 선언
bool isPalindrome(string strg);

int main()
{ 
  // 문자열 인스턴스화
  string strg1("");
  string strg2("rotor");
  string strg3("hello");
  // 회문 확인
  cout << boolalpha; 
  cout << "isPalindrome('') = " << isPalindrome(strg1) << endl; 
  cout << "isPalindrome('rotor') = " << isPalindrome(strg2) << endl; 
  cout << "isPalindrome('hello') = " << isPalindrome(strg3);
  return 0;
} 
// 재귀 함수 정의
bool isPalindrome(string strg)
{
  if(strg.size() <= 1) 
  {
    return true;
  }
  else if(strg[0] != strg [strg.size() - 1])
  {
    return false;
  }
   return isPalindrome(strg.substr(1, strg.size() - 2));
}