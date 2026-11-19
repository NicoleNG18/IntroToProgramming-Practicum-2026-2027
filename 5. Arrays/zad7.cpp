#include<iostream>

void multiplyPolynom(int a[],int n,int b[],int m,int c[]){
    for(int i=0;i<n+m-1;i++){
        c[i]=0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i+j]+=a[i]*b[j];
        }
    }
}

int main(){
    int n,m,a[128],b[128],c[255];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    std::cin>>m;
    for(int i=0;i<m;i++){
        std::cin>>b[i];
    }
    multiplyPolynom(a,n,b,m,c);
    for(int i=0;i<n+m-1;i++){
        std::cout<<c[i]<<" ";
    }
    std::cout<<"\n";
}
