/**************************************************************
 * Professor 구체 클래스의 구현 파일                          *
 **************************************************************/
#include "professor.h"

// 생성자
Professor::Professor(string nm, double sal)
: Person(nm)
{
  salary = sal;   // 할당
}
// printSalary 멤버 함수
void Professor::printSalary()
{
  cout << "Salary: ";
  cout << fixed << setprecision(2) << salary << endl;
}
// print 함수
void Professor::print()
{
  Person::print();
  printSalary();
}