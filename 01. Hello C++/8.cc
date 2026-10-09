#include <iostream>
using namespace std;

int main() {
	unsigned long num;
	cin >> num;
	num %= 100000000;

	cout << "*****" << num % 1000 << endl;

	return 0;
}
