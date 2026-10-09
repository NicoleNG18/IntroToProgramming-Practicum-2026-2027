#include <iostream>
using namespace std;

int main() {
	unsigned secs;
	cin >> secs;

	unsigned mins = secs / 60;
	unsigned hours = mins / 60;
	unsigned days = hours / 24;

	cout << days << " days, " << hours % 24 << " hours, " << mins % 60 << " minutes, " << secs % 60 << " seconds" << endl;

	return 0;
}
