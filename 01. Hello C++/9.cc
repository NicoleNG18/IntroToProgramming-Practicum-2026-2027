#include <iostream>
using namespace std;

const unsigned SECS_IN_MIN = 60;
const unsigned MINS_IN_HOUR = 60;
const unsigned HOURS_IN_DAY = 24;


int main() {
	unsigned secs;
	cin >> secs;

	unsigned mins = secs / SECS_IN_MIN;
	unsigned hours = mins / MINS_IN_HOUR;
	unsigned days = hours / HOURS_IN_DAY;

	cout << days << " days, ";
	cout << hours % HOURS_IN_DAY << " hours, ";
	cout << mins % MINS_IN_HOUR << " minutes, ";
	cout << secs % SECS_IN_MIN << " seconds";
	cout << endl;

	return 0;
}
