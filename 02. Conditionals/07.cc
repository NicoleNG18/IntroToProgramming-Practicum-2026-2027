#include <iostream>

using namespace std;

int main() {
	long a, x, y;

	cin >> a >> x >> y;

	if (a <= 0) {
		cerr << "error: invalid side length for 'a'" << endl;
		return 0;
	}
	if (x < 0) {
		cerr << "error: x is negative" << endl;
		return 0;
	}
	if (y < 0) {
		cerr << "error: y is negative" << endl;
		return 0;
	}

	if (
		((x / a) % 2 == 0) ^
		((y / a) % 2 == 0)
	) {
		cout << "white" << endl;
	}
	else {
		cout << "black" << endl;
	}

	return 0;
}
