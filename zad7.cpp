#include<iostream>

int main(){
    unsigned int a,x,y;
    std::cin>>a>>x>>y;
    std::cout<<((((x/a)+(y/a))%2==0)?"Black\n":"White\n");
}




