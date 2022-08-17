/**************************************************************
 * 파일을 읽고 내부의 정수를 모두 더한 뒤                     *
 * 파일 끝에 쓰는 프로그램                                    *
 **************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std; 

int main()
{
  // fstream 객체 인스턴스화
  fstream fstr;
  // intFile 파일 열기
  fstr.open("intFile", ios::in | ios::out);
  if(!fstr.is_open())
  {
    cout << "intFile을 열 수 없습니다!";
    assert(false);
  }
  // 파일의 정수를 읽고 더하기
  int num;
  int sum = 0;
  while(fstr >> num)
  {
    sum += num;  
  }
  // 스트림을 비우고, 파일 뒤에 숫자의 합 출력
  fstr.clear();
  fstr << "\n숫자의 합: ";
  fstr << sum;
  // 스트림 닫기
  fstr.close();
  return 0;  
}