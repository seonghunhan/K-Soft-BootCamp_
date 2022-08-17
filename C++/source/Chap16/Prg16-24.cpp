/**************************************************************
 * boolalpha와 noboolalpha 조정자를 구현해보는 프로그램       *
 **************************************************************/
#include <iostream>
using namespace std;

// 사용자 정의 조정자 alpha 정의
ostream& alpha(ostream& os)
{
  os.setf(ios::boolalpha); 
  return os;
}
// 사용자 정의 조정자 noalpha 정의
ostream& noalpha(ostream& os)
{
  os.unsetf(ios::boolalpha); 
  return os;
}

int main()
{
  // 불 자료형의 변수 선언과 초기화
  bool b1 = false;
  bool b2 = true;
  // 조정자와 함께 변수 출력
  cout << alpha << b1 << "   "  << b2 << endl;
  cout << noalpha << b1 << "   "  << b2 << endl;
  return 0;
}