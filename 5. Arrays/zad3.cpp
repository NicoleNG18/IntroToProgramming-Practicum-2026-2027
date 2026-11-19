#include<iostream>

int nod(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int arrayNod(int arr[],int n){
    int arr_nod=arr[0];
    for(int i=1;i<n;i++){
        arr_nod=nod(arr_nod,arr[i]);
    }
    return arr_nod;
}

int main(){
    int n,arr[16];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<arrayNod(arr,n)<<"\n";
}
