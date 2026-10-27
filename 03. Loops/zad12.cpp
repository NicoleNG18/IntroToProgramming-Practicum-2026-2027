
#include<iostream>

int main(){
    unsigned int n;
    std::cin>>n;
    int temp;
    unsigned int sum=0;
    for(int i=0;i<n-1;i++){
        std::cin>>temp;
        sum+=temp;
    }
    std::cout<<(n*(n+1))/2-sum<<"\n";

}
