/**************************************************************
 * 팩토리 메소드 패턴을 사용하는 애플리케이션 파일            *
 **************************************************************/
#include "factory.h"
using namespace std;

int main()
{
  // 포인터 생성 
  Shape* shape;
  // Square 객체 생성하고 사용
  shape = Shape::factory("square");
  shape ->  draw();
  // Circle 객체 생성하고 사용
  shape = Shape::factory("circle");
  shape ->  draw();
  return 0;
}