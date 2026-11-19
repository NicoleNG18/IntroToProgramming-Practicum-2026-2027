#include<iostream>

int removeHundreds(int n){
    return (n/1000)*100+n%100;
}

bool isValid(int n){
    return (n>=1000&&n<=9999&&removeHundreds(n)%11==0);
}

int main(){
    int m,n;
    std::cin>>m>>n;
    bool found=false;
    for(int i=m;i<=n;i++){
        if(isValid(i)){
            std::cout<<i<<" ";
            found=true;
        }
    }
    if(!found){
        std::cout<<"No such a number!";
    }
    std::cout<<"\n";
}
