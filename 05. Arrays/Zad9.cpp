#include <iostream>

const int SIZE = 256;

bool isPalindrome(const int arr[], int left, int right)
{
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

bool isConcatenation(const int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (isPalindrome(arr, 0, i - 1) && isPalindrome(arr, i, n - 1))
        {
            return true;
        }
    }

    return false;
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

    std::cout << std::boolalpha << isConcatenation(arr, n);

    return 0;
}
