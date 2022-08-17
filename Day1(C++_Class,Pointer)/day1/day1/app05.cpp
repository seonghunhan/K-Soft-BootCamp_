#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

//void inhaCat(char* ptr1, char* ptr2) {
//	int a = inhaLen(ptr1);
//	int b = inhaLen(ptr2);
//	int c = a + b;
//
//	char temp = { c };
//
//	//for (int i = 0; i < a; i++) {
//	//	temp[i] = ptr1++;
//	//}
//
//	//for (int i = a; i < b; i++) {
//	//	temp[i] = ptr2++;
//	//}
//
//}

int inhaLen(char* ptr) {

	int count = 0;

	while (*ptr != NULL) {
		count++;
		ptr++; // 포인터가 턴마다 가르키는 글자 다음 글자로 증가
	}

	return count;
}
//
//int main()  {
//	char a[] = "hanseonghun";
//	char b[] = "inha";
//	//cout << strlen(a) << '\n';
//	//cout << inhaLen(&a[0]) << '\n';
//	
//	strcat(a, b);
//	cout << a << '\n';
//
//	inhaCat(&a[0], &b[0]);
//
//	return 0;
//}