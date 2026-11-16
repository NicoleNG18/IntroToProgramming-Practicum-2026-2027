#include <iostream>

const int SIZE = 128;

bool isZigZag(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) {
            if (arr[i] >= arr[i + 1]) 
                return false;
        }
        else {
            if (arr[i] <= arr[i + 1]) 
                return false;
        }
    }
    return true;
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
	isZigZag(arr, n) ? std::cout << "true" : std::cout << "false";
}
