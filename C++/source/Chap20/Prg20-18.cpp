/**************************************************************
 * 프록시 패턴 예제의 애플리케이션 파일                       *
 **************************************************************/
#include <iostream>
#include "proxy.h"
using namespace std;

int main()
{
  Proxy p;
  for(int i = 0 ; i < 5 ; i++)
  {
    p.draw(i, i);
    p.erase();
 }
 return 0;
}