#include<iostream>

int main(){
    unsigned int n;
    std::cin>>n;
    if(n<2){
        std::cout<<"Invalid input\n";
        return 0;
    }
    int max1,max2;
    std::cin>>max1>>max2;
    if(max1<max2){
        int temp=max1;
        max1=max2;
        max2=temp;
    }
    int temp;
    for(int i=0;i<n-2;i++){
        std::cin>>temp;
        if(temp>max1){
            max2=max1;
            max1=temp;
        }else if(temp>max2){
            max2=temp;
        }
    }
    std::cout<<max1<<" "<<max2<<"\n";

}
