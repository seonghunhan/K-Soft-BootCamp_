/*************************************************************
 * 두 파일 내부의 정수를 결합하고                            *
 * 정렬해서 출력하는 프로그램                                *
 *************************************************************/
#include <iostream>
#include <fstream>
#include <assert.h>
#include <limits>
using namespace std;

int main()
{
  // 선언과 초기화
  int first, second;
  int sentinel = numeric_limits<int>::max();
  // 스트림 인스턴스화하고 파일 열기
  ifstream strm1("infile1");
  ifstream strm2("infile2");
  ofstream strm3("outfile");
  if(!strm1.is_open())
  {
    cout << "infile1을 열 때 오류가 발생했습니다." << endl;
    assert(false);
  }
  if(!strm2.is_open())
  {
    cout << "infile2을 열 때 오류가 발생했습니다." << endl;
    assert(false);
  }
  if(!strm3.is_open())
  {
    cout << "outfile을 열 때 오류가 발생했습니다." << endl;
    assert(false);
  }
  // 처리
  strm1 >> first;
  strm2 >> second;
  while(strm1 || strm2)
  {
    if(first <= second)
    {
      strm3 << first << " ";
      strm1 >> first;
      if(!strm1)
      {
        first = sentinel;
      }    
    } 
    else 
    {
      strm3 << second << " ";
      strm2 >> second; 
      if(!strm2)
      {
        second = sentinel;
      }
    }
  }
  // 파일 닫기
  strm1.close();
  strm2.close();
  strm3.close();
  return 0;
}