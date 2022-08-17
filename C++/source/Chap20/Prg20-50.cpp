/**************************************************************
 * Visitor 클래스의 구현 파일                                 *
 **************************************************************/
#include "visitor.h"

// EnglishVisitor 클래스의 visit 멤버 함수 정의
void EnglishVisitor::visit()
{ 
  cout << "Good Morning." << endl;
}
// FrenchVisitor 클래스의 visit 멤버 함수 정의
void FrenchVisitor::visit()
{
  cout << "Bon Jour." << endl;
}
// SpanishVisitor 클래스의 visit 멤버 함수 정의
void SpanishVisitor::visit()
{
  cout << "Buenos Dias." << endl;
}