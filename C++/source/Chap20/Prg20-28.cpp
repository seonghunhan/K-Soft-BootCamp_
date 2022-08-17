/**************************************************************
 * 오름차순과 내림차순으로 정렬하는 프로그램                  *
 **************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
#include <iomanip>
using namespace std;

// 전역 print 함수
void print(string message, vector<int> v)
{
  cout << message;
  for(int i = 0; i < v.size(); i++)
  {
    cout << setw(4) << left << v[i];
  }
  cout << endl;
}

int main()
{
  // 정수 벡터 선언
  vector<int> vec ;
  // 벡터에 요소 넣고 출력
  vec.push_back(17);
  vec.push_back(10);
  vec.push_back(13);
  vec.push_back(18);
  vec.push_back(15);
  vec.push_back(11);
  print("원본 벡터: ", vec);
  // 오름차순으로 정렬하고 출력
  sort(vec.begin(), vec.end(), less <int>());
  print("오름차순: ", vec);
  // 내림차순으로 정렬하고 출력
  sort(vec.begin(), vec.end(), greater <int>());
  print("내림차순: ", vec);
  return 0;
}