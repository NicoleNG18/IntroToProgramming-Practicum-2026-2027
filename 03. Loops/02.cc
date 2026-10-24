#include <iostream>

using namespace std;

int main() {
	long a, b;
	cin >> a >> b;
	if (a < 1) {
		cerr << "error: a out of range" << endl;
		return 0;
	}
	if (b < 1) {
		cerr << "error: b out of range" << endl;
		return 0;
	}

	long i = a;
	if (i > b) i = b;

	// Not the best solution...
	for (; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			cout << i << endl;
		}
	}

	return 0;
}
