/**************************************************************
 * Person, PrfType 클래스의 상속을 받는                       *
 * Professor 구체 클래스의 인터페이스 파일                         *
 **************************************************************/
#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"
#include "prftype.h"

class Professor : public Person, public PrfType
{  
  public: 
    Professor(string name, double salary);
    void printSalary();
    void print();
};
#endif