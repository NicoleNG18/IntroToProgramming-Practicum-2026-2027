#include <climits>
#include <cmath>
#include <iostream>
#include <ostream>

bool is_prime(unsigned long long num) {
	if (num == 1) return false;
	if (num == 2) return true;
	if (num % 2 == 0) return false;

	for (unsigned long long i = 3; i < num / 2; i += 2) {
		if (num % i == 0) return false;
	}

	return true;
}

unsigned long long prime_div_count(unsigned long long num) {
	unsigned long long cnt = 0;
	unsigned long long save = num;

	while (num > 1) {
		for (unsigned long long div = num; div >= 2; div--) {
			if (is_prime(div)) {
				bool ok = false;

				while (num % div == 0) {
					ok = true;
					num /= div;
				}

				if (ok) {
					cnt++;
					break;
				}
			}
		}
	}

	return cnt;
}
unsigned long long biggest_prime_div_count(unsigned long long a, unsigned long long b, unsigned long long target_cnt) {
	unsigned long long cnt = 0;

	for (unsigned long long curr = a; curr <= b; curr++) {
		if (prime_div_count(curr) == target_cnt) {
			cnt++;
		}
	}

	return cnt;
}

int main() {
	std::cout << biggest_prime_div_count(1, 10, 2) << std::endl;
	std::cout << biggest_prime_div_count(10, 20, 2) << std::endl;
	return 0;
}
