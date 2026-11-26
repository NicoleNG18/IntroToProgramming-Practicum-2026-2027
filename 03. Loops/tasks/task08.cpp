#include <iostream>

int main()
{
    unsigned n;
    std::cin >> n;
    std::cout<<"Sequence: ";
    unsigned count = 0;
    unsigned max = 0;
    while (n!=1)
    {
        if(n > max)
        {
            max = n;
        }
        if(n%2==0)
        {
            n = n/2;
        }
        else
        {
            n = 3*n + 1;
        }
        std::cout<<n <<" ";
        count = count + 1;
    }
    std::cout<<"\nSteps: " <<count;
    std::cout<<"\nMax: " <<max;
}
