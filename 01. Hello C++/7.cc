#include <iostream>
using namespace std;

int main() {
	unsigned a, b;
	cin >> a >> b;


	cout << std::boolalpha;
	cout << "prod = " << a * b << endl;
	cout << "last digit = " << (a * b) % 10 << endl;
	cout << "is odd = " << (b % 2 != 0) << endl;

	return 0;
}
