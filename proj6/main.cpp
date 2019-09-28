#include <iostream>
using namespace std;
//**POINTERS**
//int n=10;
//const int size=n;
int main() {
    //int arr[size];
    /*int *arr=new int[10];
    int size=10;
    for(int i=0;i<size;i++) {
        arr[i]=i*i;
       // cout<<*arr+i<<' '; //try me
        cout<<*(arr+i)<<' ';
        cout<<arr[i]<<' ';
    }*/

        int arr[]={1,14,25,45,7};
        int sum=0;
        double d = 0;
        double sz = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < sz; i++)
        {
            sum += arr[i];
        }
        d=sum/sz;
        std::cout << "mijin tvab = " <<d<< std::endl;
        return 0;
}
