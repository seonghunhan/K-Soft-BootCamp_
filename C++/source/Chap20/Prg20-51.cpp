 /*************************************************************
  * 방문자 패턴 예제의 애플리케이션 파일                      *
  *************************************************************/
#include "greeting.h"

int main()
{
  // Greeting 클래스 인스턴스화
  Greeting greeting;
  // EnglishVisitor 클래스 사용
  Visitor* visitor1 = new EnglishVisitor;
  greeting.accept(visitor1);
  // FrenchVisitor 클래스 사용
  Visitor* visitor2 = new FrenchVisitor;
  greeting.accept(visitor2);
  // SpanishVisitor 클래스 사용
  Visitor* visitor3 = new SpanishVisitor;
  greeting.accept(visitor3);
  return 0;
}