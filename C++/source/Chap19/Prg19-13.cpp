/*************************************************************
 * 큐로 기부 내역을 구분하는 프로그램                        *
 *************************************************************/
#include <queue>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

// print 함수 선언  
void print(queue<int> queue);
    
int main()
{
  // 5개의 큐와 2개의 변수 선언
  queue<int> queue1, queue2, queue3, queue4, queue5;
  int num;
  int donation;
  // 기부 내역 랜덤하게 생성하면서 구분
  srand(time(0));
  for(int i = 0; i < 50; i++)
  {
    num = rand();
    donation = num %(50 - 0 + 0) + 0;
    switch(donation / 10)
    {
      case 0:  queue1.push(donation);
               break;        
      case 1:  queue2.push(donation);
               break;          
      case 2:  queue3.push(donation);
               break;    
      case 3:  queue4.push(donation);
               break;      
      case 4:  queue5.push(donation);
      break;          
    }
  }
  // 구분된 결과 출력  
  cout << "기부 금액 범위 $00~09:";
  print(queue1);
  cout << "기부 금액 범위 $10~19:";
  print(queue2);
  cout << "기부 금액 범위 $20~29:";
  print(queue3);
  cout << "기부 금액 범위 $30~39:";
  print(queue4);
  cout << "기부 금액 범위 $40~49:";
  print(queue5);
  return 0;
}
// print 함수의 정의
void print(queue <int> queue)
{
  while(!queue.empty())
  {
    cout << queue.front() << " ";
    queue.pop();
  }
  cout << endl;
}