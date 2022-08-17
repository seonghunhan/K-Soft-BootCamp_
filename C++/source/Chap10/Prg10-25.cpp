/**************************************************************
 * 사용자 정의 함수를 정의하는 헤더 파일                      *
 * pushFront 함수는 앞에 문자를 추가                          *
 * pushBack 함수는 뒤에 문자를 추가                           *
 * popFront 함수는 앞의 문자를 제거                           *
 * popBack 함수는 뒤의 문자를 제거                            *
 **************************************************************/
#ifndef custom_H
#define custom_H
#include <iostream> 
#include <string>
using namespace std;

// pushFront 함수의 정의
void pushFront(string& strg, char c)
{
  string temp(1, c);
  strg.insert(0, temp);
}
// pushBack 함수의 정의
void pushBack(string& strg, char c)
{ 
  string temp(1, c);
  strg.append(temp);
}
// popFront 함수의 정의
char popFront(string& strg)
{
  int index = 0;
  char temp = strg[index];
  strg.erase(index, 1);
  return temp;
}
// popBack 함수의 정의
char popBack(string& strg)
{  
  int index = strg.size() - 1;
  char temp = strg[index];
  strg.erase(index, 1);
  return temp;
}
#endif 