#include "sphere.h"

Sphere::Sphere(double radius) : Circle(radius)
{	
}

Sphere::~Sphere()
{
	cout << "구 소멸자\n";
}

double Sphere::surface() const
{
	return 2.0 * this->getRadius() * this->perimeter();
}

double Sphere::volume() const
{
	return (4.0/3.0) * this->getRadius() * this->area();
}

void Sphere::print() const
{
	cout << "부피는 " << volume() << "입니다\n";
}
