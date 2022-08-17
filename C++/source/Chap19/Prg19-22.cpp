/*************************************************************
 * 범위 내의 모든 요소에 함수를 적용하는                     *
 * for_each 알고리즘을 사용하는 프로그램                     *
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
  // 벡터 객체를 생성하고 요소 3개를 넣음
  vector<int> vec;
  vec.push_back(24);
  vec.push_back(42);
  vec.push_back(73);
  // print 함수를 사용해서 요소 출력
  for_each(vec.begin(), vec.end(), print);
  return 0;
}