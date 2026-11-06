#include <iostream>
 
int main()
{
    unsigned day, month,year;
    std::cin>>day >>month >>year;

    if ((day > 0 && day<32) && (month > 0 && month <13 ) && year > 0)
    {
        bool isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)? true:false);
        if(day == 29 && (month == 2) && isLeap == false) 
        {
            std::cout<<"Invalid date.";
        }
        else if(day==31 && (month == 4 ||month == 6 || month == 9 || month ==  11))
        {
            std::cout<<"Invalid date.";
        }
        else
        {
            if ((day == 30 && (month == 4 || month == 6 || month == 9 || month == 11))
            || (day == 31 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
            || (day== 28 && month == 2 && isLeap == false) 
            || (day== 29 && month == 2 && isLeap == true))
            {
        
                if (day == 31 && month == 12)
                {
                    year = year + 1;
                    month = 1;
                }
                else
                {
                    month = month + 1;
                }
                day = 1;
                std::cout<< (day<=9 ? "0" : "");
                std::cout<<day <<".";
            }
            else
            {
                std::cout<< (day+1<=9 ? "0" : "");
                std::cout<<day+1 <<".";
            }
            
            std::cout<< (month<=9 ? "0" : "");
            std::cout<<month<<".";
            std::cout<<year;
        }
    }
    else
    {
        std::cout<<"Invalid date.";

    }


}
