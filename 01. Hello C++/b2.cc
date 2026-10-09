#include <climits>
#include <iostream>
using namespace std;

int main() {
	long val;
	cin >> val;

	unsigned long sign = (unsigned long)val >> (sizeof val * 8 - 1);
	unsigned long signmask = sign * -1;

	cout << signmask << endl << ((signmask & -val) | (~signmask & val)) << endl;

	return 0;
}
