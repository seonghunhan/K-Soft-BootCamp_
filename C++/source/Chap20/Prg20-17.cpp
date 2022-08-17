/**************************************************************
 * 프록시 패턴 예제의 구현 파일                               *
 **************************************************************/
#include <string>
#include "proxy.h"

// Real의 draw 멤버 함수
void Real::draw(int x, int y)
{
  cout << "객체를 " << x << ", " << y << "위치에 그렸습니다." << endl;
} 
// Real의 erase 멤버 함수
void Real::erase()
{
  cout << "객체를 지웠습니다." << endl;
}
// Proxy의 생성자
Proxy::Proxy()
{
  real = 0;
}
// Proxy의 소멸자
Proxy::~Proxy()
{
  delete real;
}
// Proxy의 draw 멤버 함수
void Proxy::draw(int x, int y)
{
  if(real == 0 )
  {
    real = new Real;
  }
  real->draw(x, y);
}
// Proxy의 erase 멤버 함수
void Proxy::erase()
{
  real->erase();
}