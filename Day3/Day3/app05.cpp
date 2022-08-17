//#include <iostream>
//#include <string>
//using namespace std;
//
//// 베이스 클래스의 정의
//class Base
//{
//public:
//	virtual void print() const { cout << "베이스 클래스" << endl; }
//	virtual ~Base() {
//		cout << "나는 부모클래스의 소멸자!\n";
//	}
//};
//// 파생 클래스의 정의
//class Derived : public Base
//{
//public:
//	virtual void print() const { cout << "파생 클래스" << endl; }
//	virtual ~Derived() {
//		cout << "나는 자식클래스의 소멸자!\n";
//	}
//};
//int main()
//{
//	// 베이스 클래스에 대한 포인터(소켓) 생성
//	Base* ptr;
//	// ptr 포인터로 베이스 클래스의 객체 가리키기
//	ptr = new Base();
//	ptr->print();
//	delete ptr;
//	// ptr 포인터로 파생 클래스의 객체 가리키기
//	ptr = new Derived(); // Downcasting
//	ptr->print();
//	//Derived* p = new Derived(); // Ok
//	//p->print();
//	delete ptr;
//	return 0;
//}