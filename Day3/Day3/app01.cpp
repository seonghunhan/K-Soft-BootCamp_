/**************************************************************
 * typeid 연산자로 클래스 이름을 확인하는 프로그램            *
 **************************************************************/
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void print() {   // virtual void 하면 말이 출력된다. C++은 부모 자식 선택이 가능하나 자바는 모든게 virtual처리되어 있다.
		cout << "동물\n";
	}
};

class Horse : public Animal{ // inheritance
public:
	void print() { // override
		cout << "말\n";
	}
};

class Rose {

};

//int main()
//{
//	Animal* a = new Horse; // upcast
//	a->print(); // polymorphism, virtual keyword
//	cout << a << '\n';
//	//Horse* h = (Horse*)a;
//	//Horse* h = dynamic_cast<Horse*>(a);
//	Rose* r = (Rose*)a;
//	//delete a;
//
//	cout << r << '\n';
//	delete r;
//
//	return 0;
//}