/*************************************************************
 * 정렬 알고리즘으로 벡터를 정렬하는 프로그램                * 
 *************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// print 함수의 정의
void print(int value)
{
  cout << value << "  ";
}

int main()
{
  // 벡터 인스턴스화
  vector <int> vec ;
  // 요소 6개 추가하고 출력
  vec.push_back(17);
  vec.push_back(10);
  vec.push_back(13);
  vec.push_back(18);
  vec.push_back(15);
  vec.push_back(11);
  cout << "원본 벡터" << endl;
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl;
  // 벡터를 오름차순으로 정렬하고 출력
  cout << "오름차순으로 정렬한 벡터" << endl;
  sort(vec.begin(), vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl;
  // 벡터를 내림차순으로 정렬하고 출력
  cout << "내림차순으로 정렬한 벡터" << endl;
  sort(vec.begin(), vec.end(), greater <int>());
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl;
  return 0;
}  