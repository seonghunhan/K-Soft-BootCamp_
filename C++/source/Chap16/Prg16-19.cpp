/**************************************************************
 * 문자열 스트림 클래스를 사용해보는 프로그램                 * 
 **************************************************************/
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

int main()
{
  // istringstream 객체 사용
  istringstream iss("Hello friends!");
  cout << iss.str() << endl; 
  iss.str("Hello world!");
  cout << iss.str() << endl << endl;
  // ostringstream 객체 사용
  ostringstream oss("Bye friends!");
  cout << oss.str() << endl; 
  oss.str("Bye world!");
  cout << oss.str() << endl; 
  return 0;
}