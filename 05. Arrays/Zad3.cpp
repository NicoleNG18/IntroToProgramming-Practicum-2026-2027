#include <iostream>

const int SIZE = 16;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdArray(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
    }
    return result;
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
	std::cout << gcdArray(arr, n) << std::endl;

}

