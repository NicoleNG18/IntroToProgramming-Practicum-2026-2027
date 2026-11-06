#include <iostream>

const size_t MAXARRAYSIZE = 128;

void getArray (unsigned arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

bool isZigZag (unsigned a[], unsigned size)
{
    for (unsigned i = 1; i< size-1; i++  )
    {   
        if(a[i-1]<a[i] && a[i]> a[i+1] )
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
    unsigned arr1[MAXARRAYSIZE];
    getArray(arr1, n);
    std::cout<< std::boolalpha<<isZigZag(arr1, n);
}
