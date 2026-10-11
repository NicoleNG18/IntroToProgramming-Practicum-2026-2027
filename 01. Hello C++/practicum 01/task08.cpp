#include <iostream>

int main()
{
	int code;

	std::cout << "Code:";
	std::cin >> code;

	int end = (code % 1000);

	std::cout << "Code: *****" << end;
}
