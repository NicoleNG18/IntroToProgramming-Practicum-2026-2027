#include<iostream>

double average(int arr[],int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}

int brAboveAverage(int arr[],int n){
    double avg=average(arr,n);
    int br=0;
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            br++;
        }
    }
    return br;
}

int main(){
    int n,arr[100];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Average: "<<average(arr,n)<<"\n";
    std::cout<<"Above average: "<<brAboveAverage(arr,n)<<"\n";
}
