#include <iostream>
#include <cmath>

int main()
{
	int a, b;

	std::cout << "Число 1:";
	std::cin >> a;

	std::cout << "Число 2:";
	std::cin >> b;

	std::cout << "По-голямо е: " << (a + b + abs(a - b)) / 2;
}
