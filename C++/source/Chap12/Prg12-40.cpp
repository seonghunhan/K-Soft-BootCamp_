/**************************************************************
 * TA 구체 클래스의 구현 파일                                 *
 **************************************************************/
#include "ta.h"

// 생성자
TA::TA(string nm, double gp, double sal)
: Person(nm)
{
  gpa = gp;       // 할당
  salary = sal;   // 할당
}
// printGPA 멤버 함수
void TA::printGPA()
{
  cout << "GPA: " << gpa << endl;
}
// printSalray 멤버 함수
void TA::printSalary()
{
  cout << "Salary: ";
  cout << fixed << setprecision(2) << salary << endl;
}
// print 함수
void TA::print()
{
  Person::print();
  printGPA();
  printSalary();
}