// Zadacha6_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int myAbs(int num)
{
    if (num < 0)
        return num * (-1);
    else
        return num;
}

int manhattanDistance(int arrX[], int arrY[], size_t size)
{
    int maxDistance = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            int x1 = arrX[i];
            int y1 = arrY[j];
            int x2 = arrX[i + 1];
            int y2 = arrY[j + 1];

            int distance = myAbs(x1 - x2) + myAbs(y1 - y2);
            if (maxDistance < distance)
                maxDistance = distance;
        }
    }

    return maxDistance;
}

int main()
{
    size_t sizeOfArray;
    do
    {
        std::cin >> sizeOfArray;
    } while (sizeOfArray < 1 || sizeOfArray > 128);

    
    int arrX[ARRAY_MAX_SIZE];
    int arrY[ARRAY_MAX_SIZE];

    getArray(arrX, sizeOfArray);
    getArray(arrY, sizeOfArray);

    std::cout << manhattanDistance(arrX, arrY, sizeOfArray);
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
