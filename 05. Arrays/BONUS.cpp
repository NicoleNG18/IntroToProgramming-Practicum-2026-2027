#include <iostream>

const int SIZE = 128;

long long compress(const int arr[], int n)
{
    long long result = 0;

    for (int i = 0; i < n;)
    {
        int digit = arr[i];
        int count = 0;

        while (i < n && arr[i] == digit)
        {
            count++;
            i++;
        }

        int temp = count;
        result = result * 10 + digit;
        result = result * 10 + count;
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

    std::cout << compress(arr, n);

    return 0;
}

