#include <iostream>
using namespace std;

const float USD_COEFF = 1.1;
const float YEN_COEFF = 145;

int main() {
	float euro;

	cin >> euro;
	cout << "dollars = " << euro * USD_COEFF << endl;
	cout << "yen = " << euro * YEN_COEFF << endl;

	return 0;
}
