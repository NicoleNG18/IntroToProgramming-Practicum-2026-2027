#include <iostream>

const int secs_In_A_Minute = 60;
const int secs_In_An_Hour = 60*60;
const int secs_In_A_Day = 60*60*24;

int main()
{
	unsigned secsInput;

	std::cout << "Seconds:";
	std::cin >> secsInput;
	
	unsigned days = secsInput / (secs_In_A_Day);
	
	unsigned hours = (secsInput/ secs_In_An_Hour)%24;
	
	unsigned mins = ((secsInput / secs_In_A_Minute)%secs_In_A_Minute);
	
	unsigned secs = secsInput % secs_In_A_Minute;
	
	std::cout << days << " days, " <<hours<< " hours, " << mins << ", minutes and " <<secs<< " seconds.";
}
