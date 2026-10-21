// Kosta Politov - seminar 2 tasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //TASK 1:
    //int a, b;
    //std::cin >> a >> b;
    //std::cout << ((a < b) ? a : b);

    //TASK 2:
    //int year;
    //std::cin >> year;
    //if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    //    std::cout << "Yes";
    //}
    //else {
    //    std::cout << "No";
    //}

    //TASK 3:
    //unsigned a, b, c;
    //std::cin >> a >> b >> c;
    //if (a + b > c && a + c > b && b + c > a) {
    //    std::cout << "Yes";
    //}
    //else {
    //    std::cout << "No";
    //}

    //TASK 4:
//double x, y;
//std::cin >> x >> y;
//if (x > 0 && y > 0) {
//	std::cout << "First";
//}
//else if (x < 0 && y > 0) {
//	std::cout << "Second";
//} 
//else if (x < 0 && y < 0) {
//	std::cout << "Third";
//}
//else if (x > 0 && y < 0) {
//	std::cout << "Fourth";
//} 
//else if (x == 0 || y == 0) {
//	std::cout << "On axis";
//}

//TASK 5:
int shortMonth = 30;
int longMonth = 31;
int month;
std::cin >> month;
switch (month)
{
case 1:case 3: case 5: case 7: case 8: case 10: case 12: std::cout << longMonth; break;
case 2: {
	int year;
	std::cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		std::cout << "29";
	}
	else {
		std::cout << "28";
	}

} break;
case 4: case 6: case 9: case 11: std::cout << shortMonth; break;
default:
	break;
}
}
