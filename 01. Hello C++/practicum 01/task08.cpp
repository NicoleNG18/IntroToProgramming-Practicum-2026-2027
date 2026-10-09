#include <iostream>

int main()
{
	int code;

	std::cout << "Code:";
	std::cin >> code;

	double end = (code % 1000);

	std::cout << "Code: *****" << end;
}
