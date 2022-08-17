/*************************************************************
 * 클래스들을 사용해보는 애플리케이션                        *
 *************************************************************/
#include "student.h"
#include "professor.h"
#include "ta.h"

int main()
{
  // 객체 4개 인스턴스화
  Person per("John");
  Student std("Linda", 3.9);
  Professor prf("George", 89000);
  TA ta("Lucien", 3.8, 23000);
  // Person 정보 출력
  cout << "Person 정보" << endl;
  per.print();
  cout << endl << endl;
  // Student 정보 출력
  cout << "Student 정보" << endl;
  std.print();
  cout << endl << endl;
  // Professor 정보 출력
  cout << "Professor 정보" << endl;
  prf.print();
  cout << endl << endl;
  // TA 정보 출력
  cout << "TA 정보" << endl;
  ta.print();
  cout << endl << endl;
  return 0;
}