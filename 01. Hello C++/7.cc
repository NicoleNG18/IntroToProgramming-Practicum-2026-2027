#include <iostream>
using namespace std;

int main() {
	unsigned a, b;
	cin >> a >> b;

	unsigned prod = a * b;

	cout << std::boolalpha;
	cout << "prod = " << prod << endl;
	cout << "last digit = " << prod % 10 << endl;
	cout << "is odd = " << (prod % 2 != 0) << endl;

	return 0;
}
