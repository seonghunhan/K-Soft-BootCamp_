/**************************************************************
 * 바이너리 파일에 저장할 용도로 사용할                       *
 * Student 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef STUDEN_H
#define STUDEN_H
#include <iostream>
#include <fstream>
#include <cassert>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

class Student
{
  private:
    int stdId;
    char stdName[20];
    double stdGpa;
  public: 
    Student(int, const string&, double);
    Student();
    ~Student();
    int getId() const;
    string getName() const;
    double getGpa() const;
};
#endif