//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Student {
//private :
//	string name;
//	//string mName; //밑에와 같은 혼란을 피우기 위하여 멤버변수는 앞에 m을 붙인다.
//	double gpa;
//
//public :
//
//	Student() {
//		count++;
//	}
//	Student(string name) {
//		this->name = name;
//		count++;
//	}
//	~Student() {
//		count--;
//	}
//	//void setName(string name) { //멤버변수와 매개변수의 이름이 같아서 제대로 출력 못함
//	//	name = name;
//	//}
//	void setName(string name) {
//		this->name = name;
//	}
//
//	string getName() {
//		return name;
//	}
//	static int count;
//	static void printCount() {
//		cout << count << '명\n';
//	}
//};
//
//int Student::count = 0;
//
//void inha(Student* t) {
//	Student s3, s4; // +2
//	cout << "곧 졸업할 " << t->getName() << "학생\n";
//	delete t; // -1
//	Student::printCount(); // 정적 멤버함수
//} // -2
//
//
////int main() {
////	Student* s0 = new Student("김지훈");
////
////	Student s1; // +1
////	Student s2("우지수"); // +1
////	inha(s0);
////	//delete s0; // -1
////	s0 = nullptr;
////
////	s1.setName("한성훈");
////	cout << s1.getName() << '\n';
////	Student::printCount(); // 정적 멤버함수
////
////	return 0;
////}