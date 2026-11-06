#include<iostream>

long long factorial(int n){
    long long result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

bool isStrong(int n){
    int original=n;
    long long sum=0;
    while(n>0){
        sum+=factorial(n%10);
        n/=10;
    }
    return (sum==original);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<(isStrong(n)?"true":"false")<<"\n";
}
