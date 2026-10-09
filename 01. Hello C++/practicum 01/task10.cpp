#include <iostream>

int main()
{
	double a, b, c, d;
	std::cout << "= = = = = = = = = = = = =\n";

	std::cout << "Interval 1 begins at:";
	std::cin >> a;
	std::cout << "Interval 1 ends at:";
	std::cin >> b;

	std::cout << "= = = = = = = = = = = = =";

	std::cout << "\nInterval 2 begins at:";
	std::cin >> c;
	std::cout << "Interval 2 ends at:";
	std::cin >> d;

	std::cout << "= = = = = = = = = = = = =";
	std::cout << "\n= C A L C U L A T I N G =";
	std::cout << "\n= = = = = = = = = = = = =";

	bool check = ((a <= c) || (a <= d)) && ((b >= c) || (b >= d));

	std::cout <<"\nThe result is: " << std::boolalpha << check;

	std::cout << "\n= = = = = = = = = = = = =";
}
