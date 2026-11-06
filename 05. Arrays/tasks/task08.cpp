#include <iostream>

const size_t MAXARRAYSIZE = 128;

void getArray (double arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

unsigned getIndex(double a[], size_t size)
{
    double x;
    std::cout<<"x = ";
    std::cin>>x;
    unsigned cnt = 0;
    for (unsigned i = 0; i< size; i++)
    {
        if(x > a[i])
        {
            cnt++;
        }
    }
    return cnt;

} 

int main()
{
    size_t n;
    do
    {
        std::cin>>n;
    }
    while(n<1 || n>MAXARRAYSIZE);
    double arr1[MAXARRAYSIZE];
    getArray(arr1, n);
    std::cout<<getIndex(arr1, n);
}
