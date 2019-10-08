#include <iostream>
using namespace std;
//Find GCD/LCM using Euclid's algo
int insert_num(int val){
    cin>>val;
}
int main() {
    int a,b,r;
    int *arr_r=new int[10];//will learn declaration without 10 in future
    cout<<"Enter 2 numbers to calculate their GCD:(First number should be greater):";
    cin>>a>>b;
    int inputed_a=a;
    int inputed_b=b;
    int i=0,ch=0;
    int &d=i;
    int &c=ch;
    while(r!=0){
        if((inputed_a%inputed_b)==0){
            c=1;
            cout<<c;
            cout<<"The GCD of "<<inputed_a<<" and "<<inputed_b<<" is: "<<b<<endl;
            cout<<"The LCM of "<<inputed_a<<" and "<<inputed_b<<" is: "<<(inputed_a*inputed_b)/b<<endl;
            break;
        }
        r=a%b;
        arr_r[d]=r;
        a=b;
        b=r;
        d++;
    }
    if(c==0){
        cout<<"The GCD of "<<inputed_a<<" and "<<inputed_b<<" is: "<<arr_r[d-2]<<endl;
        cout<<"The LCD of "<<inputed_a<<" and "<<inputed_b<<" is: "<<inputed_a*inputed_b/arr_r[d-2]<<endl;
    }

}