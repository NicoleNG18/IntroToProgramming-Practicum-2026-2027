#include <iostream>

using namespace std;

int main() {
	long a, b, c;

	cin >> a >> b >> c;
	if (a <= 0 || b <= 0 || c <= 0) {
		cerr << "error: bad side length" << endl;
		return 0;
	}

	if (
		a + b > c &&
		b + c > a &&
		c + a > b
	) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}
