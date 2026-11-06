#include <iostream>

int main()
{
	int a, b;

	std::cout << "Число 1:";
	std::cin >> a;

	std::cout << "Число 2:";
	std::cin >> b;

	bool check1 = (a>b);
	bool check2 = (a<=b);
	
	int bigger = check1*a + check2*b;

	std::cout << "По-голямо е: " << bigger;
}
