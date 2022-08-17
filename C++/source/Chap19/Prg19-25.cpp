/*************************************************************
 * 비변경 알고리즘을 사용하는 프로그램                       *
 *************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// isEven 함수 정의
bool isEven(int value)
{
  return (value % 2  == 0);
}
// timesTwo 함수 정의
void timesTwo(int& value)
{
  value = value * 2;
}
// print 함수 정의
void print(int value)
{
  cout << value << "  ";
}

int main()
{
  // 정수의 벡터 생성
  vector<int> vec;
  // 벡터에 요소 10개 넣기
  vec.push_back(17);
  vec.push_back(10);
  vec.push_back(13);
  vec.push_back(13);
  vec.push_back(18);
  vec.push_back(15);
  vec.push_back(17);
  vec.push_back(13);
  vec.push_back(13);
  vec.push_back(18);
  // 원본 출력
  cout << "원본 벡터의 값" << endl;
  for_each(vec.begin(), vec.end(), print);
  cout << endl << endl;
  // 벡터 내부의 10의 개수 세기
  cout << "벡터 내부에 있는 10의 개수 = ";
  cout << count(vec.begin(), vec.end(), 10);
  cout << endl << endl;
  // 벡터 내부의 홀수 개수 세기
  cout << "벡터 내부에 있는 홀수의 개수 = ";
  cout << count_if(vec.begin(), vec.end(), isEven);
  cout << endl << endl;
  // 벡터 내부에 있는 값 2배로 만듦
  cout << "벡터 내부의 요소에 2 곱하기" << endl;
  for_each(vec.begin(), vec.end(), timesTwo);
  for_each(vec.begin(), vec.end(), print);
  return 0;
}