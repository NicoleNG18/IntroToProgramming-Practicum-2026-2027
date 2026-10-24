#include <iostream>

using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;

	if (b < 1) {
		cerr << "error: denominator out of range" << endl;
		return 0;
	}

	if (a == 0) {
		cout << 0 << endl;
		return 0;
	}

	long abs_a = a;
	if (abs_a < 0) {
		abs_a = -abs_a;
	}

	long long gcd = abs_a > b ? abs_a : b;
	long long gcd_tmp = abs_a > b ? b : abs_a;

	while (gcd_tmp != 0) {
		long long rem = gcd % gcd_tmp;
		gcd = gcd_tmp;
		gcd_tmp = rem;
	}

	a /= gcd;
	b /= gcd;

	cout << a << "/" << b << endl;
	return 0;
}
