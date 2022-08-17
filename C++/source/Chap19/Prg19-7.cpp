/**************************************************************
 * 프로그램 19-2를 리스트로 작성한 형태                       *
 **************************************************************/
#include <iostream>
#include <list>
using namespace std;

int main()
{
  // 리스트와 반복자 생성
  list<int> lst;
  list<int>::iterator iter1; 
  list<int>::reverse_iterator iter2; 
  // 리스트에 요소 10개 입력
  for(int i = 0; i < 10; i++)
  {
    lst.push_back(i * 10);
  }
  // iter1으로 출력
  cout << "40 출력 후에 20 출력하기" << endl;
  iter1 = lst.begin();
  iter1++;
  iter1++;
  iter1++;
  iter1++;
  cout << *iter1 << " ";
  iter1--;
  iter1--;
  cout << *iter1 << endl;
  // iter2로 출력
  cout << "50 출력 후에 70 출력하기" << endl;
  iter2 = lst.rbegin();
  iter2++;
  iter2++;
  iter2++;
  iter2++;
  cout << *iter2 << " ";
  iter2--;
  iter2--;
  cout << *iter2 << endl;
  return 0;
}