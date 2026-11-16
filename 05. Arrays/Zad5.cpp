#include <iostream>

const int SIZE = 256;

int countInversions(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
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
	std::cout << countInversions(arr, n) << std::endl;
}
