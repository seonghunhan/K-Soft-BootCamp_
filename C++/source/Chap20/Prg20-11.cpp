/**************************************************************
 * 멤버 함수를 구현하는 구현 파일                             *
 **************************************************************/
#include "vehicle.h"

// Car의 생성자
Car::Car(string m, string c)
:model(m), color(c)  
{
  cout << color << " " << model << " 자동차를 만들었습니다." << endl;
}
// Car의 복사 생성자
Car::Car(const Car& car)
:model(car.model), color(car.color)
{
  cout << color << " " << model << " 자동차를 만들었습니다." << endl;
}
// Car의 clone 멤버 함수
Car* Car::clone() const
{
  return new Car(*this);
}
// Truck의 생성자
Truck::Truck(string s, string c)
:size(s), color(c)  
{
  cout << color << " " << size << " 트럭을 만들었습니다." << endl;
}
// Truck의 복사 생성자
Truck::Truck(const Truck& truck)
:size(truck.size), color(truck.color)
{
  cout << color << " " << size << " 트럭을 만들었습니다." << endl;
}
// Truck의 clone 멤버 함수
Truck* Truck::clone() const
{
  return new Truck(*this);
}