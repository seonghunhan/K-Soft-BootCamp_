#include <iostream>
#include <string>
#include <cstring>

using namespace std;

char* reverse(char* o) { //일반 변수가 주소를 못받으니깐 파라메터를 포인터로 받아야한다!
// return이 없는 void로는 불가능

	//char r[100]; //여기서 이렇게 선언하면 함수가 끝날때 r이 없어지므로 리턴을 하더라도 더미값이 호출된다

	char* r = new char[strlen(o) + 1]; // int는 4바이트 char은 1바이트니깐 char로 하기

	for (int i = 0; i < strlen(o); i++)
		r[i] = o[strlen(o) -i -1]; //포인터는 arr과 문법호환 쌉가능

	r[strlen(o)] = 0;

	// cout << r << '\n';

	// return &r[0];
	return r; // 배열명은 0번째 배열원소의 주소를 가진다
	// 근데 r이 char이니깐 cout << r 하면 값이 나오는데 int일 경우는 주소값이 출력된다!!!
	// 그래서 *(r + 1)이런식으로 해야한다!!	

}
//
//int main() {
//	char orig[] = "inha";
//	//char orig[] = {'i', 'n', 'h', 'a', '\0'}; (NULL = 0 = '\0')
//	//char orig[] = {'i', 'n', 'h', 'a', NULL};
//	//char orig[] = {'i', 'n', 'h', 'a', 0}; 아스키코드에서 NULL에 해당하는 값은 0이므로 퉁칠수있음!
//	//char orig[] = { 'i', 'n', 'h', 'a' }; //cout은 널문자가 나올떄까지 출력하는데 없음으로 다른 메모리 침범
//	
//	char* copy = reverse(orig); // reverse(&orig[0]) orig의 0번인덱스 주소라는 뜻임
//
//	cout << orig << '\n';
//	cout << copy << '\n';
//	delete[] copy; //포인터는 죽어서 주소를 남기기에 이거 안하면 ahni가 두번출력된다. , 여기서는 copy가 가르키는 주소의 값을 지우는것
//	copy = nullptr; // 이거 까지해야 메모리 주소도 없애는것
//
//	return 0;
//}