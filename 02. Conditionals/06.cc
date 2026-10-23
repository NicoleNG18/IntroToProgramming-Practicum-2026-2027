#include <iostream>

using namespace std;

int main() {
	unsigned a, b;

	cin >> a >> b;

	if (a < 10 || a > 99) {
		cerr << "error: a is not double-digit" << endl;
		return 0;
	}
	if (b < 10 || b > 99) {
		cerr << "error: b is not double-digit" << endl;
		return 0;
	}

	int d1 = a / 10;
	int d2 = a % 10;
	int d3 = b / 10;
	int d4 = b % 10;

	// TODO: do we need to do this as a number op?
	cout << a * 100 + b << endl;

	if (d1 < d2 && d2 < d3 && d3 < d4) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	cout << endl;

	return 0;
}
