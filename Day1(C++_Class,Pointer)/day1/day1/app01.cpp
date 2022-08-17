#include <iostream> // C++ 입출력 스트림
#include <string> // C++ 문자열 
using namespace std;

class Human {
private:
	// data member, field, member variable
	string name;
	string bloodType;
	int age;
public:
	// constructor
	Human(); // default constructor (1. 클래스의 이름과 같다 2. 리턴타입이 없다)
	Human(string n); // parameter constructor (문자열 인수 1개)
	Human(string n, string bt); // parameter constructor (문자열 인수 2개)
	Human(const Human& h); // copy constructor

	// member function 	
	// getter, setter
	void setName(string n);
	void setBloodtype(string n);
	int getAge();
	string getName();
	void setAge(int a);

	// 일반 멤버함수
	void print();
	void eat(string food);
	void sleep();
};
Human::Human() {
	age = 0;
	name = "무명";
	// this 키워드는 실행 시점 객체의 메모리 번지 주소를 가진 포인터
	cout << this << " 객체 생성(기본 생성자)!\n";
}
Human::Human(string n) {
	age = 0;
	name = n;
	cout << this << " 객체 생성(매개변수 1개 생성자)!\n";
}
Human::Human(string n, string bt)
{
	age = 0;
	name = n;
	bloodType = bt;
	cout << this << " 객체 생성(매개변수 2개 생성자)!\n";
}
Human::Human(const Human& h)
{
	// h4.age = h3.age;
	this->age = h.age;
	name = h.name;
	bloodType = h.bloodType;
	cout << this << " 객체 생성(복사 생성자)!\n";
}
void Human::eat(string food) {
	cout << name << "가(이) " << food << "를 냠냠~\n";
}
void Human::sleep()
{
	//cout << this->getName() << "이(가) 쿨쿨\n";
	cout << getName() << "이(가) 쿨쿨\n";
}
void Human::setBloodtype(string b) {
	bloodType = b;
}
void Human::setName(string n) {
	name = n;
}
int Human::getAge() {
	return age;
}
string Human::getName()
{
	return name;
}
void Human::setAge(int a) {
	age = a;
}
void Human::print() {
	cout << name << "님의 나이는 " << age << "살 입니다. 혈액형은 " << bloodType << "형 입니다\n";
}
//int main() {
//	Human h1("박인하"), h2;
//	Human h3("김인하", "A");
//	Human h4(h3); // copy constructor
//
//	h4.print();
//
//	h3.setAge(10);
//	h3.print();
//
//	h2.sleep();
//
//	cout << h1.getName() << '\n';
//	cout << h2.getName() << '\n';
//	h2.setName("이인하");
//
//	h1.setAge(24);
//	h1.setBloodtype("B");
//	//h1.setName("박인하");
//
//	h1.eat("와퍼");
//	h2.eat("된장찌게");
//	cout << h1.getAge() << '\n';
//	h1.eat("피자");
//	h1.print();
//
//	//Human h2;
//	//h2.name = "박인하";
//	//h1.name = "김인하";
//	//h1.age = 22;
//	//cout << h1.name << '\n';
//	//cout << h2.name << '\n';
//	return 0;
//}

// 블럭 지정후 전체 주석처리는 Ctrl+k+c
// 블럭 지정후 전체 주석해제는 Ctrl+k+u
//#include <iostream>
//using namespace std;
//
//void inha() {
//	cout << "인하 함수 안에서의 출력\n";
//}
//
//int main() {
//	inha();
//	//std::cout << "첫 번째 출력\n";
//	cout << "첫 번째 출력\n";
//	inha();
//	return 0;
//}

// void는 리턴이 없다는것

