#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	if (n < 1) {
		cerr << "error: n out of range" << endl;
		return 0;
	}

	long long max = n;
	long long curr = n;
	long long count = 0;
	cout << "Sequence: " << n << " ";

	while (curr != 1) {
		if (curr % 2 == 0) {
			curr /= 2;
		}
		else {
			curr = curr * 3 + 1;
		}

		cout << curr << " ";
		if (max < curr) {
			max = curr;
		}

		count++;
	}

	cout << endl;
	cout << "Steps: " << count << endl;
	cout << "Max value: " << max << endl;
	return 0;
}
