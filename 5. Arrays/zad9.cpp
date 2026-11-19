#include<iostream>

bool isPalindrome(int arr[],int first,int last){
    while(first<last){
        if(arr[first]!=arr[last]){
            return false;
        }
        first++;
        last--;
    }
    return true;
}

bool isConcatenation(int arr[],int n){
    for(int i=1;i<n;i++){
        if(isPalindrome(arr,0,i-1)&&isPalindrome(arr,i,n-1)){
            return true;
        }
    }
    return false;
}

int main(){
    int n,arr[256];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<(isConcatenation(arr,n)?"true":"false")<<"\n";
}
