#include<iostream>

int main(){
    unsigned long long n,temp;
    std::cin>>n;
    unsigned int dig_counter, max_digit=0, max_counter=0;
    for(int i=0;i<=9;i++){
        temp=n;
        dig_counter=0;
        while(temp>0){
            dig_counter+=(temp%10==i);
            temp/=10;
        }
        if(dig_counter>=max_counter){
            max_counter=dig_counter;
            max_digit=i;
        }
    }
    std::cout<<max_digit<<"\n";
}
