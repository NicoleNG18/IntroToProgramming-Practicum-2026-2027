#include <climits>
#include <iostream>
using namespace std;

int main() {
	long val;
	cin >> val;

	long sign = val % 2 + (val - 1) % 2;

	cout << sign * val << endl;

	return 0;
}
