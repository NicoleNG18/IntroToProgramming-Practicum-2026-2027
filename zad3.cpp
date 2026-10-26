#include<iostream>

int main(){
    unsigned int a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<((a+b>c && b+c>a && a+c>b)?"Yes":"No")<<std::endl;
}


