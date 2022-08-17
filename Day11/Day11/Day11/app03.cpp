#include <iostream>
#include <string>

using namespace std;

int main() {
	string a = "abc";
	string b("def");
	string c{ "ghi" };

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	return 0;
}