// Zadacha8_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int indexOfNewStudentPosition(int studentHeights[], size_t sizeOfArray, int newStudentHeight)
{
    int left = 0;
    int right = sizeOfArray;

    while (left < right)
    {
        int middle = left + (right - left) / 2;
        if (studentHeights[middle] < newStudentHeight)
        {
            left = middle + 1;
        }
        else
        {
            right = middle;
        }
    }

    return left;
}

int main()
{
    size_t arraySize = 0;
    do {
        std::cin >> arraySize;
    } while (arraySize < 1 || arraySize > 128);

    int studentsHeights[ARRAY_MAX_SIZE];
    getArray(studentsHeights, arraySize);

    int newStudentHeight;
    std::cin >> newStudentHeight;

    std::cout << indexOfNewStudentPosition(studentsHeights, arraySize, newStudentHeight);
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
