/*************************************************************
 * 함수에 대한 포인터와 함수 객체 사용하는 프로그램          *
 *************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
using namespace std;

// 사용자 정의 print 함수
void print(int value) 
{
  cout << value << " ";
}

int main()
{
  // 4개의 요소를 갖는 벡터 생성
  vector <int> vec;
  vec.push_back(24);
  vec.push_back(42);
  vec.push_back(73);
  vec.push_back(92);
  // 함수에 대한 포인터로 요소 출력
  for_each(vec.begin(), vec.end(), print);
  cout << endl;
  // 모든 요소의 부호를 반전하고 출력
  transform(vec.begin(), vec.end(), vec.begin(), negate<int>());
  for_each(vec.begin(), vec.end(), print);
  return 0;
}