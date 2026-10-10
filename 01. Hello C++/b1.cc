#include <climits>
#include <iostream>
using namespace std;

int main() {
	unsigned num;
	cin >> num;

	unsigned d0 = num % 10;
	num /= 10;
	unsigned d1 = num % 10;
	num /= 10;
	unsigned d2 = num % 10;
	num /= 10;
	unsigned d3 = num % 10;
	num /= 10;

	cout << std::boolalpha;
	cout << (d0 == d3 && d1 == d2) << endl;

	return 0;
}
