/***************************************************************
 * 10진수를 16진수로 변환하는                                  * 
 * 애플리케이션 파일                                           *
 ***************************************************************/
#include "stack.cpp"

int main()
{
  // 스택 객체 인스턴스화
  Stack <char> stack;
  // 문자열 객체 2개와 변수 2개 생성
  string converter("0123456789ABCDEF");
  string hexadecimal;
  int decimal;
  int index;
  // 10진수 입력
  do 
  {
    cout << "양의 정수를 입력해주세요: ";
    cin >> decimal;
  } while(decimal <= 0);
  cout << "입력된 10진수 값 = " << decimal << endl;
  // 16진수 문자로 변환해서 스택에 넣음
  while(decimal != 0)
  {
    stack.push(converter[decimal % 16]);
    decimal = decimal / 16;
  }
  // 스택에서 꺼내서 문자열 조합
  while(stack.size() > 0)
  {
    hexadecimal.push_back(stack.top());
    stack.pop();
  }
  // 16진수 출력
  cout << "변환한 16진수 값 = " << hexadecimal;
  return 0;
} 