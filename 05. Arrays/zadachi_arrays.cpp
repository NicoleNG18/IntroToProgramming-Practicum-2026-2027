// zadachi_arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//zad 1
//const size_t MAX_ARRAY_SIZE = 100;
//double averageElements(int arr[], size_t size)
//{
//	double average = 0;
//	int multiplicationOfNums = 0;
//	int numCount = 0;
//	for (size_t i = 0;i < size;i++)
//	{
//		multiplicationOfNums = multiplicationOfNums + arr[i];
//		numCount++;
//	}
//	average = multiplicationOfNums / numCount;
//	return average;
//}
//void getArray(int arr[], size_t size)
//{
//	for (size_t i = 0;i < size;i++)
//	{
//		std::cin >> arr[i];
//	}
//}
//int countOfNumsBiggerThanAvg(int arr[], size_t size)
//{
//	int count = 0;
//	double average = averageElements(arr, size);
//	for (size_t i = 0; i < size; i++)
//	{
//		if (arr[i] > average)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	size_t size;
//	do
//	{
//		std::cin >> size;
//	} while (size < 1 || size > 100);
//	int arr[MAX_ARRAY_SIZE];
//	getArray(arr,size);
//	std::cout<< averageElements(arr, size) << '\n';
//	std::cout << countOfNumsBiggerThanAvg(arr, size);
//}

//zad 2
//const size_t MAX_ARRAY_SIZE = 128;
//
//void getArray(int arr[], size_t size)
//{
//	for (size_t i = 0;i < size;i++)
//	{
//		std::cin >> arr[i];
//	}
//}
//long long scalarProduct(int a[], int b[], int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i] * b[i];
//	}
//	return sum;
//}
//
//int main()
//{
//    size_t size;
//	do
//	{
//		std::cin >> size;
//	} while (size < 1 || size > 100);
//	int a[MAX_ARRAY_SIZE];
//	int b[MAX_ARRAY_SIZE];
//	getArray(a,size);
//	getArray(b, size);
//	std::cout << scalarProduct(a, b, size);
//}

//zad 3
//const size_t MAX_ARRAY_SIZE = 16;
//void getArray(int arr[], size_t size)
//{
//	for (size_t i = 0;i < size;i++)
//	{
//		std::cin >> arr[i];
//	}
//}
//
//int gcd(int a, int b)
//{
//	if (a < 0) a = -a;
//	if (b < 0) b = -b;
//
//	while (b != 0)
//	{
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//
//	return a;
//}
//
//int arrayGCD(const int arr[], size_t size)
//{
//	int result = arr[0];
//
//	for (size_t i = 1; i < size; i++)
//	{
//		result = gcd(result, arr[i]);
//	}
//
//	return result;
//}
//
//int main()
//{
//	size_t n;
//	std::cin >> n;
//
//		if (n < 1 || n > MAX_ARRAY_SIZE)
//		{
//			return 0;
//		}
//
//	int arr[MAX_ARRAY_SIZE];
//	getArray(arr, n);
//
//	std::cout << arrayGCD(arr, n);
//}

//zad 4
//const size_t MAX_ARRAY_SIZE = 128;
//void getArray(int arr[], size_t size)
//{
//	for (size_t i = 0;i < size;i++)
//	{
//		std::cin >> arr[i];
//	}
//}
//
//bool isZigZag(const int arr[], size_t size)
//{
//    for (size_t i = 1; i < size; i++)
//    {
//        if (i % 2 == 1 && arr[i] <= arr[i - 1])
//        {
//            return false;
//        }
//
//        if (i % 2 == 0 && arr[i] >= arr[i - 1])
//        {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main()
//{
//	int n;
//	std::cin >> n;
//
//    if (n < 1 || n > MAX_ARRAY_SIZE)
//    {
//        return 0;
//    }
//
//    int arr[MAX_ARRAY_SIZE];
//    getArray(arr, n);
//
//    std::cout << std::boolalpha << isZigZag(arr, n);
//}

//zad 5
//const size_t MAX_ARRAY_SIZE = 256;
//void getArray(int arr[], size_t size)
//{
//	for (size_t i = 0;i < size;i++)
//	{
//		std::cin >> arr[i];
//	}
//}
//
//int countInversions(const int arr[], size_t size)
//{
//    int count = 0;
//
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = i + 1; j < size; j++)
//        {
//            if (arr[i] > arr[j])
//            {
//                count++;
//            }
//        }
//    }
//
//    return count;
//}
//
//int main()
//{
//    size_t n;
//    std::cin >> n;
//
//    if (n < 1 || n > MAX_ARRAY_SIZE)
//    {
//        return 0;
//    }
//
//    int arr[MAX_ARRAY_SIZE];
//
//    getArray(arr, n);
//
//    std::cout << countInversions(arr, n);
//}

