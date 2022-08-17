/**************************************************************
 * Date 클래스의 구현 파일                                    *
 **************************************************************/
#include "date.h"

// 매개변수가 있는 생성자
Date::Date(int m, int d, int y )
: month(m), day(d), year(y)
{
  if(!isValid())
  {
    cout << "유효하지 않은 날짜입니다. 프로그램을 중단합니다." << endl;
    assert(false);
  }
} 
// 기본 생성자
Date::Date()
: month(1), day(1), year(1900)
{
}
// 소멸자
Date::~Date()
{
}
// 전위 증가 연산자
Date& Date::operator++() 
{
  day++;
  plusReset();
  return *this;
}
// 전위 감소 연산자
Date& Date::operator--() 
{
  day--;
  minusReset();
  return *this;
}
// 후위 증가 연산자
Date Date::operator++(int) 
{
  Date temp(month, day, year);
  ++(*this);
  return temp;
}
// 후위 감소 연산자
Date Date::operator--(int) 
{
  Date temp(month, day, year);
  --(*this);
  return temp;
}
// 복합 할당 연산자 +=
Date& Date::operator+= (int days) 
{
  for(int i = 1; i <= days; i++)
  {
    ++(*this); 
  }    
  return *this;
}
// 복합 할당 연산자 -=
Date& Date::operator-= (int days) 
{
  for(int i = days; i >= 1; i--)
  {
    --(*this); 
  }  
  return *this;
}
// == 연산자
bool Date::operator== (const Date& right) const
{
  bool fact1 = (month == right.month);
  bool fact2 = (day == right.day);
  bool fact3 = (year == right.year);
  return (fact1 && fact2 && fact3);
}
// != 연산자
bool Date::operator!= (const Date& right) const 
{
  return !(*this == right);
}
// 할당 연산자
Date& Date::operator= (const Date& right) 
{
  if(*this != right)   // 자기 할당 확인
  {
    month = right.month;
    day = right.day;
   year = right.year;
  }
  return *this;
}
// friend 뺄셈 연산자
int operator-(const Date& date1, const Date& date2) 
{
  return (date1.findTotalDays() - date2.findTotalDays());
}
// friend << 연산자
ostream& operator<<(ostream& output, const Date& date)
{
  output << Date::daysOfWeek [(date.findTotalDays()
                   + Date::startWeekDay)% 7] << " ";
  output << Date::monthsOfYear [date.month] << " ";
  output << date.day << " ";
  output << date.year << endl;
  return output;
}
// 유효성 검사 헬퍼 함수
bool Date::isValid() const
{
  bool validMonth = (month >= 1) &&(month <=12);
  bool validYear = (year >= startYear);
  bool validDay = (day >= 1) &&(day <= (Date:: daysInMonths[month]
                   +(isLeap(year) && month == 2)));  
  return (validMonth && validYear && validDay);
}  
// 덧셈 후 정리하는 헬퍼 함수
void Date::plusReset()
{
  bool extraDay = (isLeap(year) && month == 2);
  if(day > daysInMonths[month] + extraDay)
  {
    day = 1;
    month++;
  }
  if(month > 12)
  {
    month = 1;
    year++;
  }
}
// 뺄셈 후 정리하는 헬퍼 함수
void Date::minusReset()
{
  if(day < 1)
  {
    month--;  
    if(month < 1)
    {
      month = 12;
      year--;
    }
    bool extraDay = isLeap(year) &&(month == 2);
    day = daysInMonths[month] + extraDay ;  
  } 
}
// 전체 날 수를 구하는 헬퍼 함수
int Date::findTotalDays() const
{
  int totalDays = 0;
  int currentYear = startYear;
  while(year > currentYear)
  {
    totalDays += 365 + isLeap(currentYear);
    currentYear++;
  }
  int currentMonth = 1;
  while(month > currentMonth)
  {
    totalDays += daysInMonths[currentMonth];
    if(currentMonth == 2)  
    {
      totalDays += isLeap(year);
    }
    currentMonth++;
  }
  totalDays += day - 1;
  return totalDays;
}
// 정적 데이터 멤버 초기화
const int Date::startWeekDay = 1;
const int Date::startYear = 1900;
const int Date::daysInMonths [ ] = {0, 31, 28, 31, 30, 31,
                                      30, 31, 31, 30, 31, 30, 31};
const string Date::daysOfWeek[] = {"Sun", "Mon","Tue",
                                      "Wed", "Thr", "Fri", "Sat"};
const string Date::monthsOfYear[] = {"", "Jan", "Feb", "Mar", "Apr","May", 
                                         "Jun", "Jul", "Aug", "Sep", "Oct", "Nov" "Dec"};
// 정적 멤버 함수 정의
bool Date::isLeap(int year) 
{
  return (year % 400 == 00) ||((year % 4 == 0)&&(year % 100 != 0));
}