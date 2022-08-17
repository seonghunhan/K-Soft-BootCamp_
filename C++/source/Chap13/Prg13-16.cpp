/**************************************************************
 * Poly 클래스의 인터페이스 파일                              *
 **************************************************************/
#ifndef  POLY_H
#define POLY_H
#include <iostream>
#include <string>
#include <cassert>
#include <iomanip>
using namespace std;

// Poly 클래스
class Poly
{
private:
  int degree;
  double* ptr;
public:
  Poly();
  Poly(int degree);
  Poly(int degree, double coef); // 항이 하나인 다항식
  ~Poly();
  Poly(const Poly& origin);
  Poly& operator= (const Poly& right);
  void fill();
  int max(int x, int y);
  friend const Poly operator+(const Poly& left, const Poly& right);
  friend const Poly operator-(const Poly& left, const Poly& right);
  friend const Poly operator*(const Poly& left, const Poly& right);
  friend const Poly operator/(const Poly& left, const Poly& right);
  friend const Poly operator%(const Poly& left, const Poly& right);
  friend ostream& operator<<(ostream& left, const Poly& poly);
};
#endif