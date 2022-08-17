/**************************************************************
 * Fraction 클래스의 구현 파일                                *
 **************************************************************/
#include "fraction.h"

// 매개변수가 있는 생성자
Fraction::Fraction(int num, int den = 1)
: numer(num), denom(den)
{
  normalize();
}
// 매개변수가 있는 생성자
Fraction::Fraction(double value)
{
  denom = 1;
  while((value - static_cast<int>(value)) > 0.0)
  {
    value *= 10.0;
    denom *= 10;
  }
  numer = static_cast<int>(value);
  normalize();
} 
// 기본 생성자
Fraction::Fraction()
: numer(0), denom(1)
{
}
// 복사 생성자
Fraction::Fraction(const Fraction& fract)
: numer(fract.numer), denom(fract.denom)
{
} 
// 소멸자
Fraction::~Fraction()
{
}
// 변환 연산자
Fraction::operator double()
{
  double num = static_cast<double>(numer);
  return (num / denom);
}
// 양수 연산자
const Fraction Fraction::operator+() const
{
  Fraction temp(+numer, denom);           
  return temp;           
}
// 음수 연산자
const Fraction Fraction::operator-() const
{
  Fraction temp(-numer, denom);                
  return temp;           
}
// 전위 증가 연산자
Fraction& Fraction::operator++() 
{
  numer = numer + denom;
  this->normalize();
  return *this;
}
// 전위 감소 연산자
Fraction& Fraction::operator--() 
{
  numer = numer - denom;
  this->normalize();  
  return *this;
}
// 후위 증가 연산자
const Fraction Fraction::operator++(int)
{
  Fraction temp(numer, denom);       
  ++(*this);                                           
  return temp;
}
// 후위 감소 연산자
const Fraction Fraction::operator--(int) 
{
  Fraction temp(numer, denom);          
  --(*this);                                             
  return temp;
}
// 할당 연산자
Fraction& Fraction::operator= (const Fraction& right)
{
  if(*this != right)     
  {
    numer = right.numer;
    denom = right.denom;
  }
  return *this;
}
// 복합 할당 연산자(+=)
Fraction& Fraction::operator+= (const Fraction& right)
{
  numer = numer * right.denom + denom * right.numer;
  denom = denom * right.denom;
  normalize();
  return *this;
}
// 복합 할당 연산자(-=)
Fraction& Fraction::operator-= (const Fraction& right)
{
  numer = numer * right.denom - denom * right.numer;
  denom = denom * right.denom;
  normalize();
  return *this;
}
// 복합 할당 연산자(*=)
Fraction& Fraction::operator*= (const Fraction& right)
{
  numer = numer * right.numer;
  denom = denom * right.denom;
  normalize();
  return *this;
}
// 복합 할당 연산자(/=)
Fraction& Fraction::operator/= (const Fraction& right)
{
  numer = numer * right.denom;
  denom = denom * right.numer;
  normalize();
  return *this;
}
// friend 덧셈 연산자
const Fraction operator+(const Fraction& left, const Fraction& right) 
{
  int newNumer = left.numer * right.denom + right.numer * left.denom;
  int newDenom = left.denom * right.denom;
  Fraction result(newNumer, newDenom);
  return result;
}
// friend 뺄셈 연산자
const Fraction operator-(const Fraction& left, const Fraction& right) 
{
  int newNumer = left.numer * right.denom - right.numer *  left.denom;
  int newDenom = left.denom * right.denom;
  Fraction result(newNumer, newDenom);
  return result;
}
// friend 곱셈 연산자
const Fraction operator*(const Fraction& left, const Fraction& right) 
{
  int newNumer = left.numer * right.numer;
  int newDenom = left.denom * right.denom;
  Fraction result(newNumer, newDenom);
  return result;
}
// friend 나눗셈 연산자
const Fraction operator/(const Fraction& left, const Fraction& right) 
{
  int newNumer = left.numer * right.denom;
  int newDenom = left.denom * right.numer;
  Fraction result(newNumer, newDenom);
  return result;
}
// friend == 연산자
bool operator== (const Fraction& left, const Fraction& right) 
{
  return (left.numer * right.denom == right.numer * left.denom);
}
// friend != 연산자
bool operator!= (const Fraction& left, const Fraction& right) 
{
  return (left.numer * right.denom != right.numer * left.denom);
}
// friend < 연산자
bool operator<(const Fraction& left, const Fraction& right) 
{
  return (left.numer * right.denom < right.numer * left.denom);
}
// friend <= 연산자
bool operator<= (const Fraction& left, const Fraction& right) 
{
  return (left.numer * right.denom <= right.numer * left.denom);
}
// friend > 연산자  
bool operator>(const Fraction& left, const Fraction& right) 
{
  return (left.numer * right.denom > right.numer * left.denom);
}
// friend >= 연산자     
bool operator>= (const Fraction& left, const Fraction& right) 
{
  return (left.numer * right.denom >= right.numer * left.denom);
}
// friend 추출 연산자
istream&  operator >>(istream& left, Fraction& right)  
{
  cout << "분자를 입력하세요: ";
  left >> right.numer;
  cout << "분자를 입력하세요: ";
  left >> right.denom;
  right.normalize();
  return left;
}
// friend 삽입 연산자
ostream& operator <<(ostream& left, const Fraction& right)  
{
  left << right.numer << "/" << right.denom ;
  return left;
}
// 헬퍼 함수(최대 공약수)
int Fraction::gcd(int n, int m)
{
  int gcd = 1;
  for(int k = 1; k <= n && k <= m; k++)
  {
    if(n % k == 0 && m % k == 0)
    {
      gcd = k;
    }
  }
  return gcd;
}
// 헬퍼 함수(약분)
void Fraction::normalize()
{
  if(denom == 0)
  {
    cout << "유효하지 않은 분수입니다. 프로그램을 중단합니다." << endl;
    assert(false);
  } 
  if(denom < 0)
  {
    denom = -denom;
    numer = -numer;
  }
  int divisor = gcd(abs(numer), abs(denom));
  numer = numer / divisor;
  denom = denom / divisor;
}