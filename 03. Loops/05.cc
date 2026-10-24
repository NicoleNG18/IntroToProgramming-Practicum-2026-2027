#include <iostream>

using namespace std;

int main() {
	long num, pos;
	cin >> num >> pos;
	if (num < 1) {
		cerr << "error: num out of range" << endl;
		return 0;
	}

	long max_pos = 0;
	for (long curr = num; curr != 0; curr /= 10) {
		max_pos++;
	}

	if (pos < 1 || pos > max_pos) {
		cerr << "error: position out of range" << endl;
		return 0;
	}

	for (long i = 0; i < max_pos - pos; i++) {
		num /= 10;
	}

	cout << num % 10 << endl;

	return 0;
}
