#include <iostream>

int main()
{
	int num;

	std::cout << "Number: ";
	std::cin >> num;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;
	std::cout << "= = = C A L C U L A T I N G = = =" << std::endl;
	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	int dig1 = num % 10;
	std::cout << "Units: " <<dig1 << std::endl;

	int dig2 = (num/10)%10;
	std::cout << "Tens: " << dig2 << std::endl;

	int dig3 = (num / 100);
	std::cout << "Hundreds: " << dig3 << std::endl;

	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;
	std::cout << "= = = = = = = = = = = = = = = = =" << std::endl;

	int sum = dig1 + dig2 + dig3;
	std::cout << "Sum: " << sum;


}
