#include <iostream>


unsigned long long square(int num) {
	return num * num;
}

unsigned long long sumOfSquares(int num) {
	unsigned long long res = 0;

	for (int i = 1; i <= num; i++) {
		res += square(i);
	}

	return res;
}

int main() {
	std::cout << sumOfSquares(-12) << std::endl;
	std::cout << sumOfSquares(1) << std::endl;
	std::cout << sumOfSquares(2) << std::endl;
	std::cout << sumOfSquares(3) << std::endl;

	return 0;
}
