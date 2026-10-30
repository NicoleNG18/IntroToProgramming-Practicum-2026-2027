#include <cmath>
#include <iostream>

bool feq(double a, double b) {
	return a - b > -0.0001 && a - b < 0.0001;
}

double get_line_func_a(
	double x1, double y1,
	double x2, double y2
) {
	return (y1 - y2) / (x1 - x2);
}
double get_line_func_b(
	double x1, double y1,
	double x2, double y2
) {
	return (y2 * (x1 - x2) - x2 * (y1 - y2)) / (x1 - x2);
}

double is_point_on_line(
	double a, double b,
	double x, double y
) {
	// The line function, by definition
	return feq(y, a * x + b);
}

double are_collinear(
	long long x1, long long y1,
	long long x2, long long y2,
	long long x3, long long y3
) {
	if (feq(x1, x2)) {
		// If the first two points are the same, naturally, they define a line with the third
		if (feq(y1, y2)) {
			return true;
		}

		// They lie on an x=c line, hence the third's x must equal the first two's
		return feq(x3, x1);
	}

	double a = get_line_func_a(x1, y1, x2, y2);
	double b = get_line_func_a(x1, y1, x2, y2);

	return is_point_on_line(a, b, x1, x2);
}

int main() {
	std::cout << are_collinear(0, 0, 1, 1, 2, 2) << std::endl;
	std::cout << are_collinear(0, 0, 1, 2, 3, 1) << std::endl;

	return 0;
}
