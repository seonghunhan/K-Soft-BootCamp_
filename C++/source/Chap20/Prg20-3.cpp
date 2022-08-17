/**************************************************************
 * President 클래스를 사용하는 애플리케이션 파일              *
 **************************************************************/
#include "president.h"

int main()
{
  // 포인터 만들기
  President* ptr;
  // 첫 번째 대표 객체 생성
  ptr = President::create("Mary");
  cout << "대표의 이름 = " << ptr->getName() << endl;
  // 두 번째 대표 객체 생성 시도
  ptr = President::create("John");
  cout << "대표의 이름 = " << ptr->getName() << endl;
  return 0;
}  