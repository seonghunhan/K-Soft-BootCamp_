//#include "circle.h"
#include "sphere.h"
int main() {
	//Circle* ptr[3];

	//*ptr = new Sphere(5.0); // upcasting
	//*(ptr + 1) = new Circle(10.0);
	//*(ptr + 2) = new Sphere(10.0);

	//for (int i{ 0 }; i < 3; i++) {
	//	ptr[i]->print();
	//}

	//for (int i{ 0 }; i < 3; i++) {
	//	delete ptr[i];
	//}
	Circle c1(10.0);
	Sphere s1(15.0);
	std::cout << s1.getRadius() << '\n';
	std::cout << s1.area() << '\n';
	std::cout << s1.surface() << '\n';
	std::cout << s1.volume() << '\n';

	std::cout << c1.getRadius() << '\n';
	std::cout << c1.area() << '\n';
	return 0;
}
