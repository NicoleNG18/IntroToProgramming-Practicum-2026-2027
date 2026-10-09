#include <iostream>

int main()
{
	int a,b;

	std::cout << "a: ";
	std::cin >> a;

	std::cout << "b: ";
	std::cin >> b;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;
	std::cout << "= = = C A L C U L A T I N G = = =" << std::endl;
	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	int aTimesb = a * b;
	std::cout << "a*b: " << aTimesb << std::endl;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	int dig = aTimesb % 10;
	std::cout << "Last digit of a*b: " << dig << std::endl;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	bool YN = (dig % 2 == 0);
	std::cout << std::boolalpha << YN;
}
