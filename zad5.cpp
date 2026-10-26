#include<iostream>

int main()
{
    unsigned int month;
    std::cin>>month;
    if(month==1 || month==3 || month==5 || month==10 ||month==7 || month==8 || month==12)
    {
        std::cout<<"31\n";
    }
    else if (month==2)
    {
        unsigned int year;
        std::cout<<"Year: ";
        std::cin>>year;
        std::cout<<(((year%4==0 && year%100!=0)||(year%400==0))?"29":"28")<<std::endl;

    }
    else
    {
        std::cout<<"30\n";
    }
}


