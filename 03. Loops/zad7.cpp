#include<iostream>

int main(){
    int n;
    std::cin>>n;
    long long sqr=n*n;
    bool flag=true;
    while(n>0){
        if(n%10!=sqr%10){
            flag=false;
            break;
        }
        n/=10;
        sqr/=10;
    }
    std::cout<<((flag)?"Automorphic":"Not automorphic")<<"\n";
}



