/*************************************************************
 * 변경 알고리즘을 사용하는 프로그램                         *
 *************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
using namespace std;

// print 함수의 정의
void print(int value)
{
  cout << value << "  ";
}

int main()
{
  // 벡터 인스턴스화
  vector <int> vec;
  // 요소 5개 추가
  vec.push_back(11);
  vec.push_back(14);
  vec.push_back(17);
  vec.push_back(23);
  vec.push_back(35);
  vec.push_back(52);
  // 원본 출력
  cout << "원본 벡터" << endl;
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl;
  // 벡터를 반전하고 출력
  cout << "반전한 벡터" << endl;
  reverse(vec.begin(), vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl; 
  // 벡터 회전하고 출력
  cout << "회전한 벡터" << endl;
  rotate(vec.begin(), vec.begin() + 2, vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl; 
  // 벡터를 셔플하고 출력
  cout << "셔플한 벡터" << endl;
  random_shuffle(vec.begin(), vec.end());
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl;
  return 0;
}