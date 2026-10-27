#include<iostream>

int main(){
    int num,pos;
    std::cin>>num>>pos;
    int valid_check=1;
    for(int i=0;i<pos-1;i++){
        valid_check*=10;
    }
    if(valid_check>num){
        std::cout<<"Don't have digit on index "<<pos<<"\n";
    }else{
        for(int i=0;i<pos-1;i++){
            num/=10;
        }
        std::cout<<num%10<<"\n";
    }
}


