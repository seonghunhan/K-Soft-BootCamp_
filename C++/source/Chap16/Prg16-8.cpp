/**************************************************************
 * 파일을 열고 내용을 하나하나 읽은 뒤                        *
 * 다른 파일에 출력하는 프로그램                              *
 **************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std; 

int main()
{
  // 변수 선언
  char ch;
  // ifstream 객체와 ofstream 객체 인스턴스화
  ifstream istr;
  ofstream ostr;
  // file1과 file2 열고 정상적으로 열렸는지 확인
  istr.open("file1", ios::in);
  if(!istr.is_open())
  {
    cout << "file1을 열 수 없습니다." << endl;
    assert(false);
  }
  ostr.open("file2", ios::out);
  if(!ostr.is_open())
  {
    cout << "file2을 열 수 없습니다." << endl;
    assert(false);
  }
  // file1의 내용을 읽어 file2에 쓰기
  while(istr.get(ch))
  {
    ostr.put(ch);
  }
  // 파일 2개 닫기
  istr.close();
  ostr.close();
  return 0;  
}