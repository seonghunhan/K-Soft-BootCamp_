/*************************************************************
 * 문장 내부의 단어 수를 출력하는 프로그램                   *
 *************************************************************/
#include <map>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
  // 맵, 반복자, 문장 선언
  map<string, int> freq;
  map<string, int>::iterator iter;
  string word;
  // 문장 읽고 맵으로 빈도 배열 생성
  cout << "문장을 입력해주세요: " << endl;
  while(cin >> word)
  {
    ++freq [word];
  }
  // 단어와 빈도 출력
  for(iter = freq.begin(); iter != freq.end(); iter++)
  {
    cout << left << setw(10) << iter->first << iter->second << endl;
  }
  return 0;
}