#include<iostream>

int findPosition(int arr[],int n,int x){
    int left=0,right=n;
    while(left<right){
        int mid=(left+right)/2;
        if(arr[mid]<x){
            left=mid+1;
        }
        else{
            right=mid;
        }
    }
    return left;
}

int main(){
    int n,arr[128],x;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cin>>x;
    std::cout<<findPosition(arr,n,x)<<"\n";
}
