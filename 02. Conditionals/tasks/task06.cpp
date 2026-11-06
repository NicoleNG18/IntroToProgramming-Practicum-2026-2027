#include <iostream>
 
int main()
{
    std::cout<<"a: ";
    unsigned a;
    std::cin>>a;
    
    if(a<10 || a>99)
    {
        std::cout<<"Invalid number!";
    }

    std::cout<<"b: ";
    unsigned b;
    std::cin>>b;

    if(b<10 || b>99)
    {
        std::cout<<"Invalid number!";
    }

    unsigned a1 = a/10, a2= a%10, b1 = b/10, b2 = b%10;

    if(a1<=a2+1 && a2<=b1+1 && b1<=b2+1)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
}
