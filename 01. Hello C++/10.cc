#include <iostream>
using namespace std;

int main() {
	float a, b, c, d;
	cin >> a >> b >> c >> d;

	cout <<
		(bool)((c <= a && a <= d) ||
		(c <= b && b <= d) ||
		(a <= c && c <= b) ||
		(a <= d && d <= b))
	<< endl;

	return 0;
}
