#include <cmath>
#include <iostream>

double side_len(
	long long x1, long long y1,
	long long x2, long long y2
) {
	return std::sqrt(
		(x1 - x2) * (x1 - x2) +
		(y1 - y2) * (y1 - y2)
	);
}

double triangle_perimeter(
	long long x1, long long y1,
	long long x2, long long y2,
	long long x3, long long y3
) {
	return
		side_len(x1, y1, x2, y2) +
		side_len(x3, y3, x2, y2) +
		side_len(x1, y1, x3, y3);
}

int main() {
	std::cout << triangle_perimeter(0, 0, 3, 0, 0, 4) << std::endl;
	std::cout << triangle_perimeter(1, 1, 4, 5, 6, 2) << std::endl;

	return 0;
}
