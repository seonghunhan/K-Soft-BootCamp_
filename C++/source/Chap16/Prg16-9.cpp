/**************************************************************
 * 파일을 열고 파일 끝에                                      *
 * 날짜를 출력하는 프로그램                                   *
 **************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std; 

int main()
{
  // ostream 객체 인스턴스화
  ofstream ostr;
  // file1 열기
  ostr.open("file1", ios::out | ios::app);
  if(!ostr.is_open())
  {
    cout << "file1을 열 수 없습니다";
    assert(false);
  }
  // file1 뒤에 C 문자열 추가
  ostr << "\nOctober 15, 2016.";
  // 파일 닫기
  ostr.close();
  return 0;  
}