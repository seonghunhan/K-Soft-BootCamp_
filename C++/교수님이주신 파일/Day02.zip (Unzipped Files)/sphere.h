#pragma once
#include "circle.h"
class Sphere : public Circle {
public:
	Sphere(double radius);
	~Sphere();
	double surface() const;
	double volume() const;
	void print() const; // 오버라이딩
};
