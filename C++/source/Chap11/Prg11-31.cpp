/**************************************************************
 * Tokenizer 클래스를 테스트하는 애플리케이션 파일            *
 **************************************************************/
#include "tokenizer.h"

int main()
{
  // 토큰화 할 문자열
  string target("This is the string to be tokenized. \n");
  // 구분 문자로 사용할 문자열
  string delimit(" \n");     // 띄어쓰기와 줄바꿈을 구분 문자로 사용
  // Tokenizer 객체 인스턴스화  
  Tokenizer tokenizer(target, delimit);
  // target 문자열을 기반으로 토큰 찾아 출력
  while(tokenizer.moreToken())
  {
    cout << tokenizer.nextToken() << endl;
  }
  return 0;
}