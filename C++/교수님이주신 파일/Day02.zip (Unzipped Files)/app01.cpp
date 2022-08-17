//#include <iostream>
//using namespace std;
////void swap(int a, int b) {
////	int temp;
////	temp = a;
////	a = b;
////	b = temp;
////	cout << a << " " << b << '\n';
////}
//
////void swap(int* a, int* b) {
////	int temp;
////	temp = *a;
////	*a = *b;
////	*b = temp;
////	cout << *a << " " << *b << '\n';
////}
//
//void swap(int& a, int& b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << a << " " << b << '\n';
//}
//
//int main() {
//	int oa = 7;
//	int ob = 3;
//	cout << oa << " " << ob << '\n';
//	//swap(oa, ob); // Call by value
//	//swap(&oa, &ob); // Call by pointer
//	swap(oa, ob); // Call by reference
//	cout << oa << " " << ob << '\n';
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = 5;
//	int& pa = b; // b의 별칭 pa가 된다
//	int& ra = b; // b의 또다른 별칭 ra
//
//	//pa = a; // 값을 대입 (바인딩이 바뀌는게 아님)
//	ra = 9;
//	cout << pa << " " << b << " " << ra << '\n';
//
//	// 레퍼런스 변수는 자료타입 뒤에 &기호를 붙여 선언
//	// 레퍼런스 변수는 선언과 동시에 초기화 시켜야 함
//	// 초기화할때 일반 변수명이 와야 한다
//	// 레퍼런스는 선언후 초기화된 변수와 영구 바인딩이 된다 (포인터와 다름)
//
//	//int& pa = 9; // 일반변수명이 아닌 정수 리터럴로 초기화가 불가능함
//	//const int& pa = 9; // const 키워드를 사용하면 리터럴로 초기화 하는 것이 허용
//
//	//'A'; // 문자 리터럴
//	//8; // 정수 리터럴
//	//3.7; // 실수 리터럴
//	//"univ"; // 문자열 리터럴	
//
//	//int& pa = &b; // 레퍼런스변수는 포인터가 아니다. 따라서 주소를 받을 수 없다.
//	
//	//int& pa; // 초기화 코드가 없어서 에러
//	//pa = b;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//	int a = 2;
//	int b = 5;
//	int* const pa = &b;
//	cout << *pa << '\n'; // 5
//	pa = &a; // 가르키는 대상 변경!!
//	cout << *pa << '\n'; // 2
//	return 0;
//}