/*************************************************************
 * 덱으로 요소 회전하는 프로그램                             * 
 *************************************************************/
#include <deque>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

// 전역 print 함수
void print(deque<string> deq)
{
  for(int i = 0; i < deq.size(); i++)
  {
  cout << deq.at(i) << "  ";
  }
  cout << endl;
}

int main()
{
  // 덱을 생성하고 요소 5개로 초기화
  deque <string> deq(7);
  string arr[5]= {"John", "Mary", "Rich", "Mark", "Tara"};
  for(int i = 0 ; i < 5; i++)
  {
    deq[i] = arr[i];
  }
  print(deq);
  // 시계 방향으로 회전
  deq.push_back(deq.front());
  deq.pop_front();
  print(deq);
  // 시계 반대 방향으로 회전
  deq.push_front(deq.back());
  deq.pop_back();
  print(deq);
  return 0;
}