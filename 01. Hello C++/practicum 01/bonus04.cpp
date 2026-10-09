#include <iostream>

const double first5 = 2.5;
const double next = 1.50;
const double nad20 = 0.10;
const double tax = 3.00;

int main()
{
	int km;

	std::cout << "Km: ";
	std::cin >> km;

	bool check1 = (km <= 5);
	double price1_5 = first5 * km * check1;

	bool check2 = ((km > 5) && (price1_5 <= 10));
	double price5 = (5 * first5 + (km - 5) * next) * check2;

	double price = price1_5 + price5 + tax;


	double checkDis = (price > 20);


	double finPrice = price - (nad20 * price * checkDis);
	std::cout << "Final price: " << finPrice;
}
	//Please in such complicated cases give more example answers, thanks!
