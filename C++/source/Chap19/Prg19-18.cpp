/*************************************************************
 * Student 클래스를 사용하는 애플리케이션 파일               *
 *************************************************************/
#include "student.h"

int main()
{
  // Student 클래스의 인스턴스를 6개 생성
  Student student1(120, "George", 3.78);
  Student student2(185, "Mary", 3.95);
  Student student3(110, "Richard", 4.00);
  Student student4(245, "Alen", 3.70);
  Student student5(172, "John", 3.00);
  Student student6(195, "Lucie", 3.80);
  // 위의 인스턴스를 세트에 넣음
  set <Student> stdSet ;
  stdSet.insert(student1);
  stdSet.insert(student2);
  stdSet.insert(student3);
  stdSet.insert(student4);
  stdSet.insert(student5);
  stdSet.insert(student6);
  // 출력
  set <Student>::iterator iter;
  for(iter = stdSet.begin(); iter != stdSet.end(); iter++)
  {
    iter -> print();
  }
  return 0;
}