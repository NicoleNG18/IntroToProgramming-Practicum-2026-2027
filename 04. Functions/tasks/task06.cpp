// САМО ФУНКЦИИ??
// НЕ РАЗБРАХ...
// ...ОПА...

bool isDigit(char digit)
{
    return digit>='0' && digit<='9';
}

bool isUpper (char letter)
{
    return letter >='A' && letter <= 'Z';
}

bool isLower (char letter)
{
    return letter >='a' && letter <= 'z';
}

bool isAlpha (char letter)
{
    return isLower(letter) || isUpper(letter);
}
bool isAlnum (char digitOrLetter)
{
    return isAlpha(digitOrLetter) || isDigit(digitOrLetter);
}
char capitalize (char letter)
{
    if(isLower(letter))
    {
        return letter - ('a' - 'A');
    }
    else
    return letter;
}
char makeLower (char letter)
{
    if(isUpper(letter))
    {
        return letter + ('a' - 'A');
    }
    return  letter;
}
int parseInt (char digit)
{
    if(isDigit(digit))
    {
        return digit - '0';
    }
    else
    {
        return -1;
    }
}

char toChar(int digit)
{
    if(!isDigit(digit))
    {
        return '\0';
    }
    else
    {
        return digit + '0';
    }
}

double myLog(double x, double base)
{
    do
    {
        std::cin>>x;
    }
    while (isDigit(x));
    do
    {
        std::cin>>base;
    }
    while (isDigit(base));
    int count = 0;
    for (int i = base; i <= x; i = i * base) 
    {
        count++;
    }
    return count;
}
int myPow(double x, int power)
{

   if (power == 0)
    {
        return 1;
    }
    double res = 1;
    int p = (power < 0) ? -power : power; 
    for (int i = 0; i < p; i++) 
    {
        res = res * x; 
    }
    if (power < 0)
    {
        return 1.0 / res; 
    }
    return res;
}
double myCeil(double x)
{
    int intPart = x;
    if (x > intPart)
    {
        return intPart + 1;
    }
    return intPart;
}



double myFloor(double x)
{
    int intPart = x;
    if (x < intPart)
    {
        return intPart - 1;
    }
    return intPart;
}

double myAbs(double x)
{
    if (x < 0)
    {
        return -x;
    }
    return x;
}
