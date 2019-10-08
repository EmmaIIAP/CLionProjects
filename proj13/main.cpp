#include <iostream>
using namespace std;
//Recursion!
//1. print the digits of a number vertically using recursion
void writeVertical(int n){
    if(n<10) {
        cout<<n;
    }
    else {
        writeVertical(n/10);
        cout<<(n%10);
    }
}
void cheers(int n)
{
    if (n == 1) {
        cout << "Hurray\n";
    }
    else
    {
        cout << "Hip ";
        cheers(n - 1);
    }
}
//2.Write a recursive void function that has one parameter that is a positive integer
//and that writes out that number of asterisks (*) to the screen, all on one line.
void NumOfAsrerisks(int num){
    if(num==1){
        cout<<"*";
    }
    else{
        cout<<"*";
        NumOfAsrerisks(num-1);
    }
}
//3.Write a recursive void function that has one parameter that is a positive integer.
// When called, the function writes its argument to the screen backward.
// That is, if the argument is 1234, it outputs the following to the screen:4321
void backward(int num){
    if(num<9){
        cout<<num;
    }
    else{
        cout<<num%10;
        backward(num/10);
    }
}
//4.Write a recursive void function that takes a single int argument n
// and writes the integers1, 2, ... , n.
void PrintUpton(int num){
    if(num==1){
        cout<<1;
    }
    else{
        PrintUpton(num-1);
        cout<<num;
    }
}
//5.Write a recursive void function that takes a single int argument n
// and writes integers n, n-1, ... , 3, 2, 1.
void PrintFromn(int num){
    if(num==1){
        cout<<1;
    }
    else{
        cout<<num<<' ';
        PrintFromn(num-1);
    }
}
int main() {
    //writeVertical(123456);
    //cheers(3);
    //NumOfAsrerisks(5);
    //backward(1234);
    //PrintUpton(3);
    PrintFromn(10);
}