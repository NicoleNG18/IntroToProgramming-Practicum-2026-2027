#include <iostream>
 
int main()
{
    std::cout<<"1. Събиране\n2. Изваждане\n3. Умножение\n4. Деление\n5. Остатък при деление\nИзбор: ";
    int operation;
    std::cin>>operation;

    std::cout<<"a: ";
    int a;
    std::cin>>a;
       
    std::cout<<"b: ";
    int b;
    std::cin>>b;

    
    switch (operation)
    {
        case 1:
        std::cout<<a+b;
        break;
        case 2:
        std::cout<<a-b;
        break;
        case 3:
        std::cout<<a*b;
        break;
        case 4:
        if(b==0)
        {
        std::cout<<"Devision by zero.";
        }
        else
        {
            std::cout<<(double)a/b;
        }
        break;
        case 5:
        if(b==0)
        {
        std::cout<<"Devision by zero.";
        }
        else
        {
            std::cout<<a%b;
        }        break;
        default:
        std::cout<<"Invalid option.";
        break;

    }
}
