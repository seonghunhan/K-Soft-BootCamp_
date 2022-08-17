/**************************************************************
 * Queue 클래스를 테스트하는 애플리케이션                     * 
 **************************************************************/
#include "queue.cpp"

int main()
{
  // 큐 객체 인스턴스화
  Queue<string> queue;
  // 큐에 노드 4개 추가
  queue.push("Henry");
  queue.push("William");
  queue.push("Tara");
  queue.push("Richard");
  // 노드 추가 후 상태 확인
  cout << "노드 4개를 추가하고 front와 back 호출하기" << endl;
  cout << "front(): " << queue.front() << endl;
  cout << "back(): " << queue.back();
  cout << endl << endl;
  // 큐에서 노드 2개 제거
  queue.pop();
  queue.pop();
  // 노드 제거 후 상태 확인
  cout << "노드 2개를 추가하고 front와 back 호출하기" << endl;
  cout << "front(): " << queue.front() << endl;
  cout << "back(): " << queue.back() << endl;
  return 0;
}