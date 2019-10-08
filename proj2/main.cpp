#include <iostream>
using namespace std;
//ternary operator is the only operator that returns a value and can be assigned
int main() {
    // 1. assign max(a,b,c) to d
    int a,b,c,d;
    cin>>a>>b>>c;
    d = a>b?a>c?a:c:b;
    cout<<d;
    /*
    max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1:
          ((n2 > n3 && n2 > n4) ? n2:
          (n3 > n4 ? n3 : n4));
    */

    //2. print the season of the input number using switch case
    /*
    int num;
    cin>>num;
    switch(num){
        case 1:
        case 2:
        case 3:
            cout<<"winter"<<endl;
            break;
        case 4:
        case 5:
        case 6:
            cout<<"spring"<<endl;
            break;
        case 7:
        case 8:
        case 9:
            cout<<"summer"<<endl;
            break;
        case 10:
        case 11:
        case 12:
            cout<<"autumn";
            break;
        default:
            cout<<"out of bounds of 12 month";
    }
    switch(num){
        case 12:
        case 3:
        case 6:
        case 9:
            cout<<"first month";
            break;
        case 1:
        case 4:
        case 7:
        case 10:
            cout<<"second month";
            break;
        case 2:
        case 5:
        case 8:
        case 11:
            cout<<"third month";
            break;
    }
    */
}