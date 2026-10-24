#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	if (n < 1) {
		cerr << "error: count out of range" << endl;
		return 0;
	}

	long long sum = 0;

	for (long long i = 1; i <= n; i++) {
		sum += i;
	}

	for (long long i = 0; i < n - 1; i++) {
		long long curr;
		cin >> curr;
		if (curr < 1) {
			cerr << "error: number out of range" << endl;
			return 0;
		}

		sum -= curr;
	}

	cout << sum << endl;

	return 0;
}
