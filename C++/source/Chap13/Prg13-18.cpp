/**************************************************************
 * Poly 클래스를 사용하는 애플리케이션                      *
 **************************************************************/
#include "poly.h"
 
int main()
{
  // 다항식 생성하고 입력받기
  Poly poly1(5);
  poly1.fill();
  Poly poly2(2);
  poly2.fill();
  // 출력
  cout << "다항식의 상태 " << endl;
  cout << "Poly1 : " << poly1 << endl;
  cout << "Poly2 : " << poly2 << endl << endl;
  // 연산자 사용
  Poly poly3 = poly1 + poly2;
  Poly poly4 = poly1 - poly2;
  Poly poly5 = poly1 * poly2;
  Poly poly6 = poly1 / poly2;
  Poly poly7 = poly1 % poly2;
  // 결과 출력
  cout << "다항식 연산 결과" << endl;
  cout << "Poly1 + Poly2: " << poly3 << endl;
  cout << "Poly1 - Poly2: " << poly4 << endl;
  cout << "Poly1 * Poly2: " << poly5 << endl;
  cout << "Poly1 / Poly2: " << poly6 << endl;
  cout << "Poly1 % Poly2: " << poly7 << endl;
  return 0;
}