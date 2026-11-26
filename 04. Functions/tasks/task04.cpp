#include <iostream>
#include <cmath>

double getP(int xa, int ya, int xb, int yb, int xc, int yc)
{
    return (sqrt((xb-xa)*(xb-xa) +(yb-ya)*(yb-ya)) + sqrt((xc-xb)*(xc-xb) +(yc-yb)*(yc-yb)) + sqrt((xc-xa)*(xc-xa) +(yc-ya)*(yc-ya) ));
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

    int e;
    std::cin>>e;

    int f;
    std::cin>>f;
    std::cout<<getP(a, b, c, d, e, f);
}
