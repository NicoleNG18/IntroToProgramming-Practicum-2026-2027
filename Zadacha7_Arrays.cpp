// Zadacha7_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const size_t ARRAY_MAX_SIZE = 128;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

void printArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void arrayMultiplication(int arr1[], int arr2[], size_t size1, size_t size2)
{
    size_t size3 = size1 + size2 - 1;
    int arr3[ARRAY_MAX_SIZE + ARRAY_MAX_SIZE - 1] = {0};
    for (size_t i = 0; i < size1; i++)
    {
        for (size_t j = 0; j < size2; j++)
        {
            arr3[i + j] += arr1[i] * arr2[j];
        }
    }

    printArray(arr3, size3);
}

int main()
{
    size_t arraySize1 = 0;
    do {
        std::cin >> arraySize1;
    } while (arraySize1 < 1 || arraySize1 > 128);

    size_t arraySize2 = 0;
    do {
        std::cin >> arraySize2;
    } while (arraySize2 < 1 || arraySize2 > 128);

    int arr1[ARRAY_MAX_SIZE];
    int arr2[ARRAY_MAX_SIZE];

    getArray(arr1, arraySize1);
    getArray(arr2, arraySize2);

    arrayMultiplication(arr1, arr2, arraySize1, arraySize2);
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
