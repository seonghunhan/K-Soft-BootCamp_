/*************************************************************
 * getline 함수를 사용해보는 프로그램                        *
 *************************************************************/
#include <iostream>
using namespace std; 

int main()
{
  char str2[80];
  cin.getline(str2, 80, '\n');
  cout << str2; 
  return 0;  
}