#include <iostream>

const size_t MAXARRAYSIZE = 128;

void getArray (int arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

unsigned getIndex(const int arr[], size_t size, int element)
{
    int start = 0;
    int end = size;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (element <= arr[mid])
        {
            end = mid;
        }
        else 
        {
            start = mid + 1;
        }

    }
    return start;
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
    double x;
    std::cout<<"x = ";
    std::cin>>x;
    std::cout<<getIndex(arr1, n, x);
}
