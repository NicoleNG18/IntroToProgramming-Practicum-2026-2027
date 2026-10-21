#include <iostream>
 
int main()
{
    std::cout<<"a: ";
    double a;
    std::cin>>a;
 
    std::cout<<"b: ";
    double b;
    std::cin>>b;
 
    std::cout<<"c: ";
    double c;
    std::cin>>c;
 
    if(a<=0 || b<=0 || c<=0)
    {
        std::cout<<"Invalid input!";
    }
    else 
    {
        if(((a+b>c) && (a+c>b) && (b+c>a)))
         {
            std::cout<<"Yes";
        }
        else
        {
            std::cout<<"No";
        }
    }
}
