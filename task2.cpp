#include<iostream>

int main(){
    unsigned int year;
    std::cin>>year;
    std::cout<<(((year%4==0 && year%100!=0)||(year%400==0))?"Yes":"No")<<std::endl;
}

