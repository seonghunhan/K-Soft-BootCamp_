#pragma once
#include "person.h"

class Student : private Person
{
  private: 
    double gpa;
  public:
    Student();
    Student(long identity, double gpa);
    ~Student();
    Student(const Student& student);
    void print() const;  
};
// 기본 생성자
