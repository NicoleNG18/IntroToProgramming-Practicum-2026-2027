#include <iostream>

int main()
{
    unsigned number, index;
    std::cin >> number >> index;

    unsigned originalNumber = number; 
    unsigned currentDigit = 0;
    bool isValid = true;

    for(unsigned i = 1; i <= index; i++)
    {
        if (number == 0 && (originalNumber != 0 || i > 1))
        {
            isValid = false;
            break;
        }

        currentDigit = number % 10;
        number = number / 10;
    }

    if (isValid && index > 0) 
    {
        std::cout << currentDigit << std::endl;
    } 
    else 
    {
        std::cout << "Dont have digit on index " <<index;

    return 0;
}
}
