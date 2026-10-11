#include <iostream>

const double USD_Rate = 1.1;
const double Yen_Rate = 145;


int main()
{
	double eur;

	std::cout << "EUR:";
	std::cin >> eur;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;
	std::cout << "= = = C A L C U L A T I N G = = =" << std::endl;
	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	std::cout << "USD:" << eur * USD_Rate << std::endl;

	std::cout << "YEN:" << eur * Yen_Rate << std::endl;

}
