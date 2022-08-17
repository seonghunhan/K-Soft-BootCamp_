/**************************************************************
 * priority_queue를 사용하는 프로그램                         *
 **************************************************************/
#include <queue>
#include <iostream>
using namespace std;

int main()
{
  // priority_queue 객체 생성
  priority_queue<int> line;
  // 요소 추가
  line.push(4);
  line.push(7);
  line.push(2);
  line.push(6);
  line.push(7);
  line.push(8);
  line.push(2);
  // 우선 순위에 따라 요소 출력
  while(!line.empty())
  {
    cout << line.top() << "    ";
    line.pop();
  }
  return 0;
}