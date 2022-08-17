/**************************************************************
 * Poly 클래스의 구현 파일                                    *
 **************************************************************/
#include "poly.h"

// 기본 생성자
Poly::Poly()
:degree(0)
{
  ptr = 0;
}
// 매개변수가 있는 생성자
Poly::Poly(int deg)
:degree(deg)
{
  ptr = new double[degree + 1];
  for(int i = degree; i >=0 ; i--)
  {
    ptr[i] = 0.0;
  }
}
// 항이 하나인 다항식을 만드는 생성자
Poly::Poly(int deg, double coef)
:degree(deg)
{
  ptr = new double[degree + 1];
  for(int i = degree; i >=0 ; i--)
  {
    ptr[i] = 0.0;
  }
  ptr[degree] = coef;
}
// 소멸자
Poly::~Poly()
{
  delete[] ptr;
}
// 복사 생성자
Poly::Poly(const Poly& origin)
{
  ptr = new double[degree + 1];
  for(int i = origin.degree ; i >= 0 ; i--)
  {
    ptr[i] = origin.ptr[i];
  }
}
// 할당 연산자
Poly& Poly::operator= (const Poly& right)
{
  this->degree = right.degree;
  this->ptr = new double [degree + 1];
  for(int i = right.degree; i >= 0; i--)
  {
   (this->ptr)[i] = right.ptr[i];
  }
  return *this;
}
// + 연산자
const Poly operator+(const Poly& left, const Poly& right) 
{
  Poly result(max(left.degree, right.degree));
  for(int i = result.degree; i >= 0; i--)
  {
    if(i <= left.degree && i <= right.degree)
    {
      result.ptr[i] = left.ptr[i] + right.ptr[i];
    }
    else if(i <= left.degree && i > right.degree)
    {
      result.ptr[i] = left.ptr[i];
    }
    else 
    {
      result.ptr[i] = right.ptr[i];
    }
  }
  return result;
}
 // - 연산자
const Poly operator-(const Poly& left, const Poly& right) 
{
  Poly result(max(left.degree , right.degree));
  for(int i = result.degree; i >= 0; i--)
  {
    if(i <= left.degree && i <= right.degree)
    {
      result.ptr[i] = left.ptr[i] - right.ptr[i];
    }
    else if(i <= left.degree && i > right.degree)
    {
      result.ptr[i] = left.ptr[i];
    }
    else 
    {
      result.ptr[i] = -right.ptr[i];
    }
  }
  return result;
}
// * 연산자
const Poly operator*(const Poly& left, const Poly& right) 
{
  int degree = left.degree + right.degree;
  Poly result(degree);
  for(int i = result.degree ; i >= 0; i--)
  {
    result.ptr[i] = 0;
  }
  for(int i = left.degree; i >= 0; i--)
  {
    for(int j = right.degree; j >= 0; j--)
    {
      result.ptr[i + j] += (left.ptr[i] * right.ptr[j]);
    }
  }
   return result;
}
// / 연산자
  const Poly operator/(const Poly& left, const Poly& right) 
  {
    Poly result(left.degree - right.degree);
    Poly temp(left.degree);
    temp = left;
    int i = temp.degree;
    int j = right.degree;
    int k = i - j;
    while(i >= j)
    {
      double coef = temp.ptr[i] / right.ptr[j];
      Poly poly(k , coef);
      temp = temp -( poly * right);
      result = result + poly;
      i--;
      k = i - j;
    }
    return result;
}
  // % 연산자
const Poly operator%(const Poly& left, const Poly& right) 
{
  Poly result(left.degree - right.degree - 1);
  Poly temp(left.degree);
  temp = left;
  result = temp -(temp /right) * right;
  return result;
}
// << 연산자
ostream& operator<<(ostream& output, const Poly& poly)
{
  string sign;
  for(int i = poly.degree; i >= 0 ; i--)
  {
    if(poly.ptr[i] > 0.0 || poly.ptr[i] < 0.0)
    {
      output << fixed << showpos << setprecision(2);
      output << poly.ptr[i];
      output << noshowpos;
      if(i != 0)
      {
        output << "x^";
        output << i;
      }
      output << " " ;
    }
  }

  return output;
}
// 헬퍼 함수
int max(int x, int y)
{
  if(x >= y)
  {
    return x;
  }
  return y;
}
// 다항식을 입력받는 함수
void Poly::fill() 
{
  for(int i = degree; i >= 0 ; i--)
  {
    cout << i << "차수의 계수를 입력하세요: ";
    cin >> ptr[i]; 
  }
  cout << endl;
}