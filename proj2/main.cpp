#include <iostream>
using namespace std;

//mutqagrvac bnakan tvi hamar tpel shabtva vor orna 1-kiraki
int main() {
    unsigned int a,b,c;
    cin>>a>>b;

   /* a%=7;
    if(a%7==0)
        a=1;
    switch(a%7) {
        case 1:
            cout << "sunday";
            break;
        case 2:
            cout << "monday";
            break;
        case 3:
            cout << "tuesday";
            break;
        case 4:
            cout << "wednesday";
            break;
        case 5:
            cout << "thursday";
            break;
        case 6:
            cout << "friday";
            break;
        case 7:
            cout << "saturday";
            break;
        default:
            cout<<"not a natural";
    }*/
   a>b?cout<<a<<endl:cout<<b<<endl;
   c=a>b?a:b;
   cout<<c;
   //a>b?a>c?cout<<a:cout<<c:cout<<b;
}