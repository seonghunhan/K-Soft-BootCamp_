/**************************************************************
 * 데코레이터 패턴 예제의 구현 파일                           *
 **************************************************************/
#include "decorator.h"

// Component의 생성자
Component::Component(string tx)
:text(tx)
{
}
// Component::draw()의 구현
void Component::draw()
{
  cout << text << endl;
}
// Decorator의 생성자
Decorator::Decorator(Component comp)
: component(comp)
{
}
// Decorator::draw()의 생성자
void Decorator::draw()
{
  cout << "*************" << endl;
  component.draw();
  cout << "*************" << endl;
}