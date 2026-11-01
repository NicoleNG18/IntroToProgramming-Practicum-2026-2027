#include <iostream>

void printOnes(unsigned n)
{
    switch (n)
    {
        case 1: std::cout << "one"; break;
        case 2: std::cout << "two"; break;
        case 3: std::cout << "three"; break;
        case 4: std::cout << "four"; break;
        case 5: std::cout << "five"; break;
        case 6: std::cout << "six"; break;
        case 7: std::cout << "seven"; break;
        case 8: std::cout << "eight"; break;
        case 9: std::cout << "nine"; break;
    }
}

void printTeens(unsigned n)
{
    switch (n)
    {
        case 10: std::cout << "ten"; break;
        case 11: std::cout << "eleven"; break;
        case 12: std::cout << "twelve"; break;
        case 13: std::cout << "thirteen"; break;
        case 14: std::cout << "fourteen"; break;
        case 15: std::cout << "fifteen"; break;
        case 16: std::cout << "sixteen"; break;
        case 17: std::cout << "seventeen"; break;
        case 18: std::cout << "eighteen"; break;
        case 19: std::cout << "nineteen"; break;
    }
}

void printTens(unsigned n)
{    switch (n)
    {
        case 2: std::cout << "twenty"; break;
        case 3: std::cout << "thirty"; break;
        case 4: std::cout << "forty"; break;
        case 5: std::cout << "fifty"; break;
        case 6: std::cout << "sixty"; break;
        case 7: std::cout << "seventy"; break;
        case 8: std::cout << "eighty"; break;
        case 9: std::cout << "ninety"; break;
    }
}

void printUnderThousand(unsigned n)
{
    unsigned hundreds = n / 100;
    unsigned remainder = n % 100;
    if (hundreds > 0)
    {
        printOnes(hundreds);
        std::cout << " hundred";
        if (remainder > 0)
        {
            std::cout << " and ";
        }
    }

    if (remainder >= 10 && remainder <= 19)
    {
        printTeens(remainder);
    }
    else
    {
        unsigned tens = remainder / 10;
        unsigned ones = remainder % 10;
        if (tens > 0)
        {
            printTens(tens);
            if (ones > 0)
            {
                std::cout << " ";
                printOnes(ones);
            }
        }
        else if (ones > 0)
        {
            printOnes(ones);
        }
    }
}

void printNumberInWords(unsigned n)
{
    if (n == 0)
    {
        std::cout << "zero";
        return;
    }
    unsigned thousands = n / 1000;
    unsigned remainder = n % 1000;
    if (thousands > 0)
    {
        printUnderThousand(thousands);
        std::cout << " thousand";
        if (remainder > 0)
        {
            if (remainder < 100 || remainder % 100 == 0)
            {
                std::cout << " and ";
            } else
            {
                std::cout << " ";
            }
        }
    }
    if (remainder > 0)
    {
        printUnderThousand(remainder);
    }
}

int main()
{
    unsigned n;
    std::cin >> n;
    printNumberInWords(n);
}
