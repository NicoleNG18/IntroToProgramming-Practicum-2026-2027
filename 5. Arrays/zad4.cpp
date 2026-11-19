#include<iostream>

bool isZigZag(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(i%2==0&&arr[i]>=arr[i+1]){
            return false;
        }
        if(i%2==1&&arr[i]<=arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n,arr[128];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<(isZigZag(arr,n)?"true":"false")<<"\n";
}
