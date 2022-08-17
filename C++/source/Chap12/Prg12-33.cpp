/**************************************************************
 * Person 구체 클래스의 인터페이스 파일                            *
 **************************************************************/
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Person
{
  private:
    string name;  
  public: 
    Person(string name);
    void print(); 
};
#endif