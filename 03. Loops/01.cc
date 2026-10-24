#include <iostream>

using namespace std;

int main() {
	long n = 0;
	cin >> n;
	if (n < 1) {
		cerr << "error: n out of range" << endl;
		return 0;
	}

	for (long i = 1; i < n; i++) {
		cout << i << " + " << (n - i) << " = " << n << endl;
	}

	return 0;
}
