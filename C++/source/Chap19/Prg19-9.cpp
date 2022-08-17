/*************************************************************
 * BigInterger 클래스의 구현                                 *
 *************************************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include "bigInteger.h"
using namespace std;

// 기본 생성자
BigInteger::BigInteger()  
:lst(list<int>())                                       
{
}
// 매개변수가 있는 생성자
BigInteger::BigInteger(string str)
:lst(list<int>())                                         
{
  for(int i = 0; i < str.length(); i++)
  {
    int num = str[i] - 48;
    lst.push_back(num);
  }
}
// 소멸자
BigInteger::~BigInteger()
{
}
// 리스트를 문자열로 변환하는 함수
string BigInteger::toString()
{
  string strg;
  list<int>::iterator iter;
  iter = lst.begin();
  while(iter != lst.end())
  {
    strg.append(1, *iter + 48);
    iter++;
  }
  return strg;
}
// operator+ friend 함수
BigInteger operator+(BigInteger first, BigInteger second)
{
  list<int>::reverse_iterator iter1;
  list<int>::reverse_iterator iter2;
  BigInteger result;
  int num1, num2, sum;
  int carry = 0;
  iter1 = first.lst.rbegin();
  iter2 = second.lst.rbegin();
  while((iter1 != first.lst.rend()) &&(iter2 != second.lst.rend())) 
  {
    num1 = *iter1;
    num2 = *iter2;
    sum = (num1 + num2 + carry) % 10;
    carry = (num1 + num2 + carry) / 10;
    result.lst.push_front(sum);
    iter1++;
    iter2++;
  }
  while((iter1 != first.lst.rend())) 
  {
    num1 = *iter1;
    sum = (num1 + carry) % 10;
    carry = (num1 + carry) / 10;
    result.lst.push_front(sum);
    iter1++;
  }
  while((iter2 != second.lst.rend())) 
  {
    num2 = *iter2;
    sum = (num2 + carry) % 10;
    carry = (num2 + carry) / 10;
    result.lst.push_front(sum);
    iter2++;
  }
  if(carry == 1) 
  {
    result.lst.push_front(carry);
  }
  return result;
}