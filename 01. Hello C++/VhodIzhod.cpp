#include <iostream>

const double dollar=1.1;
const double yen=145;

int main() {
    // 1)
    // std::cout << "Hello, World!" << std::endl;
    // int apples, pears, bananas;
    // std::cin >> apples >> pears >> bananas;
    // std::cout << "Don't forget to buy " << apples << " apples, " << pears << " pears and " << bananas << " bananas!" << std::endl;
    
    // 2)
    // double width,height;
    // std::cin >> width >> height;
    // double S=width*height;
    // double P=2*(width+height);
    // std::cout << "Perimeter = " << P << std::endl;
    // std::cout <<"Area = " << S << std::endl;

    // 3)
    // int euros;
    // std::cin >> euros;
    // std::cout << "dollars = " << euros*dollar << std::endl;
    // std::cout << "yen = " << euros*yen << std::endl;

    // 4)
    // int a,b;
    // std::cin>>a>>b;
    // bool isDivisible=(a%b==0);
    // std::cout<<std::boolalpha<<isDivisible<<std::endl;

    // 5)
    // unsigned int a,b,c;
    // std::cin>>a>>b>>c;
    // int newNumber=a*100+b*10+c;
    // std::cout<<newNumber<<std::endl;

    // 6)
    // unsigned int number;
    // std::cin>>number;
    // int units=number%10;
    // std::cout<<"units = "<<units<<std::endl;
    // int secondDigit=(number/10)%10;
    // std::cout<<"tens = "<<secondDigit<<std::endl;
    // int firstDigit=number/100;
    // std::cout<<"hundreds = "<<firstDigit<<std::endl;
    // int sumDigits=firstDigit+secondDigit+units;
    // std::cout<<"sum = "<<sumDigits<<std::endl;

    // 7)
    // unsigned int a,b;
    // std::cin>>a>>b;
    // int prod=a*b;
    // std::cout<<"Prod: "<<prod<<std::endl;
    // int lastDigit=prod%10;
    // std::cout<<"Last digit: "<<lastDigit<<std::endl;
    // bool isOdd=lastDigit%2;
    // std::cout<<"Is odd: "<<std::boolalpha<<isOdd<<std::endl;

    // 8)
    // int code;
    // std::cin>>code;
    // int lastThreeDigits=code%1000;
    // std::cout<<"*****"<<lastThreeDigits<<std::endl;

    // 9)
    // int seconds;
    // std::cin>>seconds;
    // int minutes=seconds/60;
    // int hours=minutes/60;
    // int days=hours/24;
    // std::cout<<days<<" Days, "<< hours%24<<" Hours, "<<minutes%60<<" Minutes, "<<seconds%60<<" Seconds"<<std::endl;

    // 10)
    // int a,b,c,d;
    // std::cin>>a>>b;
    // std::cin>>c>>d;
    // bool crossed=(a<=d && b>=c);
    // std::cout<<std::boolalpha<<crossed<<std::endl;

    // Bonus 1)
    // int number;
    // std::cin>>number;
    // int firstDigit=number/1000;
    // int secondDigit=(number/100)%10;
    // int secondToLastDigit=(number/10)%10;
    // int lastDigit=number%10;
    // std::cout<<std::boolalpha<<(firstDigit==lastDigit && secondDigit==secondToLastDigit)<<std::endl;

    // Bonus 2)
    // int number;
    // std::cin>>number;
    // bool isPositive=(number>0);
    // bool isNegative=(number<0);
    // int absoluteNumber= number* isPositive + number * isNegative * -1;
    // std::cout<<absoluteNumber<<std::endl;


    // Bonus 3)
    // int a,b;
    // std::cin>>a>>b;
    // bool aIsBigger=(a>b);
    // bool bIsBigger=(b>a);
    // int higherNumber= a * aIsBigger + b * bIsBigger;
    // std::cout<<higherNumber<<std::endl;
    

    // Bonus 4)
    double distance;
    std::cin>>distance;
    bool isFiveKm=(distance<=5);
    bool isMoreThanFiveKm=(distance>5);
    double price= isFiveKm * distance * 2.5 + isMoreThanFiveKm * distance * 1.5;
    bool moreThanTwentyLv=(price>20);
    bool lessThanTwentyLv=(price<=20);
    price= moreThanTwentyLv * price*1.1 + lessThanTwentyLv * price;
    price+=3;
    std::cout<<price<<std::endl;


    return 0;
}