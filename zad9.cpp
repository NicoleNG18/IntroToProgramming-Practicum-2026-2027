#include<iostream>

int main(){
    double a,b,c;
    std::cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b){
        int temp;
        if(a>b){
            temp=b;
            b=a;
            a=temp;
        }
        if(a>c){
            temp=c;
            c=a;
            a=temp;
        }
        if(b>c){
            temp=c;
            c=b;
            b=temp;
        }
        if(a==b && b==c){
            std::cout<<"Equilateral ";
        }else if(a==b || b==c || c==a){
            std::cout<<"Isosceles ";
        }else{
            std::cout<<"Scalene ";
        }
        double a2=a*a;
        double b2=b*b;
        double c2=c*c;
        if(a2+b2<c2){std::cout<<"Obtuse\n";}
        else if(a2+b2==c2){std::cout<<"Right\n";}
        else {std::cout<<"Acute\n";}
    }else{
        std::cout<<"Not a triangle\n";
    }

}



