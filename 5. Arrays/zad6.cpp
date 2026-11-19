#include<iostream>

int abs(int x){
    if(x<0){
        return -x;
    }
    return x;
}

int maxManhattanDistance(int x[],int y[],int n){
    int maxDistance=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int distance=abs(x[i]-x[j])+abs(y[i]-y[j]);
            if(distance>maxDistance){
                maxDistance=distance;
            }
        }
    }
    return maxDistance;
}

int main(){
    int n,x[128],y[128];
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>x[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>y[i];
    }
    std::cout<<maxManhattanDistance(x,y,n)<<"\n";
}
