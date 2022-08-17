/*************************************************************
 * 임의 접근 기본 반복자와                                   *
 * 역 반복자를 살펴보는 간단한 프로그램                      *
 *************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 벡터와 반복자 인스턴스화
  vector<int> vec;
  vector<int>::iterator iter1; 
  vector<int>::reverse_iterator iter2;
  // 벡터를 10개의 요소로 채우기
  for(int i = 0; i < 10; i++)
  {
    vec.push_back(i * 10);
  }
  // 기본 반복자로 40과 20 출력  
  cout << "40 출력 후에 20 출력하기" << endl;
  iter1 = vec.begin();
  iter1 += 4;
  cout << *iter1 << " ";
  iter1 -= 2;
  cout << *iter1 << endl;
  // 역 반복자로 50과 70 출력
  cout << "50 출력 후에 70 출력하기" << endl;
  iter2 = vec.rbegin();
  iter2 += 4;
  cout << *iter2 << " ";
  iter2 -= 2;
  cout << *iter2 << endl;
  return 0;
} 