#include <iostream>
#include <cmath>
using namespace std;
int main() {
    //Pointers & References
    /*
    int b=7;
    int* a = &b;
    cout<<"&a: "<<&a<<endl;
    cout<<"a:  "<<a<<endl;
    cout<<"&b: "<<&b<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"*a: "<<*a<<endl;
    */
    //book examples
    // Ex.1 p.426
    /*
    int *p1 = new int(42);
    int *p2 = new int();
    p2 = p1;
    cout << "*p1 == " << *p1 << endl;//42
    cout << "*p2 == " << *p2 << endl;//42
    *p2 = 53;
    cout << "*p1 == " << *p1 << endl;//53
    cout << "*p2 == " << *p2 << endl;//53
    p1 = new int;
    *p1 = 88;
    cout << "*p1 == " << *p1 << endl;//88
    cout << "*p2 == " << *p2 << endl;//53
    cout << "Hope you got the point of this example!\n";
    */
    //Ex.2
    /*
    int *p1, *p2;
    p1 = new int;
    p2 = new int;
    *p1 = 10;
    *p2 = 20;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout << *p1 << " " << *p2 << endl;// 10,20
    p1 = p2;
    cout << *p1 << " " << *p2 << endl;//20,20
    *p1 = 30;
    cout << *p1 << " " << *p2 << endl;//30,30
    */

    //Problems with 2D arrays
    //creating static 2D array
    /*
    const int n=3;
    const int m=3;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=rand()%10;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     */

    //check whether the el is on diagonal
    //change i,j to get get the element you want to check on the diagonal
    /*
    int i=4;
    int j=2;
    //(m%2)==1 && ((m/2)==i==j)
    if((i==j) && (m/2==i)) {
        cout<<"arr["<<i<<"]["<<j<<"]:"<<"is on both diagonals"<<endl;
    }
    else if(i==j){
        cout<<"arr["<<i<<"]["<<j<<"]:"<<"is on the main diagonal"<<endl;
    }
    else if (j==(m-i-1)){
        cout<<"arr["<<i<<"]["<<j<<"]:"<<"is on the sec diagonal"<<endl;
    }
    else {
        cout<<"arr["<<i<<"]["<<j<<"]:"<<"is not on diagonals"<<endl;
    }
     */
    //1. print the min max els
    /*
    int min=arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }cout<<min;
     */
    //2.print each rows max and min el
    /*
    int MinRow;
    for(int i=0;i<n;i++){
        MinRow=arr[i][0];
        for(int j=0;j<n;j++){
            if(arr[i][j]<MinRow){
                MinRow=arr[i][j];
            }
        }cout<<MinRow<<endl;
    }
     */
    //3. the mean of main diagonal
    /*
    double sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][i];
            }
        }
    }cout<<"mean of main diagonal is: "<<sum/n<<endl;
     */

    //451. print the mean of the el-s of both diagonals
    /*
    double sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((i==j) && (m/2==i)) {
                sum+=arr[i][j];
            }
            else if(i==j){
                sum+=arr[i][j];
            }
            else if (j==(m-i-1)){
                sum+=arr[i][j];
            }
        }
    }cout<<"mean of el's of both diagonals: "<<sum/(2*m-1)<<endl;
     */


}