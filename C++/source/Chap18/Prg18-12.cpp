/**************************************************************
 * 큐를 사용해서 대기열을 구현하고                            *
 * 통계를 출력하는 애플리케이션                               *
 **************************************************************/
#include "queue.cpp"
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <utility>

// randNum 함수 정의
int randNum(int low, int high)
{
  int temp = rand();
  int num = temp %(high - low + 1) + low;
  return num;
}

int main()
{
  // 변수 선언
  int size = 15;          
  int arriveDelay;
  int serveTime;
  int arrive = 0;
  int start = 0;
  int leave = 0;
  int wait = 0;
  int totalServeTime = 0;
  int totalWait = 0;
  // 큐 객체 인스턴스화
  Queue<pair <int, int >> line;
  // 랜덤한 고객 행동 설정
  srand(time(0));
  for(int i = 0; i < size; i++)
  {
    pair< int, int> p(randNum(1, 6), randNum(5, 10));
    line.push(p);  
  }
  // 통계 헤더 출력
  cout << left << setw(10) << "Arrive" << setw(10) << "Start" ;  
  cout << left << setw(10) << "Delay" << setw(10) << "Leave" ;   
  cout << left << setw(10) << "Serve time" <<endl;
  // 통계 계산하고 출력
  while(line.size() > 0)
  {
    arriveDelay = line.front().first;
    serveTime = line.front().second;
    arrive = arrive + arriveDelay;
    if(arrive >= leave)
    {
      start = arrive;
    }
    else 
    {
      start = leave;
    }
    leave = start + line.front().second;
    wait = start - arrive;
    cout << left << setw(10) << arrive << setw(10) << start;
    cout << left << setw(10) << wait;
    cout << setw(10) << leave;
    cout << left << setw(12) << serveTime << endl;
    totalServeTime += serveTime;
    totalWait += wait;
    line.pop();
  }
  // 통계 정리 출력
  double averageWait = static_cast<double>(totalWait) / size;
  cout << "---------------------------------------------------" << endl;
  cout << "전체 서비스 시간: " << totalServeTime << endl;
  cout << "고객 평균 대기시간: " << averageWait << endl;
  return 0;
}