#include <climits>
#include <cmath>
#include <iostream>
#include <ostream>

unsigned long long factoriel(unsigned num) {
	unsigned long long res = 1;

	for (unsigned i = 2; i <= num; i++) {
		res *= i;
	}

	return res;
}

bool isStrong(unsigned long long num) {
	unsigned long long sum = 0;

	for (unsigned long long curr = num; curr > 0; curr /= 10) {
		sum += factoriel(curr % 10);
	}

	return sum == num;
}

int main() {
	std::cout << isStrong(145) << std::endl;
	std::cout << isStrong(40585) << std::endl;
	std::cout << isStrong(123) << std::endl;
	return 0;
}
