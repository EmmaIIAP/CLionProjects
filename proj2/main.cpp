#include <iostream>
using namespace std;
//Hw2
int main() {
    // 1. d-in veragrel max(a,b,c)
    /*
    int a,b,c,d;
    cin>>a>>b>>c;
    d = a>b?a>c?a:c:b;
    cout<<d;
     */

    //2. mutqagrel 10 tive [1,12] mijakayqum, switch case i ognutyamb , mutqagrvac tvi exxanak@ tpel
    int num;
    cin>>num;
    switch(num){
        case 1:
        case 2:
        case 3:
            cout<<"winter";
            break;
        case 4:
        case 5:
        case 6:
            cout<<"spring";
            break;
        case 7:
        case 8:
        case 9:
            cout<<"summer";
            break;
        case 10:
        case 11:
        case 12:
            cout<<"autumn";
            break;
        default:
            cout<<"out of bounds of 12 month";
    }
}