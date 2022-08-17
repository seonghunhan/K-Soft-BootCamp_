/**************************************************************
 * 재귀가 아니라 스택을 활용해 구현한                         * 
 * 문자열 반전 애플리케이션                                   *
 **************************************************************/
#include "stack.cpp"

int main()
{
  // 스택 객체와 문자열 객체 2개 인스턴스화
  Stack <char> stack;
  string origin;
  string reversed;
  // 문자열 입력 받음
  cout << "뒤집을 문자열을 입력해주세요: ";
  getline(cin, origin);
  // 문자열의 문자를 하나씩 스택에 넣음
  for(int i = 0; i < origin.size(); i++)
  {
    stack.push(origin [i]);
  }
  // 스택에서 문자를 꺼내서 반전
  while(stack.size() > 0)
  {
    reversed.push_back(stack.top());
    stack.pop();
  }
  // 출력
  cout << "원본 문자열: " << origin << endl;
  cout << "뒤집은 문자열: " << reversed;
  return 0;
}