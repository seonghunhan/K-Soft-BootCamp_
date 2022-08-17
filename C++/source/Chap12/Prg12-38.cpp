/**************************************************************
 * Student 구체 클래스의 구현 파일                            *
 **************************************************************/
#include "student.h"

// 생성자
Student::Student(string na, double gp)
:Person(na)
{
  gpa = gp;  // 할당
}
// printGPA 멤버 함수
void Student::printGPA()
{
  cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}
// print 멤버 함수
void Student::print()
{
  Person::print();
  printGPA();
}