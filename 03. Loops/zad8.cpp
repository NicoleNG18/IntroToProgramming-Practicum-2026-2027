#include<iostream>

int main(){
    unsigned int n;
    std::cin>>n;
    unsigned int max_el=1;
    unsigned int num_steps=0;
    std::cout<<"Sequence: ";
    while(n!=1){
        num_steps++;
        if(max_el<n){
            max_el=n;
        }
        std::cout<<n<<" ";
        n=((n%2==0)?n/2:n*3+1);
    }
    std::cout<<"1";
    std::cout<<"\nSteps: "<<num_steps<<"\nMax value: "<<max_el<<"\n";
}




