#include <iostream>

const int SIZE = 100;

double getAverage(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int countAboveAverage(int arr[], int n) {
    double avg = getAverage(arr, n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
	std::cin >> n;
	int arr[SIZE];
    for (int i = 0; i < n; i++)
    {
		std::cin >> arr[i];
    }
	std::cout << "Average: " << getAverage(arr, n) << std::endl;
	std::cout << "Above average: " << countAboveAverage(arr, n) << std::endl;

}
