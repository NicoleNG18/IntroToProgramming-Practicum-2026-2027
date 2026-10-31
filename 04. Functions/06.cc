#include <climits>
#include <cmath>
#include <iostream>

bool isDigit(char c) {
	return c >= '0' && c <= '9';
}
bool isUpper(char c) {
	return c >= 'A' && c <= 'Z';
}
bool isLower(char c) {
	return c >= 'a' && c <= 'z';
}
bool isAlpha(char c) {
	return isUpper(c) || isLower(c);
}
bool isAlnum(char c) {
	return isAlpha(c) || isDigit(c);
}
char capitalize(char c) {
	if (isLower(c)) {
		return c - 'a' + 'A';
	}
	else {
		return c;
	}
}
char makeLower(char c) {
	if (isUpper(c)) {
		return c - 'A' + 'a';
	}
	else {
		return c;
	}
}
int parseInt(char c) {
	if (isDigit(c)) {
		return c - '0';
	}
	else {
		return -1;
	}
}
char toChar(int digit) {
	if (digit < 0 || digit > 9) {
		return '\0';
	}
	return digit + '0';
}
long long myLog(long long x, long long base) {
	if (x <= 0) {
		return -1;
	}
	if (base <= 0) {
		return -1;
	}

	unsigned long long res = 0;

	while (x > 1) {
		res++;
		x /= base;
	}

	return res;
}
double myPow(long long x, long long n) {
	if (x == 0 && n == 0) {
		// Invalid
		return NAN;
	}

	if (n < 0) {
		return 1 / myPow(x, -n);
	}
	if (x < 0) {
		double res = myPow(-x, n);
		if (n % 2 == 0) {
			return res;
		}
		else {
			return -res;
		}
	}

	double res = x;

	for (long long i = 0; i < n - 1; i++) {
		res *= x;
	}

	return res;
}
long long myCeil(double num) {
	if (num > LONG_LONG_MAX) return LONG_LONG_MAX;
	if (num < LONG_LONG_MIN) return LONG_LONG_MIN;

	long long trunc = (long long)num;
	double fract = num - trunc;

	// Number is already whole
	if (fract > -0.0001 && fract < 0.0001) {
		return trunc;
	}

	if (trunc < 0) return trunc;
	else return trunc + 1;
}
long long myFloor(double num) {
	if (num > LONG_LONG_MAX) return LONG_LONG_MAX;
	if (num < LONG_LONG_MIN) return LONG_LONG_MIN;

	long long trunc = (long long)num;
	double fract = num - trunc;

	// Number is already whole
	if (fract > -0.0001 && fract < 0.0001) {
		return trunc;
	}

	if (trunc < 0) return trunc + 1;
	else return trunc;
}
long long myAbs(long long num) {
	if (num < 0) return -num;
	else return num;
}
