#include <climits>
#include <cmath>
#include <iostream>
#include <ostream>

unsigned long long mix(unsigned long long a, unsigned long long b) {
	unsigned long long res = 0;

	while (a != 0 || b != 0) {
		if (a != 0) {
			res *= 10;
			res += a % 10;
			a /= 10;
		}
		if (b != 0) {
			res *= 10;
			res += b % 10;
			b /= 10;
		}
	}

	return res;
}

int main() {
	std::cout << mix(123, 456) << std::endl;
	std::cout << mix(123, 45678) << std::endl;
	std::cout << mix(781, 0) << std::endl;
	return 0;
}
