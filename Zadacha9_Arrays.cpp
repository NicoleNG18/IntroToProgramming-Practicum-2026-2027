// Zadacha9_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const size_t ARRAY_MAX_SIZE = 64;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int reversedNum(int num)
{
    int reverse = 0;
    while (num != 0)
    {
        reverse *= 10;
        int currentDigit = num % 10;
        reverse += currentDigit;
        num /= 10;
    }
    return reverse;
}

bool isPalindrom(int num)
{
    if (num == reversedNum(num))
        return true;
    else
        return false;
}

int concatNumFromArray(int arr[], int start, size_t size)
{
    int result = 0;
    for (size_t i = start; i < size; i++)
    {
        result *= 10;
        result += arr[i];
    }
    return result;
}

bool isPalindromConcat(int arr[], size_t size)
{
    bool flag = false;
    size_t endPosition1 = 1;
    size_t endPosition2 = size;
    
    while (endPosition1 < size)
    {
        int num1Start = 0;
        int num2Start = endPosition1 + 1;
        int num1 = concatNumFromArray(arr, num1Start, endPosition1);
        int num2 = concatNumFromArray(arr, num2Start, endPosition2);
        if (isPalindrom(num1) && isPalindrom(num2))
        {
            flag = true;
            break;
        }
        endPosition1++;
        endPosition2--;
    }

    return flag;
}

int main()
{
    size_t arraySize;
    do {
        std::cin >> arraySize;
    } while (arraySize < 1 || arraySize > 64);

    int arr[ARRAY_MAX_SIZE];
    getArray(arr, arraySize);

    std::cout << std::boolalpha << isPalindromConcat(arr, arraySize);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
