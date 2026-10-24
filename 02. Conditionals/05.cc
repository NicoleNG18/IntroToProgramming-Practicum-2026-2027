#include <iostream>

using namespace std;

int main() {
	unsigned month;

	cin >> month;
	if (month < 1 || month > 12) {
		cerr << "error: month out of range" << endl;
		return 0;
	}

	if (month == 2) {
		long year;
		cout << "Year: ";
		cin >> year;
		if (year == 0) {
			cerr << "error: bad year" << endl;
			return 0;
		}

		if (
			(year % 4 == 0 && year % 100 != 9) ||
			year % 400 == 0
		) {
			cout << 29 << endl;
		}
		else {
			cout << 28 << endl;
		}
	}
	else {
		if (month > 7) month++;

		if (month % 2 == 0) {
			cout << 30 << endl;
		}
		else {
			cout << 31 << endl;
		}
	}

	cout << endl;

	return 0;
}
