#include <iostream>
using namespace std;
//qani der not 2 nermucel
int main() {
    //understanding ++a vs a++
    int sum=0,a=0;
    while(a<=3){
        sum+=a++;
        //sum+=++a;
    }
    cout<<sum;

    // 1. print the sum of the el-s of interval [a,b], where a,b are inputed via the user
    /*
    int a,b,sum;
    sum=0;
    cin>>a>>b;
    if(b<a){
        b=a+b;
        a=b-a;
        b=b-a;
    }
    for (int i=a;i<=b;i++){
        sum+=i;
    }
    cout<<"sum of the nums in the interval"<<"["<<a<<","<<b<<"]"<<"is "<<sum;
    */
    //2.print the mean of [1;10] interval
    /*
    double a,sum=0;
    a=1;
    while(a<11){
        sum+=a++;
    }
    cout<<sum/10;
     */
    //3.mean of [a,b] interval
   /* double a,b,sum=0;
    double old_a;
    cin>>a>>b;
    old_a=a;
    if(b<a){
        b=a+b;
        a=b-a;
        b=b-a;
        old_a=a;
    }

    while(a<=b){
        sum+=a++;
    }
    cout<<sum/(b-old_a+1);*/
    //4.print even el-s product and odd el-s sum of [a,b] interval, then calculate their mean
    /*
    double a, b, sum,prd;
    sum=0;
    prd=1;
    cin>>a>>b;
    for (int i=a;i<b+1;i++){
        if(i%2==0){
          prd*=i;
        }
        else{
            sum+=i;
        }
    }cout<<(sum+prd)/2;
    */
    //5.
    /*
    int z =1;
    for (int x=1;  x<100; x++) {
        if (x%3==1 || x%4==2){
            z=z*x;
        }
    }cout<<"artadryale = "<<z;
    */
}