//zad 6
//const size_t MAX_ARRAY_SIZE = 128;
//void getArray(int arr[], size_t size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        std::cin >> arr[i];
//    }
//}
//
//int absolute(int num)
//{
//    if (num < 0)
//    {
//        return -num;
//    }
//
//    return num;
//}
//
//int maxManhattanDistance(const int x[], const int y[], size_t size)
//{
//    int maxDistance = 0;
//
//    for (size_t i = 0; i < size; i++)
//    {
//        for (size_t j = i + 1; j < size; j++)
//        {
//            int distance = absolute(x[i] - x[j]) + absolute(y[i] - y[j]);
//
//            if (distance > maxDistance)
//            {
//                maxDistance = distance;
//            }
//        }
//    }
//
//    return maxDistance;
//}
//
//int main()
//{
//    size_t n;
//    std::cin >> n;
//
//    if (n < 1 || n > MAX_ARRAY_SIZE)
//    {
//        return 0;
//    }
//
//    int x[MAX_ARRAY_SIZE];
//    int y[MAX_ARRAY_SIZE];
//
//    getArray(x, n);
//    getArray(y, n);
//
//    std::cout << maxManhattanDistance(x, y, n);
//}

//zad 7
//const size_t MAX_ARRAY_SIZE = 128;
//const size_t MAX_RESULT_SIZE = 255;
//void getArray(int arr[], size_t size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        std::cin >> arr[i];
//    }
//}
//
//void multiplyPolynomials(const int A[], size_t n, const int B[], size_t m, int C[])
//{
//    for (size_t i = 0; i < n + m - 1; i++)
//    {
//        C[i] = 0;
//    }
//
//    for (size_t i = 0; i < n; i++)
//    {
//        for (size_t j = 0; j < m; j++)
//        {
//            C[i + j] += A[i] * B[j];
//        }
//    }
//}
//
//int main()
//{
//    size_t n, m;
//    int A[MAX_ARRAY_SIZE];
//    int B[MAX_ARRAY_SIZE];
//    int C[MAX_RESULT_SIZE];
//
//    std::cin >> n;
//    getArray(A, n);
//
//    std::cin >> m;
//    getArray(B, m);
//
//    multiplyPolynomials(A, n, B, m, C);
//
//    for (size_t i = 0; i < n + m - 1; i++)
//    {
//        std::cout << C[i] << " ";
//    }
//}

//zad 8
//const size_t MAX_ARRAY_SIZE = 128;
//void getArray(int arr[], size_t size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        std::cin >> arr[i];
//    }
//}
//
//size_t findPosition(const int arr[], size_t size, int x)
//{
//    size_t left = 0;
//    size_t right = size;
//
//    while (left < right)
//    {
//        size_t mid = (left + right) / 2;
//
//        if (arr[mid] < x)
//        {
//            left = mid + 1;
//        }
//        else
//        {
//            right = mid;
//        }
//    }
//
//    return left;
//}
//
//int main()
//{
//    size_t n;
//    std::cin >> n;
//
//    int arr[MAX_ARRAY_SIZE];
//    getArray(arr, n);
//
//    int x;
//    std::cin >> x;
//
//    std::cout << findPosition(arr,n,x);
//}

//zad 9
//const size_t MAX_ARRAY_SIZE = 256;
//void getArray(int arr[], size_t size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        std::cin >> arr[i];
//    }
//}
//
//bool isPalindrome(const int arr[], size_t left, size_t right)
//{
//    while (left < right)
//    {
//        if (arr[left] != arr[right])
//        {
//            return false;
//        }
//
//        left++;
//        right--;
//    }
//
//    return true;
//}
//
//bool isTwoPalindromes(const int arr[], size_t size)
//{
//    for (size_t i = 1; i < size; i++)
//    {
//        if (isPalindrome(arr, 0, i - 1) &&
//            isPalindrome(arr, i, size - 1))
//        {
//            return true;
//        }
//    }
//
//    return false;
//}
//
//int main()
//{
//    size_t n;
//    std::cin >> n;
//
//    if (n < 1 || n > 64)
//    {
//        return 0;
//    }
//
//    int arr[MAX_ARRAY_SIZE];
//
//    getArray(arr, n);
//
//    std::cout << std::boolalpha << isTwoPalindromes(arr, n);
//}
