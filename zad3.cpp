#include<iostream>

bool onCircle(int a,int b,int c,int d){
    return ((a*a+b*b)==(c*c+d*d));
}

int main(){
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<(onCircle(a,b,c,d)?"Yes":"No")<<"\n";
}

