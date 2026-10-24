#include <iostream>

using namespace std;

int main() {
	long long num;
	cin >> num;
	if (num < 1) {
		cerr << "error: num out of range" << endl;
		return 0;
	}

	long square = num * num;
	bool ok = true;

	while (num != 0) {
		if (square % 10 != num % 10) {
			ok = false;
			break;
		}

		square /= 10;
		num /= 10;
	}

	cout << (ok ? "Automorphic" : "Not automorphic") << endl;
	return 0;
}
