/**************************************************************
 * Person, StdType 클래스의 상속을 받는                       *
 * Student 구체 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "stdtype.h"

class Student : public Person, public StdType
{
  public:
    Student(string name, double gpa);
    void printGPA();
    void print();
};
#endif