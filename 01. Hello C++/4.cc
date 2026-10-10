#include <iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;
	cout << std::boolalpha;
	cout << (a % b == 0);

	return 0;
}
