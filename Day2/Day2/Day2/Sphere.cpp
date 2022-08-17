///**************************************************************
// * Student 클래스의 구현 파일                                 *
// **************************************************************/
//#include "Sphere.h"
//
// // 기본 생성자 좀 더 모던한 방식
Student::Student() : Person(), gpa(0.0)  // this -> gpa=0.0
{
}
Sphere::Sphere(int radious) //오래된방식의 기본 생성자
{
	Circle();
	rd = radious; 
}
//매개변수가 있는 생성자  
Sphere::Sphere(long id, double gp)
	: Person(id), gpa(gp) // id는 Person클래스의 매개변수 있는 생성자에 들감
{

}

 //매개변수가 있는 생성자  
Student::Student(long id, double gp)
	
{
	Person(id);
	gpa = gp;
	assert(gpa >= 0.0 && gpa <= 4.0);
}

// 복사 생성자 
Sphere::Sphere(const Sphere& sphere)
	: Circle(sphere), gpa(sphere.gpa)
{
}
 //소멸자
Sphere::~Sphere()
{
}
// 접근자 멤버 함수
void Sphere::print() const
{
	//Person::print(); //Person 클래스의 print를 쓴것
	cout << "Sphere : " << 3.14 * rd * rd << endl;
}