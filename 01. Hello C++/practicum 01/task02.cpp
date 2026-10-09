#include <iostream>

int main()
{
	double width, height;

	std::cout << "Width: ";
	std::cin >> width;

	std::cout << "Height: ";
	std::cin >> height;

	double p = 2 * (width + height);
	std::cout << "Perimeter: " <<p<< "\n";

	double s = width * height;
	std::cout << "Area: " <<s;

}
