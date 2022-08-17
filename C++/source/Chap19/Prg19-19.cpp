/**************************************************************
 * 맵에 학생의 이름과 점수를 저장하는 프로그램                *
 **************************************************************/
#include <map>
#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

int main()
{
  // 맵과 반복자 선언
  map<string, int> scores;
  map<string, int>::iterator iter;
  // 맵에 학생의 이름과 점수 저장
  scores["John"] = 52;
  scores["George"] = 71;
  scores["Mary"] = 88;
  scores["Lucie"] = 98;
  scores["Robert"] = 77;
  // 학생의 이름과 점수 정렬해서 출력
  cout << "학생의 이름과 점수" << endl;
  for(iter = scores.begin(); iter != scores.end(); iter++)
  {
    cout << setw(10) << left << iter->first << "  "; 
    cout << setw(4) << iter->second << endl;
  } 
  return 0;
}