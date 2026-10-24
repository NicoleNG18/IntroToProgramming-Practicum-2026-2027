#include <iostream>
 
int main()
{
    unsigned a, b,c;
    std::cin>>a >>b >>c;
    if(a+b>c && a+c>b && b+c>a)
    {

        if(a==b && b==c && a==c)
        {
            std::cout<<"Equilateral, ";
        }
        else if((a==b && (b!=c || a!=c) )|| (a==c && (c!=b || a!=b)) || (b==c && (b!=a || c!=a)))
        {
            std::cout<<"Isosceles, ";
        }
        else
        {
            std::cout<<"Scalene, ";
        }
       if(a*a + b*b == c*c)
       {
            std::cout<<"Right";

        }
        else if(a*a + b*b > c*c)
        {
            std::cout<<"Acute";

        }
        else
        {
            std::cout<<"Obtuse";

        }
    }
    else
    {
        std::cout<<"Not a triangle";
    }


}
