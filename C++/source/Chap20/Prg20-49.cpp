/**************************************************************
 * Visitor 클래스의 인터페이스 파일                           *
 **************************************************************/
#ifndef VISITOR_H
#define VISITOR_H 
#include <iostream>
#include <string>
using namespace std;

// Visitor 추상 클래스의 정의
class Visitor
{
  public:
    virtual void visit() = 0;   
};
// EnglishVisitor 구체 클래스의 정의
class EnglishVisitor : public Visitor
{
  public:
    void visit();   
};
// FrenchVisitor 구체 클래스의 정의
class FrenchVisitor : public Visitor
{
  public:
    void visit();   
};
// SpanishVisitor 구체 클래스의 정의
class SpanishVisitor : public Visitor
{
  public:
    void visit();   
};
#endif