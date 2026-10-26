#include<iostream>

int main(){
    int x,y;
    std::cin>>x>>y;
    if(x==0 || y==0){
        std::cout<<"On axis \n";
    }else if(x>0 && y>0){
        std::cout<<"First \n";
    }else if(x<0 && y>0){
        std::cout<<"Second \n";
    }else if(x<0 && y<0){
        std::cout<<"Third \n";
    }else{
        std::cout<<"Forth \n";
    }
}



