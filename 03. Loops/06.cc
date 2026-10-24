#include <iostream>

using namespace std;

int main() {
	long long num_bin;
	cin >> num_bin;

	long long res = 0;
	long long mul = 1;

	while (num_bin != 0) {
		int digit = num_bin % 10;
		if (digit > 1) {
			cerr << "error: not a binary number" << endl;
			return 0;
		}

		res += digit * mul;
		mul *= 2;
		num_bin /= 10;
	}

	cout << res << endl;
	return 0;
}
