#include <iostream>

using namespace std;

int main() {
	long long num;
	cin >> num;

	if (num < 1) {
		cerr << "error: num out of range" << endl;
		return 0;
	}

	int max_digit = -1;
	int max_digit_cnt = 0;

	for (int curr_digit = 10; curr_digit >= 1; curr_digit--) {
		int curr_count = 0;

		long long num_save = num;

		while (num_save != 0) {
			if (num_save % 10 == curr_digit) {
				curr_count++;
			}
			num_save /= 10;
		}

		if (max_digit_cnt < curr_count) {
			max_digit = curr_digit;
			max_digit_cnt = curr_count;
		}
	}

	cout << max_digit << endl;

	return 0;
}
