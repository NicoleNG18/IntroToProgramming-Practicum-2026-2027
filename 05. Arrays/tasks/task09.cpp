#include <iostream>

const size_t MAXARRAYSIZE = 64;

void getArray (int arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

bool isPalindrome(int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - 1 - i])
        {
            return false;
        }
    }
    return true;
}

bool getCon (int a[], size_t size)
{
    for (unsigned i = 1; i< size; i++  )
    {
        bool leftIsPalindrome = isPalindrome(a, i);
        bool rightIsPalindrome = isPalindrome(a + i, size - i);
        if (leftIsPalindrome && rightIsPalindrome)
        {
            return true;
        }
    }
    return false;
}


int main()
{
    size_t n;
    do
    {
        std::cin>>n;
    }
    while(n<1 || n>MAXARRAYSIZE);
    int arr1[MAXARRAYSIZE];
    getArray(arr1, n);
    std::cout<< std::boolalpha <<getCon(arr1, n);
}
