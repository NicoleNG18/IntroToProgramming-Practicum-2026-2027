#include<iostream>

int main(){
    int a,b;
    std::cin>>a>>b;
    int nod;
    int abs_a=((a>0)?a:-1*a),abs_b=((b>0)?b:-1*b);
    int swap_helper;
    if(abs_a<abs_b){
        swap_helper=abs_a;
        abs_a=abs_b;
        abs_b=swap_helper;
    }
    //std::cout<<abs_a<<" "<<abs_b<<"\n";
    while(abs_a%abs_b!=0){
        abs_a=abs_a%abs_b;
        //std::cout<<abs_a<<" "<<abs_b<<"\n";
        if(abs_a<abs_b){
            swap_helper=abs_a;
            abs_a=abs_b;
            abs_b=swap_helper;
        }
    }
    //std::cout<<abs_b;
    nod=abs_b;
    if((((a>0 && b<0))||(a<0 && b>0))){
        std::cout<<"-";
    }
    abs_a=((a>0)?a:-1*a);
    abs_b=((b>0)?b:-1*b);
    std::cout<<abs_a/nod<<"/"<<abs_b/nod<<"\n";
}
