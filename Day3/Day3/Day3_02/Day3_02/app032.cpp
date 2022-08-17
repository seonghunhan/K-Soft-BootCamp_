#include <iostream>
using namespace std;

class MyException {
public :
	const char* information;
	int code;
	MyException(const char* information, int code) : information(information), code(code) {

	}
};

class DynamicArray {

private :
	int size;
	int* p;

public:
	DynamicArray(int size) {
		this -> size = size;
		p = new int[size]; // 동적 메모리 할당
	}

	~DynamicArray() {
		delete[] p; // 힙메모리 해제
		p = nullptr;
	}

	//bool setAt(int index, int data) {
	//	if (index >= size)
	//		return false;
	//	p[index] = data;
	//	return true;
	//}

	void setAt(int index, int data) {
		if (index >= size || index < 0)
			// throw "인덱스 범위 벗어남 set\n";
			throw MyException("인덱스 범위 벗어남 set\n", 4885);
		p[index] = data;

	}
	
	int getAt(int index) {
		if (index >= size || index < 0)
			// throw "인덱스 범위 벗어남. get\n";
			throw MyException("인덱스 범위 벗어남 set\n", 4886);
		return p[index];
	}
};

int main() {
	//DynamicArray d1(5), d2(10);
	//d1.setAt(0, 99); // 0번 인덱스에 99번 값을 넣자
	//d1.setAt(2, 7);
	//d1.setAt(1, -91);

	// 옛날 형식
	//bool ok = d1.setAt(2, 100);
	//if (ok)
	//	cout << "정상 입력\n";
	//else
	//	cout << "인덱스 범위를 벗어났습니다\n";

	//cout << d1.getAt(2) << '\n';

	// 요즘 형식
	try {
		DynamicArray d1(3), d2(10);
		d1.setAt(4, 100);
		cout << d1.getAt(2) << '\n';
	}
	catch (const char* err) {
		cout << err;
	}

	catch (const MyException& e) {
		cout << "에러코드 : " << e.code << '\n';
		cout << "에러코드 : " << e.information << '\n';
	}

	return 0;
}