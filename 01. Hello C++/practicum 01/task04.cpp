#include <iostream>

int main()
{
	int num1, num2;

	std::cout << "Number 1: ";
	std::cin >> num1;

	std::cout << "Number 2: ";
	std::cin >> num2;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;
	std::cout << "= = = C A L C U L A T I N G = = =" << std::endl;
	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	std::cout << std::boolalpha << (num2 % num1 == 0);
}
