/**************************************************************
 * accumulate 수치 함수를 사용하는 프로그램                   *
 **************************************************************/
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
using namespace std;

// print 함수
void print(int value)
{
  cout << value << "  ";
}

int main()
{
  // 벡터 인스턴스화하고 출력
  vector<int> vec ;
  vec.push_back(17);
  vec.push_back(10);
  vec.push_back(13);
  vec.push_back(13);
  vec.push_back(18);
  vec.push_back(15);
  vec.push_back(17);
  for_each(vec.begin(), vec.end(), print);
  cout << endl;
  // 벡터 요소의 합을 구하고 출력
  int sum = accumulate(vec.begin(), vec.end(), 0);
  cout << "합계 = " << sum;
  return 0;
}