#include <iostream>
using namespace std;
//functions: by value/ by reference
void foo(int a){//int &a try by reference
    ++a;
    cout<<a<<endl;
}
int ElementMakeSquare(int a){
    a=a*a;
    cout<<a;
    return a;
}
int main() {
    int b;
    cin>>b;
    foo(b);
    cout<<b<<endl;
    cout<<"_________________________"<<endl;
    int k=12;
    int d=k;//int &d=k; try by reference
    ++k;
    cout<<"k="<<k<<endl;
    cout<<"d="<<d<<endl;
    //dynamic array with random int, and chnage the values->squared via function
    /*
    int sz=3;
    int *arr=new int[sz];
    for (int i=0;i<sz;i++){
        arr[i]=rand()%10;
    }
    cout<<"el of array before function"<<endl;
    for (int i=0;i<sz;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl<<"after calling the function (to make array els squared)"<<endl;
    for (int i=0;i<sz;i++){
        arr[i]=ElementMakeSquare(arr[i]);
    }
    cout<<endl<<"after making square print array"<<endl;
    for (int i=0;i<sz;i++){
        cout<<arr[i]<<' ';
    }
    //for the inputed n create dyn arr, initialize, calc
     */
}