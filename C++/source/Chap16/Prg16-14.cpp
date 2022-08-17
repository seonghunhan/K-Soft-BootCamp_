/**************************************************************
 * 파일의 길이를 찾는 프로그램                                *
 **************************************************************/
#include <iostream>
#include <fstream> 
using namespace std; 

int main()
{
  // 스트림 인스턴스화하고 파일과 연결
  ifstream ifstr;
  ifstr.open("file4" , ios::in | ios::ate);
  // 마커의 위치 찾고 출력  
  cout << "전체 크기: " << ifstr.tellg();
  // 파일 닫기  
  ifstr.close();
  return 0; 
}