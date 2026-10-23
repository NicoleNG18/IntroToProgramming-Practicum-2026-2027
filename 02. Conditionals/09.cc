#include <iostream>

using namespace std;

int main() {
	float a, b, c;

	cin >> a >> b >> c;
	if (a <= 0 || b <= 0 || c <= 0) {
		cerr << "error: bad side length" << endl;
		return 0;
	}

	if (
		a + b <= c ||
		b + c <= a ||
		c + a <= b
	) {
		cerr << "error: bad triangle" << endl;
		return 0;
	}

	if (a == b && b == c) {
		cout << "Equilateral" << endl;
		cout << "Acute" << endl;
		return 0;
	}
	else if (a == b || b == c || c == a) {
		cout << "Isosceles" << endl;
	}
	else {
		cout << "Scalene" << endl;
	}

	float left, right;

	if (a > b && a > c) {
		left = a * a;
		right = b * b + c * c;
	}
	else if (b > a && b > c) {
		left = b * b;
		right = a * a + c * c;
	}
	else {
		left = c * c;
		right = a * a + b * b;
	}

	if (left == right) {
		cout << "Right" << endl;
	}
	else if (left < right) {
		cout << "Acute" << endl;
	}
	else {
		cout << "Obtuse" << endl;
	}

	return 0;
}
