/**************************************************************
 * 빌더 패턴의 인터페이스 파일                                *
 **************************************************************/
#ifndef BUILDER_H
#define BUILDER_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

// 모든 패키지의 베이스 클래스가 되는 Vacation 추상 클래스
class Vacation 
{
  public: 
    virtual void bookHotels() = 0; 
    virtual void bookFlights() = 0; 
    virtual void bookTours() = 0;   
};
// 첫 번째 구체 클래스
class Package1 : public Vacation
{
  public:
    void bookHotels(); 
    void bookFlights();
    void bookTours();  
};
// 두 번째 구체 클래스
class Package2 : public Vacation
{  
  public:
    void bookHotels(); 
    void bookFlights();
    void bookTours();
};
// 세 번째 구체 클래스
class Package3 : public Vacation
{
  public:
    void bookHotels(); 
    void bookFlights();
    void bookTours();
};
// 정적 멤버를 갖는 Director 클래스
class  Director
{
  public:
    static Vacation* vacation;
    static void book(int type); // 클라이언트는 이 함수만 호출 가능
};
#endif  