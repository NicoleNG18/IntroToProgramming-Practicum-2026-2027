#include<iostream>

int main()
{
    int a,b,opp;

    std::cout<<"1.Addition \n2.Subtract \n3.Multiply \n4.Divide \n5.Divide with remainder \n";
    std::cin>>a>>b;
    std::cin>>opp;
    switch(opp)
    {
    case 1:
        std::cout<<a+b<<"\n";
        break;
    case 2:
        std::cout<<a-b<<"\n";
        break;
    case 3:
        std::cout<<a*b<<"\n";
        break;
    case 4:
        if(b!=0)
        {
            std::cout<<a/b;
        }
        else
        {
            std::cout<<"Division by zero";
        }
        std::cout<<"\n";
        break;
    case 5:
        if(b!=0)
        {
            std::cout<<a%b;
        }
        else
        {
            std::cout<<"Division by zero";
        }
        std::cout<<"\n";
        break;
    default:
        std::cout<<"Invalid option\n";
    }
}





