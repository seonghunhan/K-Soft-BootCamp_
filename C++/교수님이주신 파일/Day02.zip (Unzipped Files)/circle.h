#pragma once
#include <iostream>
using namespace std;
class Circle {
//protected:
private:
	double radius;
public:
	Circle(double radius); 
	virtual ~Circle();
	double perimeter() const;
	double area() const;
	double getRadius() const;
	virtual void print() const;
};