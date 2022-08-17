/**************************************************************
 * 책임 연쇄 패턴 예제의 애플리케이션 파일                    *
 **************************************************************/
#include "chain.h"

int main()
{
  // 대출자1
  cout << "대출자1:" << endl;
  Loan loan1(82000);
  cout << endl;
  // 대출자2
  cout << "대출자2:" << endl;
  Loan loan2(700);
  cout << endl;
  // 대출자3
  cout << "대출자3:" << endl;
  Loan loan3(146000);
  cout << endl;
  // 대출자4  
  cout << "대출자4:" << endl;
  Loan loan4(3200000);
  cout << endl;
  return 0;
}  