#include<iostream>

int br_digits(long long num){
    int counter=0;
    while(num!=0){
        counter++;
        num/=10;
    }
    return counter;
}

int main(){
    long long num;
    std::cin>>num;
    std::cout<<br_digits(num)<<"\n";
}
