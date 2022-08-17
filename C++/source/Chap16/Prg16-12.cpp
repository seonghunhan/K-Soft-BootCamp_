/**************************************************************
 * 파일에 있는 문자와 문자의 위치를 출력하는 프로그램         *
 **************************************************************/
#include <iostream>
#include <fstream> 
using namespace std; 

int main()
{
  // 변수 선언
  char ch;
  int n;
  // 스트림 인스턴스화하고 파일 열기
  ifstream istr;
  istr.open("sample", ios::in);
  // 문자와 문자의 위치 출력
  n = istr.tellg();
  while(istr.get(ch))
  {
    cout << n << "  " << ch << endl;
    n = istr.tellg();
  }
  // 파일 닫기
  istr.close();
  return 0;
}