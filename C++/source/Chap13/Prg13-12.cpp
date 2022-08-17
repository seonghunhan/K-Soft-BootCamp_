/**************************************************************
 * Fraction 클래스를 사용하는 애플리케이션                  *
 **************************************************************/
# include "fraction.h"

int main()
{
  // 객체 생성과 양수 음수 연산자 사용
  Fraction fract1(2, 3);
  Fraction fract2(1, 2);
  cout << "fract1: " << fract1 << endl;
  cout << "fract2: " << fract2 << endl;
  cout << "+fract1: " << +fract1 << endl;
  cout << "-fract2: " << -fract2 << endl << endl;
  // ++ -- 연산자 사용
  Fraction fract3(3, 4);
  Fraction fract4(4, 5);
  Fraction fract5(5, 6);
  Fraction fract6(6, 7);
  cout << "fract3: " << fract3 << endl;
  cout << "fract4: " << fract4 << endl;
  cout << "fract5: " << fract5 << endl;
  cout << "fract6: " << fract6 << endl << endl;
  ++fract3;
  --fract4;
  fract5++;
  fract6--;
  cout << "++fract3: " << fract3 << endl;
  cout << "--fract4: " << fract4 << endl;
  cout << "fract5++: " << fract5 << endl;
  cout << "fract6--: " << fract6 << endl << endl;
  // 복합 할당 연산자 사용
  Fraction fract7(3, 5);
  Fraction fract8(4, 7);
  Fraction fract9(5, 8);
  Fraction fract10(7, 9);
  fract3 += 2;
  fract4 -= 3;
  fract5 *= 4;
  fract6 /= 5;
  cout << "fract7 += 2: " << fract7 << endl;
  cout << "fract8 -= 3: " << fract8 << endl;
  cout << "fract9 *= 4: " << fract9 << endl;
  cout << "fract10 /= 5: " << fract10 << endl << endl;
  // 객체 생성과 friend 연산자 함수 사용
  Fraction fract11(1, 2);
  Fraction fract12(3, 4);
  cout << "fract11: " << fract11 << endl;
  cout << "fract12: " << fract12 << endl;
  cout << "fract11 + fract12 : " << fract11 + fract12 << endl;
  cout << "fract11 - fract12 : " << fract11 - fract12 << endl;
  cout << "fract11 * fract12 : " << fract11 * fract12 << endl;
  cout << "fract11 / fract12 : " << fract11 / fract12 << endl << endl;
  // 객체 생성과 관계 연산자 사용
  Fraction fract13(2, 3);
  Fraction fract14(1, 3);
  cout << "fract13: " << fract13 << endl;
  cout << "fract14: " << fract14 << endl;
  cout << "fract13 == fract14: " << boolalpha; 
  cout <<(fract13 == fract14) << endl;
  cout << "fract13 != fract14: " << boolalpha; 
  cout <<(fract13 != fract14) << endl;
  cout << "fract13 >  fract14: " << boolalpha; 
  cout <<(fract13 >  fract14) << endl;  
  cout << "fract13 <  fract14: " << boolalpha; 
  cout <<(fract13 <  fract14) << endl << endl;
  // 객체 생성과 변환
  Fraction fract15(5); // 정수를 변환
  Fraction fract16(23.45); // 부동 소수점을 변환
  cout << "fract15: " << fract15 << endl;
  cout << "fract16: " << fract16 << endl << endl;
  // double 자료형으로 변환
  Fraction fract17(9, 13);
  cout << "double 자료형으로 변환한 fract17(9, 13): ";
  cout << setprecision(2) << fract17.operator double() << endl;
  // 삽입 연산자 사용
  Fraction fract18;
  cin >> fract18;
  cout << "fract18: " << fract18 << endl; 
  return 0;
}