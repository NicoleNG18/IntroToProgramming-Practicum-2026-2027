#include <iostream>

using namespace std;

int main() {
	long n;
	cin >> n;
	if (n < 1) {
		cerr << "error: n out of range" << endl;
		return 0;
	}

	for (long y = 0; y < n; y++) {
		for (long x = 0; x < n; x++) {
			if (x - y == 0) cout << "0";
			else if (x - y > 0) cout << "+";
			else cout << "-";
			cout << " ";
		}
		cout << endl;
	}

	return 0;
}
