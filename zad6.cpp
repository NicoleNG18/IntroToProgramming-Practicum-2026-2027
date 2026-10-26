#include<iostream>

int main(){
    unsigned int a,b;
    std::cin>>a>>b;
    int merged=a*100+b;
    std::cout<<merged<<" - "<<((a/10<a%10 && a%10<b/10 && b/10<b%10)?"Yes \n":"No \n");
}



