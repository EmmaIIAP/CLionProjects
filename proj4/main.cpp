#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //print the digits of a num
    /*
    int num,r;//134
    cin>>num;
    while(num!=0) {
        r=num%10;
        cout<<r<<endl;
        num=num/10;
    }
     */
    //print the digits of a num in a right order alg1
    /*
    int num,r;
    cin>>num;
    int s=0;
    while(num) {
        s=s*10+num%10;
        num/=10;
    }

    cout<<s<<endl;
    while(s!=0) {
        r=s%10;
        cout<<r<<endl;
        s=s/10;
    }
    cout<<s;
    */
    /*
    //print the digits in a right order alg2
    int k=1234;
    int c=0;
    int x=k;
    //tvi erkarutyun
    while(k){
        k=k/10;
        c++;
    }
    for(int i=0;i<c;i++) {
        cout<<int(x/pow(10,c-1-i))%10<<' ';
    }
     */
    //print the factors of a num

    int num=12;
    cout<<1<<" ";
    for(int i=2;i<=num/2;i++){
        if(num%i==0) {
            cout << i << " ";
        }
    }cout<<num;

}