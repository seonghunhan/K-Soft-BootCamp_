/**************************************************************
 * The application file to test the Prototype Pattern         *
 **************************************************************/
#include "vehicle.h"

int main()
{
  // 차량 4대 생성
  Vehicle* veh1 = new Car("세단", "흰색");   // 원본
  Vehicle* veh2 = veh1->clone();  // 복제
  Vehicle* veh3 = new Truck("큰", "검정색"); // 원본 
  Vehicle* veh4 = veh3->clone(); // 복제
  // 차량 파괴
  delete veh1;
  delete veh2;
  delete veh3;
  delete veh4;
  return 0;
}