///**************************************************************
// * Person 클래스와 Student 클래스를 사용하는 애플리케이션     *
// **************************************************************/
#include "Sphere.h"

int main()
{
	// Person 객체 인스턴스화하고 사용
	int circleNum;
	cout << "반지름을 입력하세요 : " << '\n';
	cin >> circleNum;
	Circle circle(circleNum);
	circle.print();
	cout << endl;

	// Student 객체 인스턴스화하고 사용
	Sphere sphere();
	cout << "Student 객체의 정보: " << endl;
	sphere().print();
	cout << endl;
	return 0;
}