// zadachi_loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//zad 1
	 //int n;
	 //std::cin >> n;
	 //for (int i = 1; i < n; i++)
	 //{
	 //	int y = n - i;
	 //	std::cout << "x = " << i << " " << "y = " << y << "\n";
	 //}

	 //zad 2
	 //int a, b;
	 //std::cin >> a >> b;
	 //for (int i = a; i > 0; i--)
	 //{
	 //	if (a % i == 0 && b % i == 0)
	 //	{
	 //		std::cout << i << " ";
	 //	}
	 //}

	 //zad 3
	 //int n;
	 //std::cin >> n;
	 //int isPerfect = 0;
	 //for (int i = 1; i < n; i++)
	 //{
	 //	if (n % i == 0)
	 //	{
	 //		isPerfect += i;
	 //	}
	 //}
	 //if (isPerfect == n)
	 //{
	 //	std::cout << "Perfect";
	 //}
	 //else
	 //{
	 //	std::cout << "Not perfect";
	 //}

	 //zad 4
	 //int n;
	 //std::cin >> n;
	 //for (int i = 0; i < n; i++)
	 //{
	 //	for (int j = 0; j < n; j++)
	 //	{
	 //		if (i == j)
	 //		{
	 //			std::cout << "0";
	 //		}
	 //		else if (i < j)
	 //		{
	 //			std::cout << "+";
	 //		}
	 //		else
	 //		{
	 //			std::cout << "-";
	 //		}
	 //	}
	 //	std::cout << "\n";
	 //}

	 //zad 5
	 //int n, position, found;
	 //std::cin >> n >> position;
	 //int temp = n;
	 //for (int i = 0; i < position; i++)
	 //{
	 //	found = temp % 10;
	 //	temp = temp / 10;
	 //}
	 // 
	 //std::cout << found;

	 //zad 6
	//long long n;
	//std::cin >> n;

	//long long decimal = 0;
	//long long power = 1;

	//while (n > 0)
	//{
	//	decimal = decimal + (n % 10) * power;
	//	power = power * 2;
	//	n = n / 10;
	//}

	//std::cout << decimal;

	//zad 7
	//int n;
	//std::cin >> n;
	//int doubleN = n * n;
	//bool automorphic = true;
	//	while (n != 0) 
	//	{
	//		if (doubleN % 10 != n % 10) 
	//		{
	//			automorphic = false;
	//		}
	//		n /= 10;
	//		doubleN /= 10;
	//	}
	//	if (automorphic == true)
	//	{
	//		std::cout << "Automorphic";
	//	}
	//	else
	//	{
	//		std::cout << "Not automorphic";
	//	}

	//zad 8
	//int n;
	//std::cin >> n;
	//int steps = 0;
	//int maxN = n;
	//	while (n != 1)
	//	{
	//		std::cout << n << " ";
	//		if (n % 2 == 0)
	//		{
	//			n = n / 2;
	//		}
	//		else
	//		{
	//			n = 3 * n + 1;
	//		}
	//		steps++;
	//		if (n > maxN)
	//		{
	//			maxN = n;
	//		}
	//	}
	//	std::cout << "\n" << "Steps: " << steps;
	//	std::cout << "\n" << "Max value: " << maxN;

	//zad 9
	//int chislitel, znamenatel;
	//std::cin >> chislitel >> znamenatel;

	//int a = chislitel;
	//int b = znamenatel;

	//if (a < 0)
	//{ 
	//	a = -a;
	//}
	//if (b < 0)
	//{
	//	b = -b;
	//}

	//while (b != 0) 
	//{
	//	int ostatuk = a % b;
	//	a = b;
	//	b = ostatuk;
	//}

	//chislitel = chislitel / a;
	//znamenatel = znamenatel / a;

	//if (znamenatel < 0) 
	//{
	//	chislitel = -chislitel;
	//	znamenatel = -znamenatel;
	//}

	//std::cout << chislitel << "/" << znamenatel;

	//zad 10
	//int n;
	//std::cin >> n;

	//int maxCount = 0;
	//int mostCommon = 0;

	//for (int num = 0; num <= 9; num++) 
	//{
	//	int temp = n;
	//	int count = 0;

	//	while (temp > 0) 
	//	{
	//		if (temp % 10 == num)
	//		{
	//			count++;
	//		}

	//		temp = temp / 10;
	//	}

	//	if (count >= maxCount)
	//	{
	//		maxCount = count;
	//		mostCommon = num;
	//	}
	//}

	//std::cout << mostCommon;

	//bonus 1
	//int n;
	//std::cin >> n;

	//if (n < 2) 
	//{
	//	std::cout << "Invalid input";
	//}
	//else
	//{
	//	int number;
	//	std::cin >> number;
	//	int max1 = number;

	//	std::cin >> number;
	//	int max2 = number;

	//	if (max2 > max1) 
	//	{
	//		int temp = max1;
	//		max1 = max2;
	//		max2 = temp;
	//	}

	//	for (int i = 2; i < n; i++) 
	//	{
	//		std::cin >> number;

	//		if (number > max1) 
	//		{
	//			max2 = max1;
	//			max1 = number;
	//		}
	//		else if (number > max2) 
	//		{
	//			max2 = number;
	//		}
	//	}
	//	std::cout << max1 << " " << max2;
	//}

	//bonus 2
	//int n;
	//std::cin >> n;
	//int sum = 0;
	//int number;

	//for (int i = 1; i < n; i++) 
	//{
	//	std::cin >> number;
	//	sum = sum + number;
	//}

	//int total = n * (n + 1) / 2;  formula N(N+1)/2

	//std::cout << total - sum;

}

