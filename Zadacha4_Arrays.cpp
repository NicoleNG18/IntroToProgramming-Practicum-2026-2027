// Zadacha4_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool isZigZag(const int arr[], size_t size)
{
    bool flag = true;
    for (size_t i = 0; i < size - 1; i++)
    {
        if (i % 2 != 0)
        {
            if (arr[i] < arr[i + 1])
                flag = false;
        }
        else
        {
            if (arr[i] > arr[i + 1])
                flag = false;
        }
    }
    return flag;
}

int main()
{
    size_t sizeOfArray;
    do
    {
        std::cin >> sizeOfArray;
    } while (sizeOfArray < 1 || sizeOfArray > 128);

    int arr[ARRAY_MAX_SIZE];
    getArray(arr, sizeOfArray);

    std::cout << std::boolalpha << isZigZag(arr, sizeOfArray) << std::endl;
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
