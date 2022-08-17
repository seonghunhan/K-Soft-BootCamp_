/**************************************************************
 * Person, StdType, PrfType 클래스의 상속을 받는              *
 * TA 구체 클래스의 인터페이스 파일                                *
 **************************************************************/
#ifndef TA_H
#define TA_H
#include "person.h"
#include "stdtype.h"
#include "prftype.h"

class TA: public Person, public StdType, public PrfType
{
  public: 
    TA(string name, double gpa, double salary);
    void printGPA();
    void printSalary();
    void print();
};
#endif