// Zadacha1_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

const size_t ARRAY_MAX_SIZE = 100;

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

double averageOfArray(const int arr[], size_t size)
{
    double average = 0;
    for (size_t i = 0; i < size; i++)
        average += arr[i];
    average /= size;
    return average;
}

int countOfElementsAboveAverage(const int arr[], size_t size)
{
    int counter = 0;
    double average = averageOfArray(arr, size);
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] > average)
            counter++ ;
    }
    return counter;
}

int main()
{
    size_t size;
    do
    {
        std::cin >> size;
    } while (size < 1 || size > 100);

    int arr[ARRAY_MAX_SIZE];

    getArray(arr, size);

    std::cout << "Average: " << averageOfArray(arr, size) << std::endl;
    std::cout << "Above average: " << countOfElementsAboveAverage(arr, size) << std::endl;

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
