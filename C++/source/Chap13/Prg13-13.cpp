/**************************************************************
 * Date 클래스의 인터페이스 파일                              *
 **************************************************************/
#ifndef  DATE_H
#define  DATE_H
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>
using namespace std;

class Date
{
  private: 
  // 인스턴스 데이터 멤버
  int month;
  int day;
  int year;
  // 정적 데이터 멤버와 멤버 함수
  static const int startWeekDay;
  static const int startYear;
  static const int daysInMonths[];
  static const string daysOfWeek[];
  static const string monthsOfYear[];  
  static bool isLeap(int year);
  // private 헬퍼 함수    
  bool isValid() const;
  string findWeekDay();
  int findTotalDays() const;
  void plusReset();
  void minusReset();
  public:
  // 생성자와 소멸자
  Date(int month, int day, int year);
  Date();
  ~Date();
  // 연산자 오버로드
  Date& operator++(); 
  Date& operator--(); 
  Date operator++(int); 
  Date operator--(int); 
  Date& operator+= (int days); 
  Date& operator-= (int days); 
  bool operator== (const Date& right) const;
  bool operator!= (const Date& right) const;
  Date& operator= (const Date& right);
  // friend 연산자 함수
  friend int operator-(const Date& date1, const Date& date2); 
  friend ostream& operator<<(ostream& output, const Date& date);
};
#endif