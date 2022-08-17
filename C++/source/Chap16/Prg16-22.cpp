/**************************************************************
 * 플래그, 필드, 변수를 사용해서                              *
 * 자료형 별로 형식화하는 프로그램                            *
 **************************************************************/
#include <iostream>
using namespace std; 

int main()
{
  // 변수 선언하고 초기화
  bool b = true;
  int i = 12000;
  double d = 12467.372;
  // 단순하게 출력
  cout << "형식화 없이 출력하기" << endl;
  cout << "b의 값: " << b << endl;
  cout << "i의 값: " << i << endl;
  cout << "d의 값: " << d << endl << endl;
  // 불 자료형 형식화하고 출력
  cout << "불 자료형 형식화하기" << endl;
  cout.setf(ios::boolalpha);
  cout << b << endl << endl;
  // 정수 자료형 형식화하고 출력  
  cout << "정수 자료형 형식화하기" << endl;
  cout.setf(ios::showbase);
  cout.setf(ios::uppercase);
  cout.setf(ios::hex, ios::basefield);
  cout.setf(ios::right, ios::adjustfield); 
  cout.width(16);
  cout.fill('*');
  cout << i << endl << endl;
  // 부동 소수점 자료형 형식화하고 출력
  cout << "부동 소수점 자료형 형식화하기" << endl;
  cout.setf(ios::showpoint);
  cout.setf(ios::right, ios::adjustfield); 
  cout.setf(ios::fixed, ios::floatfield);
  cout.width(16);
  cout.precision(2);
  cout.fill('*');
  cout << d << endl;
  return 0;
}