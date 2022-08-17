/**************************************************************
 * Stack 클래스를 테스트 해보는 애플리케이션 파일             *
 **************************************************************/
#include "stack.cpp"

int main()
{
  // 스택 객체를 인스턴스화
  Stack<string> stack;
  // 스택에 노드 4개 추가
  stack.push("Henry");
  stack.push("William");
  stack.push("Tara");
  stack.push("Richard");
  // 스택의 크기 확인
  cout << "스택의 크기: " << stack.size() << endl;
  // top 멤버 함수를 호출해서 위의 노드를 확인 후 pop 멤버 함수를 호출해서 제거
  while(stack.size() > 0)
  {
    cout << "Stack.top(): " << stack.top() << endl;
    stack.pop();
  }
  // 스택의 크기를 다시 확인
  cout << "스택의 크기: " << stack.size();
  return 0;
}