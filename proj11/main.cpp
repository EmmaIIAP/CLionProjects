#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int* creatAndInitializeArray(int);
void printArray(int*,int);
double averageOfArray(int*,int);
int countOfEven(int*,int);

//working with arrays and functions
int main(){

    int sz;
    cin>>sz;
    int *arr=creatAndInitializeArray(sz);
    printArray(arr,sz);
    cout<<"Average of array is:"<< averageOfArray(arr,sz)<<endl;
    cout<<"count of evens in array is: "<<countOfEven(arr,sz)<<endl;
    delete []arr;

}
int* creatAndInitializeArray(int size){
    int *ptr=new int[size];
    for (int i = 0; i <size ; ++i) {
        ptr[i]=rand()%10;
    }
    return ptr;
}

void printArray(int* Array,int size){
    for (int i = 0; i < size; ++i) {
        cout<<Array[i]<<' ';
    }
    cout<<endl;
}
double averageOfArray(int* Array,int size){
    float sum=0;
    for (int j = 0; j <size ; ++j) {
        sum+=Array[j];
    }
    return sum/size;
}
int countOfEven(int* Array,int size){
    int count=0;
    for (int j = 0; j <size ; ++j) {
        if(Array[j]%2==0)
            count++;
    }
    return count;
}