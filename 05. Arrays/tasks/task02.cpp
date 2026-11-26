#include <iostream>

const size_t MAXARRAYSIZE = 280;

void getArray (int arr[], size_t size)
{
    for (unsigned i = 0; i< size; i++  )
    {
        std::cin>>arr[i];
    }
}

long long scalarProduct(int a[], int b[], int n)
{
    unsigned sum = 0;
    for (unsigned i = 0; i< n; i++  )
    {
        sum = sum + (a[i] * b[i]);
    } 
    return sum;

}

int main()
{
    size_t n;
    do
    {
        std::cin>>n;
    }while(n<1 || n>MAXARRAYSIZE);
    int arr1[MAXARRAYSIZE];
    int arr2[MAXARRAYSIZE];
    getArray(arr1, n);
    getArray(arr2, n);
    std::cout << scalarProduct(arr1, arr2, n);  
}
