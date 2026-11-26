#include <iostream>

int main()
{
	int number;

	std::cin >> number;

	int dig1 = (number % 10);

	int dig2 = (number / 10)%10;
	
	int dig3 = (number/100)%10;

	int dig4 = (number / 1000);

	bool check = (dig1 == dig4) && (dig2 == dig3);

	std::cout << std::boolalpha << check;

}
