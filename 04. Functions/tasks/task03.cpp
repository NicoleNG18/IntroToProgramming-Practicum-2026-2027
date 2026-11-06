#include <iostream>

bool OnCircle(int xa, int ya, int xb, int yb)
{
    return xa*xa+ya*ya==xb*xb+yb*yb;
//Другото беше xa / ((xa*xa) + (ya*ya)) == ya / ((xb * xb) + (yb * yb));

}
int main() 
{
    int a;
    std::cin>>a;

    int b;
    std::cin>>b;

    int c;
    std::cin>>c;

    int d;
    std::cin>>d;

    std::cout<< std::boolalpha<<OnCircle(a, b, c, d);
}
