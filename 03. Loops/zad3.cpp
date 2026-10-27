#include<iostream>

int main(){
    unsigned int a;
    std::cin>>a;
    int sum=0;
    for(int i=a-1;i>=1;i--){
        if(a%i==0){
            sum+=i;
        }
    }
    std::cout<<((sum==a)?"Perfect":"Not perfect")<<"\n";

}

