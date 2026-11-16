
#include <iostream>

const int SIZE = 128;

int findPosition(const int arr[], int n, int x)
{
    int left = 0;
    int right = n;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}


int main()
{
    int n, x;
	std::cin >> n;
	int arr[SIZE];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	std::cin >> x;
	int position = findPosition(arr, n, x);
	std::cout << position << std::endl;
	return 0;
}

