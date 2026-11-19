// Zadacha3_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const size_t ARRAY_MAX_SIZE = 16;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int gsdOfTwoNums(int a, int b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int gsdOfArray(int arr[], size_t size)
{
    int result = 0;
    for (size_t i = 0; i < size - 1; i++)
    {
        int gsd = gsdOfTwoNums(arr[i], arr[i + 1]);
        result = gsdOfTwoNums(result, gsd);
    }
    return result;
}

int main()
{
    size_t sizeOfArray;
    do
    {
        std::cin >> sizeOfArray;
    } while (sizeOfArray < 1 || sizeOfArray > 16);

    int arr[ARRAY_MAX_SIZE];
    getArray(arr, sizeOfArray);

    std::cout << gsdOfArray(arr, sizeOfArray) << std::endl;

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
