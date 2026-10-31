#include <climits>
#include <cmath>
#include <iostream>
#include <ostream>

unsigned long long remove_dig(unsigned long long num, unsigned dig_i) {
	unsigned long long res = 0;
	unsigned long long mul = 1;


	for (int i = 0; i < dig_i; i++) {
		res += (num % 10) * mul;
		num /= 10;
		mul *= 10;
	}

	num /= 10;

	return res + num * mul;
}

void check_weird_div_11(unsigned long long n, unsigned long long m) {
	for (unsigned long long i = n; i <= m; i++) {
		unsigned long long weird_i = remove_dig(i, 2);

		if (weird_i % 11 == 0) {
			std::cout << i << std::endl;
		}
	}
}

int main() {
	check_weird_div_11(1, 1024);
	return 0;
}
