/**************************************************************
 * President 클래스의 인터페이스 파일           *
 **************************************************************/
#ifndef PRESIDENT_H
#define PRESIDENT_H
#include <iostream>
#include <string>
using namespace std;

// President 클래스의 정의
class President
{
  private:
    string name;         
    static  President* ptr;       // 정적 변수
    President(string name);        // private 생성자
  public: 
    static President* create(string name); // 정적 함수
    string getName() const;
};
#endif