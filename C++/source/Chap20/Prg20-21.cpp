/**************************************************************
 * 데코레이터 패턴 예제를 사용하는 애플리케이션 파일          *
 **************************************************************/
#include "decorator.h"

int main()
{
  // 간단한 문장 만들고 테두리 둘러 출력
  Decorator decor1(Component("안녕하세요!"));
  decor1.draw();
  // 간단한 문장 만들고 테두리 둘러 출력
  Decorator decor2(Component("안녕하세요 여러분!"));
  decor2.draw();
  // 간단한 문장 만들고 테두리 둘러 출력
  Decorator decor3(Component("데코레이터 패턴 예제입니다!"));
  decor3.draw();
  return 0;
}