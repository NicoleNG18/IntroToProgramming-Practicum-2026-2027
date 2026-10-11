#include <iostream>

int main()
{
	int a;

	std::cin >> a;
	
    bool check1 = a>=0;
    bool check2 = a<0;
    
    int b = -a;
	
	int bigger = check1*a + check2*b;
	
	std::cout <<  bigger;
}

//Малко изобретателност :)
