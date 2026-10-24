#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	if (n < 1) {
		cerr << "error: count out of range" << endl;
		return 0;
	}

	long long first = -1;
	long long second = -1;

	for (long long i = 0; i < n; i++) {
		long long curr;
		cin >> curr;
		if (curr < 0) {
			cerr << "error: number out of range" << endl;
			return 0;
		}

		if (curr > first) {
			second = first;
			first = curr;
		}
		else if (curr > second) {
			second = curr;
		}
	}

	cout << first << " " << second << endl;

	return 0;
}
