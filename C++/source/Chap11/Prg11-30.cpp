/**************************************************************
 * Tokenizer 클래스의 구현 파일                               *
 **************************************************************/
#include "tokenizer.h"

// 생성자
Tokenizer::Tokenizer(const string& tar, const string& del)
: target(tar), delim(del)
{
  begin = target.find_first_not_of(delim, 0);
  end = target.find_first_of(delim, begin);
}
// 소멸자
Tokenizer::~Tokenizer()
{
}
// 추가 토큰이 있는지 확인
bool Tokenizer::moreToken() const
{
  return (begin != -1);
}
// 다음 토큰 리턴
string Tokenizer::nextToken()
{
  string token = target.substr(begin, end - begin);
  begin = target.find_first_not_of(delim, end);
  end = target.find_first_of(delim, begin);
  return token;
}