#include <iostream> // C++ 입출력 스트림
#include <string> // C++ 문자열 
using namespace std;

int main() {
	//int a = 10; 
	//int* pa = &a;  //포인터는 어떤 변수의 주소값을 가르킨다라고 생각


	//cout << &a << " "<< pa << '\n';

	//cout << a << " " << *pa << '\n';  // 포인터변수에 *을 붙이면 그 메모리의 값을 꺼내와서 표현한다

	//*pa = 5; // 이렇게 포인터로 그 메모리주소의 값을 바꾸는것도 가능
	////pa = 199; // 포인터 변수에 정수 선언 불가능

	//cout << &a << " " << pa << '\n';

	//cout << a << " " << *pa << '\n';


	// 정적 할당
	int arr[] = { 11, 9, 77 };

	cout << arr[2] << '\n';
	arr[1] = -11;
	cout << arr[1] << '\n';


	// 위와 달리 new를 사용해서 동적 메모리 할당하는 예제
	//int size = 0;
	//double average = 0.0;
	//int sum = 0;
	//cin >> size; // 몇 명이 오셨어요?
	//int* p = new int[size]; //new를 사용하면 동적 메모리 할당 가능

	//cin >> *(p + 0);
	//cin >> *(p + 1);

	//for (int i = 0; i < size; i++)
	//	cin >> *(p + i);

	//for (int i = 0; i < size; i++) {
	//	cout << *(p + i) << " ";
	//	sum = sum + *(p + i);
	//}

	int size = 0;

	cin >> size; //(몇 명이 오셨어요 ? )
		int* p = new int[size]; //(new를 사용하면 동적 메모리 할당 가능)

	for (int i = 0; i < size; i++)
		cin >> *(p + i);

	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}

	// size는 정수형태로 출력 그로 인하여 소수점이 잘리는 것을 막기 위해 size변수를 실수형으로 캐스팅
	// sum도 프로모션으로 실수로 동작 이게 C++ 형변환
	// cout << (sum / static_cast<double>(size)) << '\n';

	//delete[] p; //new로 선언하면 메모리 효율을위해 delete를 해줘야함
	


	


	return 0;
}









//class Human {
//private:
//	// data member, field, member variable
//	string name;
//	string bloodType;
//	int age;
//public:
//	// constructor
//	Human(); // default constructor (1. 클래스의 이름과 같다 2. 리턴타입이 없다)
//	Human(string n); // parameter constructor (문자열 인수 1개)
//	Human(string n, string bt); // parameter constructor (문자열 인수 2개)
//	Human(const Human& h); // copy constructor
//
//	// member function 	
//	// getter, setter
//	void setName(string n);
//	void setBloodtype(string n);
//	int getAge();
//	string getName();
//	void setAge(int a);
//
//	// 일반 멤버함수
//	void print();
//	void eat(string food);
//	void sleep();
//};
//Human::Human() {
//	age = 0;
//	name = "무명";
//	// this 키워드는 실행 시점 객체의 메모리 번지 주소를 가진 포인터
//	cout << this << " 객체 생성(기본 생성자)!\n";
//}
//Human::Human(string n) {
//	age = 0;
//	name = n;
//	cout << this << " 객체 생성(매개변수 1개 생성자)!\n";
//}
//Human::Human(string n, string bt)
//{
//	age = 0;
//	name = n;
//	bloodType = bt;
//	cout << this << " 객체 생성(매개변수 2개 생성자)!\n";
//}
//Human::Human(const Human& h)
//{
//	// h4.age = h3.age;
//	this->age = h.age;
//	name = h.name;
//	bloodType = h.bloodType;
//	cout << this << " 객체 생성(복사 생성자)!\n";
//}
//void Human::eat(string food) {
//	cout << name << "가(이) " << food << "를 냠냠~\n";
//}
//void Human::sleep()
//{
//	//cout << this->getName() << "이(가) 쿨쿨\n";
//	cout << getName() << "이(가) 쿨쿨\n";
//}
//void Human::setBloodtype(string b) {
//	bloodType = b;
//}
//void Human::setName(string n) {
//	name = n;
//}
//int Human::getAge() {
//	return age;
//}
//string Human::getName()
//{
//	return name;
//}
//void Human::setAge(int a) {
//	age = a;
//}
//void Human::print() {
//	cout << name << "님의 나이는 " << age << "살 입니다. 혈액형은 " << bloodType << "형 입니다\n";
//}
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

