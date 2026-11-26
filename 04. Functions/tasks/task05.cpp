#include <iostream>

bool areColi(int xa, int ya, int xb, int yb, int xc, int yc)
{
    return xa*(yb-yc)+xb*(yc-ya)+xc*(ya-yb)==0;
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

    std::cout<< std::boolalpha<<areColi(a, b, c, d, e, f);

}
