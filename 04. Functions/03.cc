#include <cmath>
#include <iostream>

unsigned long long vec_sq_len(long long x, long long y) {
	return std::sqrt(x * x + y * y);
}

bool on_same_circle(
	long long x1, long long y1,
	long long x2, long long y2
) {
	return vec_sq_len(x1, y1) == vec_sq_len(x2, y2);
}

int main() {
	std::cout << on_same_circle(3, 4, -3, -4) << std::endl;
	std::cout << on_same_circle(2, 5, 4, 5) << std::endl;

	return 0;
}
