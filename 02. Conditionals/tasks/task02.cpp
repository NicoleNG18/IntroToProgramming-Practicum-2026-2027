#include <iostream>
 
int main()
{
   std::cout<<"Year: ";
    int year = 0;
    std::cin>>year;
    std::cout<<"Year is ";
    if(year<=0)
    {
        std::cout<<"invalid!";
    }
    else
    {
        if(year % 4 == 0 && year % 100 != 0 ||  year % 400 == 0)
        {
            std::cout<<"leap!";
        }
        else
        {
            std::cout<<"regular!";
 
        }
    }
}
