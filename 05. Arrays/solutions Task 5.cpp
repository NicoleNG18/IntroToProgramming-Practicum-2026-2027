// Kosta Politov - tasks from seminar 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//TASK 1:
#include <iostream>

void getArray(int arr[], size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

double averageOfArrey(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int aboveAverage(int arr[], int size, double average) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > average){
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    std::cout << "Give arrey size: ";
    std::cin >> n;
    
    int array[100];

    getArray(array, n);

    double average = averageOfArrey(array, n);

    std::cout << "Average: " << average << "\nAbove average: " << aboveAverage(array, n, average);
}
