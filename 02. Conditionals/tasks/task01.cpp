#include <iostream>
 
int main()
{
    std::cout<<"а: ";
    int a = 0;
    std::cin>>a;
    
    std::cout<<"b: ";
    int b = 0;
    std::cin>>b;
 
    int calculate = (a > b)? a:b;
    std::cout<< calculate;
}
