/**************************************************************
 * House(퍼사드) 클래스와 4개의 방 클래스의 인터페이스 파일   *
 *                                                            *
 **************************************************************/
#ifndef FACADE_H
#define FACADE_H
#include <string>
#include <iostream>
using namespace std;

// LivingRoom 클래스
class LivingRoom
{  
  private: 
    double size;
  public:
   LivingRoom(double size); 
   void draw();
};
// BedRoom 클래스
class BedRoom 
{
  private: 
    double size;
  public:
   BedRoom(double size); 
  void draw();
};
// Kitchen 클래스
class Kitchen
{
  private: 
    double size;
  public:
    Kitchen(double size); 
    void draw();
};
// BathRoom 클래스
class BathRoom
{
  private: 
    double size;
  public:
   BathRoom(double size); 
  void draw();
};
// House(퍼사드) 클래스
class House 
{
  private: 
    double size;
  public:
    House(double size); 
    void draw();
};
#endif  