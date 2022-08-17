/**************************************************************
 * 파일을 열고 내용을 하나하나 읽은 뒤                        *
 * 모니터에 출력하는 프로그램                                 *
 **************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std; 

int main()
{
  // 변수 선언
  char ch;
  // ifstream 객체 인스턴스화
  ifstream istrm;
  // file1을 열고 정상적으로 열렸는지 확인
  istrm.open("file1", ios::in);
  if(!istrm.is_open())
  {
    cout << "file1을 열 수 없습니다." << endl;
    assert(false);
  }
  // file1의 내용을 읽어 모니터에 쓰기
  while(istrm.get(ch))
  {
    cout.put(ch);
  }
  // 스트림 닫기
  istrm.close();
  return 0;  
}