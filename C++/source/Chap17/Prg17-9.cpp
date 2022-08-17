/*************************************************************
 * 주어진 문자열을 기반으로 순열을 만드는 프로그램 *
 *************************************************************/
#include <iostream>
#include <string>
using namespace std;

// 함수 선언
void permute(string);
void permute(string, string);
void swap(char&, char&);

int main()
{
  // "xy"를 기반으로 하는 순열
  cout << "permute(xy) = "; 
  permute("xy");
  cout << endl;
  // "abc"를 기반으로 하는 순열
  cout << "permute(abc) = ";
  permute("abc");
  cout << endl; return 0;
}
// permute 재귀 함수 정의
void permute(string s)
{
  permute(s, "");
}
// permute 헬퍼 함수 정의
void permute(string str, string p)
{
  if(str.length() == 0)
  {
    cout << p << " " ;
  }
  else
  {
    for(int i = 0; i < str.length(); i++)
    {
      swap(str[0], str[i]);
      permute(str.substr(1, str.length() - 1), p + str.substr(0, 1)) ;
    }
  }
}
// swap 함수 정의
void swap(char& c1, char& c2)
{
  char temp = c1;
  c1 = c2;
  c2 = temp;
}
/*
permute(xy) = xy yx
permute(abc) = abc acb bac bca cab cba
*/