#include<iostream>

int brInversions(int arr[],int n){
    int br=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                br++;
            }
        }
    }
    return br;
}

int main(){
    int n,arr[256];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<brInversions(arr,n)<<"\n";
}
