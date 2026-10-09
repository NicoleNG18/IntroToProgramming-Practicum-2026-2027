#include <iostream>

const double USDRate = 1.1;
const double YenRate = 145;


int main()
{
	double eur;

	std::cout << "EUR:";
	std::cin >> eur;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;
	std::cout << "= = = C A L C U L A T I N G = = =" << std::endl;
	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	std::cout << "USD:" << eur * USDRate << std::endl;

	std::cout << "YEN:" << eur * YenRate << std::endl;

}
