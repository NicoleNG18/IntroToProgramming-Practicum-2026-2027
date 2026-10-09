

#include <iostream>
#include <cmath>

const float dollar = 1.1;
const short yen = 145;

int main()
{
//    unsigned int apples, pears, banannas;
//    std::cout << "Please enter the number of apples, pears and bananas: ";
//    std::cin >> apples >> banannas >> pears;
//    std::cout << "Don't forget to buy " << apples << " apples, " << pears << " pears and " << banannas <<" bananas!";
	//Task 1

//    double height, lenght;
//    std::cin >> height >> lenght;
//	  std::cout << "The area is: "<<height * lenght<<". And the perimeter is: " << height + lenght;
	//Task 2

//	  float sumInEuro;
// 	  std:: cin>>sumInEuro;
//	  std::cout << "Your sum in dollars is " << sumInEuro * dollar << " and inb yen it is " << sumInEuro * yen;
	//Task 3

//	  int num1, num2;
//	  std:: cin >> num1 >> num2;
//	  bool isItDivider = (num2 % num1);
//	  std::cout << !isItDivider;
	//Task 4

//	  unsigned int num1, num2, num3;
//	  std::cin >> num1 >> num2 >> num3;
//	  int newNum = num1 * 100 + num2 * 10 + num3;
//	  std::cout << newNum;
	//Task 5

//	  unsigned int number;
//	  std::cin >> number;
//	  int first = number / 100;
//	  number /= 100;
//	  int second = number / 10;
//	  number /= 10;
//	  int last = number;
//    std::cout << first << " " << second << " " << last << " " << first + second + last;
	//Task 6

	//unsigned int num1, num2;
	//std::cin >> num1 >> num2;
	//bool isItOdd = (num1 * num2 % 10) % 2;
	//std::cout << num1 * num2 << num1 * num2 % 10 << isItOdd;
	//Task 7

	//unsigned int code;
	//std::cin >> code;
	//std::cout << "*****" << code * 1000;
	//Task 8

	//unsigned int seconds;
	//std::cin >> seconds;
	//std::cout << "Minutes: " << seconds / 60.0 << " ,Hours: " << seconds / 3600.0 << " ,Days: " << seconds / 86400.0;
	//Task 9

	//double a, b, c, d;
	//std::cin >> a >> b >> c >> d;
	//bool doTheyIntersect = (a == c) || (b == d) || (a < c && b < d && b>c) || (a > c && b > d && a<d) || (a<c && b>d) || (a > c && b < d);
	//std::cout << doTheyIntersect;
	//Task 10

	//unsigned int num;
	//std::cin >> num;
	//bool palindrome = (num / 1000 == num % 10) && (((num / 100) % 10) == ((num / 10) % 10));
	//std::cout << palindrome;
	//Bonus task 1

	//unsigned int num;
	//std::cin >> num;
	//std::cout << sqrt(num*num);
	//Bonus task 2

	//int num1, num2;
	//std::cin >> num1 >> num2;
	//std::cout << (num1 + num2 + abs(num1 - num2)) / 2;
	//Bonus task 3

	double kilometers;
	std::cin >> kilometers;
	bool b1 = kilometers >= 1;
	bool b2 = kilometers >= 2;
	bool b3 = kilometers >= 3;
	bool b4 = kilometers >= 4;
	bool b5 = kilometers >= 5;
	double price = kilometers * 1.5 + (b1 + b2 + b3 + b4 + b5);
	bool priceCheck = price >= 20;
	price += priceCheck * (price / 5.0);
	price += 3;
	std::cout << price;
	//Bonus task 4
}