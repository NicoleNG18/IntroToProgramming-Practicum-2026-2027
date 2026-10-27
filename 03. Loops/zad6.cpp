#include<iostream>
const int num_system=2;
int main(){
    long long bin;
    std::cin>>bin;
    long long dec=0;
    int power_counter=0;
    long long pow2;
    while(bin>0){
        pow2=1;
        for(int i=0;i<power_counter;i++){
            pow2*=num_system;
        }
        dec=dec+(bin%10*pow2);
        power_counter++;
        bin/=10;
    }
    std::cout<<dec<<"\n";
}
