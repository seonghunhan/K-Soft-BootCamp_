/**************************************************************
 * 퍼사드 패턴 예제의 구현 파일                               *
 **************************************************************/
#include "facade.h"

// LivingRoom의 생성자
LivingRoom::LivingRoom(double s)
:size(s)
{
}
// LivingRoom의 draw 멤버 함수
void LivingRoom::draw()
{
  cout << "거실의 크기는 " << size;
  cout << "평방 피트로 그립니다." << endl;
}
// BedRoom의 생성자
BedRoom::BedRoom(double s)
:size(s)
{
}
// BedRoom의 draw 멤버 함수
void BedRoom::draw()
{
  cout << "침실의 크기는 " << size ;
  cout << "평방 피트로 그립니다." << endl;
}
// Kitchen의 생성자
Kitchen::Kitchen(double s)
:size(s)
{
}
// Kitchen의 draw 멤버 함수
void Kitchen::draw()
{
  cout << "부엌의 크기는 " << size;
  cout << "평방 피트로 그립니다." << endl;
}
// BathRoom의 생성자
BathRoom::BathRoom(double s)
:size(s)
{
}
// BathRoom의 draw 멤버 함수
void BathRoom::draw()
{
  cout << "욕실의 크기는 " << size;
  cout << "평방 피트로 그립니다." << endl;
}
// House(facade)의 생성자
House::House(double s)
:size(s)
{
}
// House의 draw 멤버 함수
void House::draw()
{
  LivingRoom livingRm(size * 0.35);
  livingRm.draw();
  BedRoom bedRm(size * 0.35);
  bedRm.draw();
  Kitchen kitchen(size * 0.15);
  kitchen.draw();
  BathRoom BathRm(size * 0.15);
  BathRm.draw();
}  