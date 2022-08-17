/**************************************************************
 * 빌더 패턴을 사용하는 애플리케이션 파일                     *
 **************************************************************/
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;

// Vehicle 추상
class Vehicle 
{  
  public:
  virtual Vehicle* clone() const = 0; 
  virtual ~Vehicle(){}
};
// Car 구체 클래스
class Car : public Vehicle
{
  private: 
    string model;
    string color;
  public:
    Car(string model, string color);
    Car(const Car& car);
    Car* clone() const;
};
// Truck 구체 클래스
class Truck : public Vehicle
{
  private:
    string size;
    string color;
  public:
    Truck(string size, string color);
    Truck(const Truck& truck);
    Truck* clone() const;  
};
#endif  