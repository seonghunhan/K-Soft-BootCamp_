/*************************************************************
 * 합집합을 구하는 프로그램                                  * 
 *************************************************************/
#include <set>
#include <vector>
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
  // 첫 번째 세트(집합) 생성
  set<int> first ;
  first.insert(10);
  first.insert(19);
  first.insert(14);
  first.insert(17);
  first.insert(13);
  cout << "첫 번째 세트의 요소" << endl;
  for_each(first.begin(), first.end(), print);
  cout << endl << endl;
  // 두 번째 세트(집합) 생성
  set<int> second;
  second.insert(16);
  second.insert(14);
  second.insert(13);
  second.insert(11);
  second.insert(20);
  cout << "두 번째 세트의 요소" << endl;
  for_each(second.begin(), second.end(), print);
  cout << endl << endl;
  // 합집합 구하고 벡터에 저장
  vector<int> temp(10);
  vector<int>::iterator iter;
  vector<int>::iterator endIter;
  endIter = set_union(first.begin(), first.end(), second.begin(), 
            second.end(),temp.begin());
  // 벡터에서 결과 세트로 요소 복사
  set<int> result;
  for(iter = temp.begin(); iter != endIter; iter++)
  {
    result.insert(*iter);
  }
  cout << "결과 세트의 요소" << endl;
  for_each(result.begin(), result.end(), print);
  cout << endl << endl;
  return 0;
}