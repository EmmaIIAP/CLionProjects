#include <iostream>
#include <cmath>
#include <assert.h>
//void functions
void detectAction(char,int,int);
void sum(int,int);
void sub(int,int);
void mul(int,int);
void bajanum(int,int);
void er();
int main() {

    int x,y;
    char k;
    std::cin>>x>>k>>y;

    detectAction(k,x,y);
    return 0;
}

void detectAction(char x,int y,int z){

    switch(x){
        case '+':
            sum(y,z);
            break;
        case '-':
            sub(y,z);
            break;
        case '*':
            mul(y,z);
            break;
        case '/':
            bajanum(y,z);
            break;
        default:
            er();
            break;
    }
}
void sum(int k,int p){
    std::cout<<k<<'+'<<p<<'='<<k+p;
}
void sub(int k,int p){
    std::cout<<k<<'-'<<p<<'='<<k-p;
}
void mul(int k,int p){
    std::cout<<k<<'*'<<p<<'='<<k*p;
}
void bajanum(int k,int p){
    std::cout<<k<<'*'<<p<<'='<<k*p;
}
void er(){
    std::cout<<"ERROR"<<std::endl;
}
