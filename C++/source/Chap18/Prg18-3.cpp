/**************************************************************
 * List 클래스를 테스트하는 애플리케이션 파일                 *
 **************************************************************/
#include "list.cpp"
#include <string>

int main()
{
  // 리스트 객체를 인스턴스화
  List<string> list;
  // 리스트에 노드 6개를 추가
  list.insert(0, "Michael");
  list.insert(1, "Jane");
  list.insert(2, "Sophie");
  list.insert(3, "Thomas");
  list.insert(4, "Rose");
  list.insert(5, "Richard");
  // 리스트의 노드들을 출력
  cout << "리스트 출력하기" << endl;
  list.print();
  // 노드 3개만 출력
  cout << "일부 노드만 출력하기" << endl;
  cout << list.get(0) << endl;
  cout << list.get(3) << endl;
  cout << list.get(5) << endl;
  // 노드 3개 제거
  cout << "노드 일부 제거하고 노드 출력하기" << endl;
  list.erase(0);
  list.erase(3);
  list.print();
  // 노드를 제거한 이후에 리스트의 크기 출력
  cout << "리스트 크기 확인하기" << endl;
  cout << "리스트의 크기: " << list.size();
  return 0;
} 