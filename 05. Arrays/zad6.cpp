#include<iostream>
#include<cmath>

bool isDigit(char c){
    return (c>='0'&&c<='9');
}

bool isUpper(char c){
    return (c>='A'&&c<='Z');
}

bool isLower(char c){
    return (c>='a'&&c<='z');
}

bool isAlpha(char c){
    return (isUpper(c)||isLower(c));
}

bool isAlnum(char c){
    return (isAlpha(c)||isDigit(c));
}

char capitalize(char c){
    if(isLower(c)){
        return c-'a'+'A';
    }
    return c;
}

char makeLower(char c){
    if(isUpper(c)){
        return c-'A'+'a';
    }
    return c;
}

int parseInt(char c){
    if(isDigit(c)){
        return c-'0';
    }
    return -1;
}

char toChar(int n){
    if(n>=0&&n<=9){
        return n+'0';
    }
    return '\0';
}

double myLog(double n,double base){
    if(n<=0||base<=1){
        return -1;
    }
    return log(n)/log(base);
}

double myPow(double x,int n){
    double result=1;
    for(int i=0;i<abs(n);i++){
        result*=x;
    }
    if(n<0){
        return 1/result;
    }
    return result;
}

int myCeil(double x){
    int n=x;
    if(x>n){
        n++;
    }
    return n;
}

int myFloor(double x){
    int n=x;
    if(x<n){
        n--;
    }
    return n;
}

double myAbs(double x){
    if(x<0){
        return -x;
    }
    return x;
}

int main(){
    char c;
    std::cin>>c;
    std::cout<<isDigit(c)<<"\n";
}
