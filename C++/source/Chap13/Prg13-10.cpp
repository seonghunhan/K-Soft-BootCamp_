/**************************************************************
 * Fraction 클래스의 인터페이스 파일                          *
 **************************************************************/
# ifndef Fraction_H
# define Fraction_H
# include <iostream>
# include <cassert>
# include <iomanip>
# include <cmath>
using namespace std;

// Fraction 클래스
class Fraction
{
  private:
    int numer; 
    int denom;
    int gcd(int n, int m = 1);   // 헬퍼 함수
    void normalize();        // 헬퍼 함수
  public:
    Fraction(int numer, int denom);   // 매개변수가 있는 생성자
    Fraction(double value);   // 매개변수가 있는 생성자
    Fraction();   // 기본 생성자
    Fraction(const Fraction& fract);   // 복사 생성자
    ~Fraction();   // 소멸자
    // 멤버 연산자
    operator double();   // 변환
    const Fraction  operator+() const;      // 양수                      
    const Fraction  operator-() const;   // 음수
    Fraction& operator++(); // 전위 증가                   
    Fraction& operator--(); // 전위 감소
    const Fraction operator++(int); // 후위 증가
    const Fraction operator--(int); // 후위 감소
    Fraction& operator= (const Fraction& right);  // 할당 연산자
    Fraction& operator+= (const Fraction& right);  // 복합 할당 연산자
    Fraction& operator-= (const Fraction& right);  // 복합 할당 연산자
    Fraction& operator*= (const Fraction& right); // 복합 할당 연산자
    Fraction& operator/= (const Fraction& right); // 복합 할당 연산자
    // friend 수학 연산자
    friend const Fraction operator+ 
        (const Fraction& left, const Fraction& right); 
    friend const Fraction operator-  
       (const Fraction& left, const Fraction& right);
    friend const Fraction operator* 
       (const Fraction& left, const Fraction& right);
    friend const Fraction operator/ 
       (const Fraction& left, const Fraction& right);
    // friend 관계 연산자
    friend bool operator== (const  Fraction& left, 
                            const  Fraction& right);                                   
    friend bool operator!= (const Fraction& left,
                            const Fraction& right);                                   
    friend bool operator<(const Fraction& left, 
                            const Fraction& right);                                   
    friend bool operator<= (const Fraction& left, 
                            const Fraction& right);                                   
    friend bool operator>(const Fraction& left, 
                            const Fraction& right);                                   
    friend bool operator>= (const Fraction& left, 
                            const Fraction& right);                               
  // 추출 연산자와 삽입 연산자
  friend  istream&  operator>>(istream& left, Fraction& right);       
  friend  ostream&  operator<<(ostream& left, const Fraction& right) ;                                   
};
#endif