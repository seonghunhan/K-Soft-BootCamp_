/**************************************************************
 * toString, toData 템플릿 함수를 사용해보는 프로그램         * 
 *                                                            *
 **************************************************************/
#include "convert.h"

int main()
{
  // 정수 12를 문자열로 바꾸기
  string strg = toString(12);
  cout << "문자열: " << strg << endl;
  // 문자열 "15.67"을 double 자료형으로 바꾸기
  double data = toData<double>("15.67");
  cout << "데이터: " << data;
  return 0;
}