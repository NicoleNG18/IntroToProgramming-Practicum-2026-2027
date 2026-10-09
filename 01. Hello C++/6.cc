#include <iostream>

using namespace std;

int main() {
	unsigned val;
	cin >> val;

	unsigned units = val % 10;
	unsigned tens = (val / 10) % 10;
	unsigned hundreds = (val / 100) % 10;

	cout << "units = " << units << endl;
	cout << "tens = " << tens << endl;
	cout << "hundreds = " << hundreds << endl;
	cout << "sum = " << units + tens + hundreds << endl;

	return 0;
}
