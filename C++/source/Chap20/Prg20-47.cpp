/*************************************************************
 * Greeting 클래스의 인터페이스 파일                         *
 *************************************************************/
#ifndef GREETING_H
#define GREETING_H 
#include <iostream>
#include <string>
#include "visitor.h"
using namespace std;

class Visitor;   // 전방 선언
// Greeting 클래스의 정의
class Greeting
{
  public:
    void accept(Visitor*);
};
#endif