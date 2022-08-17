/**************************************************************
 * 책임 연쇄 패턴 예제의 인터페이스 파일                      *
***************************************************************/
#ifndef CHAIN_H
#define CHAIN_H
#include <iostream>
using namespace std;

// LoanOfficer 추상 클래스
class LoanOfficer
{ 
  public: 
    virtual void handle(int value) = 0;
    virtual ~LoanOfficer() {}
};
// LoanOfficer1 구체 클래스
class LoanOfficer1 : public LoanOfficer
{
  private:
    LoanOfficer* next; 
  public: 
    LoanOfficer1();
    ~LoanOfficer1();
    void handle(int value);
};
// 구체 클래스
class LoanOfficer2 : public LoanOfficer
{
  private:
    LoanOfficer* next;
  public:
    LoanOfficer2();
    ~LoanOfficer2();
    void handle(int value);
};
// 구체 클래스
class LoanOfficer3 : public LoanOfficer
{
  private:
    LoanOfficer* next;
  public: 
    LoanOfficer3();
    ~LoanOfficer3();
    void handle(int value);
};
// 창구 역할을 하는 Loan 클래스
class Loan
{
  private: 
    int loanValue;
    LoanOfficer* next;
  public:
    Loan(int loanValue);
    ~Loan();
};
#endif