/**************************************************************
 * Date 클래스를 사용하는 애플리케이션                      *
 **************************************************************/
#include "date.h"

int main()
{
  // Date 객체 2개 생성 후 출력
  Date date1(2, 8, 2014);
  Date date2(10, 15, 1944);
  cout << "date1: " << date1;
  cout << "date2: " << date2;
  // 할당 연산자와 후위 증가 연산자 사용
  Date date3 = date1;
  Date date4 = date2;
  date3++;
  date4++;
  cout << "date3: " << date3;
  cout << "date4: " << date4;
  // 복합 할당 연산자 사용
  date3 += 20;
  date4 -= 130;
  cout << "date3 + 20 = " << date3;
  cout << "date4 - 130 = " << date4;
  // 날짜 차이 계산
  cout << "date3 - date4 = "
   << date3 - date4 << " days.";
  return 0;
}