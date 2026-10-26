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
     //   int shortMonth = 30;
     //   int longMonth = 31;
     //   int month;
     //   std::cin >> month;
     //   switch (month)
     //   {
     //   case 1:case 3: case 5: case 7: case 8: case 10: case 12: std::cout << longMonth; break;
     //   case 4: case 6: case 9: case 11: std::cout << shortMonth; break;
     //   case 2: {
        //	std::cout << "Enter year: ";
     //       int year;
     //       std::cin >> year;
     //       if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
     //           std::cout << "29";
     //       }
     //       else {
     //           std::cout << "28";
     //       }

     //   } break;
        //default: std::cout << "Invalid month"; break;
     //   }

    //TASK 6:
    //std::cout << "Enter two two-digitnumbers: ";
    //   int a, b;
        //std::cin >> a >> b;
        //if (a < 10 || a > 99 || b < 10 || b > 99)
        //{
        //	std::cout << "Invalid input";
     //   }
     //   else {
     //       if (a / 10 < a % 10 && a % 10 < b / 10 && b / 10 < b % 10)
     //       {
     //           std::cout << "Yes";
     //       }
     //       else
     //       {
     //           std::cout << "No";
     //       }

    //TASK 7:
    // int a, x, y;
    // std::cin >> a >> x >> y;
    // if (a < 1 || x < 0 || y < 0) {
    //     std::cout << "Invalid input";
    // }
    // else {
    //     if (((x/a)%2 == 0 && (y/a)%2 == 1) || ((x/a)%2 == 1 && (y/a)%2 == 0)) {
    //         std::cout << "White";
    //     }
    //     else {
			//std::cout << "Black";
    //     }
    // }

    //TASK 8:
    //int operation;
    //std::cout << "Pick the operation you want to perform:" << "\n"
    //    << "1. Gathering" << "\n" << "2. Extraction" << "\n"
    //    << "3. Multiplication" << "\n" << "4. Division" << "\n"
    //    << "5. Remainder" << "\n" << "Choice: ";
    //std::cin >> operation;

    //if (operation > 5) {
    //    std::cout << "Invalid input";
    //}

    //switch (operation) {
    //case 1: {
    //    int numberOne, numberTwo, result;
    //    std::cin >> numberOne >> numberTwo;
    //    result = numberOne + numberTwo;
    //    std::cout << result;
    //    break;
    //}
    //case 2: {
    //    int numberOne, numberTwo, result;
    //    std::cin >> numberOne >> numberTwo;
    //    result = numberOne - numberTwo;
    //    std::cout << result;
    //    break;
    //}
    //case 3: {
    //    int numberOne, numberTwo, result;
    //    std::cin >> numberOne >> numberTwo;
    //    result = numberOne * numberTwo;
    //    std::cout << result;
    //    break;
    //}
    //case 4: {
    //    double numberOne, numberTwo;
    //    double result;
    //    std::cin >> numberOne >> numberTwo;
    //    if (numberTwo == 0) {
    //        std::cout << "Division by zero";
    //        break;
    //    }
    //    result = numberOne / numberTwo;
    //    std::cout << result;
    //    break;
    //}
    //case 5: {
    //    int numberOne, numberTwo, result;
    //    std::cin >> numberOne >> numberTwo;
    //    if (numberTwo == 0) {
    //        std::cout << "Division by zero";
    //        break;
    //    }
    //    result = numberOne % numberTwo;
    //    std::cout << result;
    //    break;
    //}
    //default:
    //    std::cout << "Invalid input";
    //    break;
    //}

    //TASK 9:
    //unsigned sideA, sideB, sideC;
    //std::cin >> sideA >> sideB >> sideC;

    //if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) {

    //    if (sideA == sideB && sideB == sideC) {
    //        std::cout << "Equilateral\n";
    //    }
    //    else if (sideA == sideB || sideA == sideC || sideB == sideC) {
    //        std::cout << "Isosceles\n";
    //    }
    //    else {
    //        std::cout << "Scalene\n";
    //    }

    //    unsigned long long a2 = (unsigned long long)sideA * sideA;
    //    unsigned long long b2 = (unsigned long long)sideB * sideB;
    //    unsigned long long c2 = (unsigned long long)sideC * sideC;

    //    unsigned long long totalSq = a2 + b2 + c2;

    //    unsigned long long biggestSq = a2;
    //    if (b2 > biggestSq) biggestSq = b2;
    //    if (c2 > biggestSq) biggestSq = c2;

    //    unsigned long long otherSqSum = totalSq - biggestSq;

    //    if (otherSqSum < biggestSq) {
    //        std::cout << "Obtuse";
    //    }
    //    else if (otherSqSum == biggestSq) {
    //        std::cout << "Right";
    //    }
    //    else {
    //        std::cout << "Acute";
    //    }
    //}
    //else {
    //    std::cout << "Not a triangle";
    //}

    //BONUS TASK:
    //unsigned day, month, daysOfMonth;
    //int year;

    //std::cin >> day >> month >> year;

    //switch (month)
    //{
    //case 1:case 3: case 5: case 7: case 8: case 10: case 12: {
    //    daysOfMonth = 31;
    //} break;
    //case 4: case 6: case 9: case 11: {
    //    daysOfMonth = 30;
    //} break;
    //case 2: {
    //    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    //        daysOfMonth = 29;
    //    }
    //    else {
    //        daysOfMonth = 28;
    //    }
    //} break;
    //default: std::cout << "Invalid date"; break;
    //}

    //if (day > daysOfMonth) {
    //    std::cout << "Invalid date";
    //}
    //else {
    //    day++;
    //    if (day > daysOfMonth) {
    //        day = 1;
    //        month++;

    //        if (month > 12) {
    //            month = 1;
    //            year++;
    //        }
    //    }
    //    if (day < 10 && month < 10) {
    //        std::cout << "0" << day << ".0" << month << "." << year;
    //    } else if (day < 10) {
    //        std::cout << "0" << day << "." << month << "." << year;
    //    }
    //    else if (month < 10) {
    //        std::cout << day << ".0" << month << "." << year;
    //    }
    //    else {
    //        std::cout << day << "." << month << "." << year;
    //    }
    //}
