#include <iostream>


unsigned digit_count(long long num) {
	if (num < 0) num = -num;

	unsigned res = 0;

	do {
		num /= 10;
		res++;
	}
	while (num != 0);

	return res;
}

int main() {
	std::cout << digit_count(0) << std::endl;
	std::cout << digit_count(1234) << std::endl;
	std::cout << digit_count(-1234) << std::endl;

	return 0;
}
