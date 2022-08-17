/*************************************************************
 * BigInteger 클래스의 인터페이스                            *
 *************************************************************/
#include <string>
#include <list>
#include <iostream>
#ifndef BIGINTEGER_H
#define BIGINTEGER_H
using namespace std;

class BigInteger  
{  
  private:  
    list<int> lst;
  public:                                                                                                                      
    BigInteger(); 
    BigInteger(string str);
    ~BigInteger();
    string toString();
    friend BigInteger operator+(BigInteger first, BigInteger second);
}; 
#endif