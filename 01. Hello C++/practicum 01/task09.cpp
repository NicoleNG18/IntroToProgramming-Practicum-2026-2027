#include <iostream>

int main()
{
	unsigned secsInput;

	std::cout << "Secunds:";
	std::cin >> secsInput;
	
	unsigned days = (secsInput / (60*60*24)%24);
	
	unsigned hours = (secsInput /(60*60)%24);
	
	unsigned mins = (secsInput / 60)%60;
	
	unsigned secs = secsInput % 60;
	
	std::cout << days << " days, " <<hours<< " hours, " << mins << ", minutes " <<secs<< " and seconds.";
}
