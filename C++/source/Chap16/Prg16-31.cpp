/*************************************************************
 * MonoAlpha 클래스의 구현 파일                              *
 *************************************************************/
#include "monoalpha.h"
#include <fstream>

// 생성자
MonoAlpha::MonoAlpha()
{
}
// 소멸자
MonoAlpha::~MonoAlpha()
{
}
// public 멤버 함수
void MonoAlpha::encrypt(const char* plainFile, const char* cipherFile)
{
  ifstream istrm(plainFile, ios::in);
  ofstream ostrm(cipherFile, ios::out);
  char c1, c2;
  while(istrm.get(c1))
  {
    c2 = searchEncrypt(c1);
    ostrm.put(c2);
  } 
  istrm.close();
  ostrm.close();
}
// public 멤버 함수
void MonoAlpha::decrypt(const char* cipherFile, const char* plainFile)
{
  ifstream istrm(cipherFile, ios::in);
  ofstream ostrm(plainFile, ios::out);
  char c1, c2;
  while(istrm.get(c1))
  {
    c2 = searchDecrypt(c1);
    ostrm.put(c2);
  }  
  istrm.close();
  ostrm.close();
}
// private 멤버 함수
char MonoAlpha::searchEncrypt(char c)
{
  int i = 0;
  while(true)
  {
    if(key[i][0] == c)
    {
      return key[i][1] ;
    }
    i++;
  }
}
// private 멤버 함수
char MonoAlpha::searchDecrypt(char c)
{
  int i = 0;
  while(true)
  {
    if(key[i][1] == c)
    {
      return key[i][0];
    }
    i++;  
  }
}
  // 정적 키 배열 정의
  const char MonoAlpha::key[][2] = {{'a', 'N'}, {'b', 'N'},
      {'c', 'A'}, {'d', 'T'}, {'e', 'R'}, {'f', 'B'}, {'g', 'E'}, {'h', 'C'},
      {'i', 'F'}, {'j', 'U'}, {'k', 'X'}, {'l', 'D'}, {'m', 'Q'}, {'n', 'G'},
      {'o', 'Y'}, {'p', 'L'}, {'q', 'K'}, {'r', 'H'}, {'s', 'V'}, {'t', 'I'},
      {'u', 'J'}, {'v', 'M'}, {'w', 'P'}, {'x', 'Z'}, {'y', 'S'}, {'z', 'W'} };