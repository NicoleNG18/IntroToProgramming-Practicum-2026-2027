#include<iostream>

long long scalarProduct(int a[],int b[],int n){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    return sum;
}

int main(){
    int n,a[128],b[128];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }
    std::cout<<scalarProduct(a,b,n)<<"\n";
}
