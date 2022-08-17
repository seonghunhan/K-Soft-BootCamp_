/**************************************************************
 * President 클래스의 구현 파일                               *
 **************************************************************/
#include "president.h"

// 정적 변수의 정의
President* President::ptr = 0;
// private 생성자의 정의
President::President(string nm)
: name(nm)
{
  cout << "대표가 선택되었습니다." << endl;
}
// create 정적 함수의 정의
President* President::create(string name)
{
  if(!ptr)  
  {
    ptr = new President(name);
  }
  else 
  {
    cout << "이미 대표가 존재합니다!" << endl;
  }
  return ptr;
}
// 접근자 함수
string President::getName() const
{
  return name;
}