#include <iostream>
#include <cmath>
using namespace std;
int main() {
    /*
    cout<<"How many numbers should your array contain?"<<endl;
    int num;
    cin>>num;
    const int size=num;
    int arr_default[size];
    //user adds elems to the array
    cout<<"Enter the " <<num<<" numbers you want your array to conatin."<<endl;
    for(int i=0;i<size;i++){
        cin>>arr_default[i];
    }
     */
    srand(time(NULL));
    cout<<"How many numbers should your array contain?"<<endl;
    int num;
    cin>>num;
    const int size=num;
    int *arr_default= new int[size];
    //assigning random numbers in the arr_default
    for(int i=0;i<size;i++){
        arr_default[i] = rand() % 10;;
    }

    for(int i=0;i<size;i++){
        cout<<arr_default[i]<<' ';
    }
    //1. print the (el)^2 sum of those el-s for which (value+index)%3==0
    /*
    int sum=0;
    for(int i=0;i<size;i++){
        if((arr_default[i]+i)%3==0){
            sum+=pow(arr_default[i],2);
        }
    }
     cout<<sum;
     */
    //2. print the mean of those el-s, whose index is equal to some natural number squared
    /*
    int sum=0,counter=0;
    double i_root_double,i_after_point;
    int i_root_int;
    for(int i=1;i<size;i++){
        i_root_double=sqrt(i);
        i_root_int=int(sqrt(i));
        i_after_point=i_root_double-i_root_int;
        if(i_after_point==0){
            counter++;
            sum+=arr_default[i];
        }
    }cout<<"The mean is: "<<sum/counter;
    */
    //3. print the mean of those el-s, whose value>index
    /*
    int sum=0,counter=0;
    for(int i=0;i<size;i++) {
        if(arr_default[i]>i){
            counter++;
            sum+=arr_default[i];
        }
    }cout<<"The mean is:" <<sum<<counter<<sum/counter;
    */
    //4. print the sum of those el-s, whose (value+index)^2%k==0
    /*
    int k,sum=0;
    cout<<"Enter k"<<endl;
    cin>>k;
    for(int i=0;i<size;i++){
        if(int(pow(arr_default[i]+i,2))%k==0){
            sum+=arr_default[i];
        }
    }cout<<"The sum is:"<<sum;
     */
    //5. the amount of el-s, whose |value-index|>k
    /*
    int counter=0,k;
    cout<<"Enter k"<<endl;
    cin>>k;
    for(int i=0;i<size;i++){
        if(abs(arr_default[i]-i)>k){
            counter++;
        }
    }cout<<"The amount is: "<<counter;
    */

    //6.the el^2 product, of those el-s, whose (value*index)%3==2
    /*
    int prod=1;
    for(int i=0;i<size;i++){
        if((arr_default[i]*i)%3==2){
            prod*=(pow(arr_default[i],2));
        }
    }cout<<"The product is "<<prod;
    */

    //7. (212) mean squared of positive el-s
    /*
    int sum=0,counter=0;
    for(int i=0;i<size;i++){
        if(arr_default[i]>0){
            counter++;
            sum+=pow(arr_default[i],2);
        }
    }cout<<"The mena squared: "<<sqrt(sum/counter);
     */
    //8. (218) the sum of el-s(with abs value), of odd index el-s
    /*
    int sum=0;
    for(int i=0;i<size;i++){
        if(i%2==1){
            sum+=abs(arr_default[i]);
        }
    }cout<<sum<<endl;
     */
    //9. the num of el-s, which indices are multiples of k
    /*
    //219
    int k,counter=0;
    cout<<"Enter k:"<<endl;
    cin>>k;
    for(int i=0;i<size;i++){
        if(i%k==0 && i!=0){
            counter++;
        }
    }cout<<counter;
     */
    //10. the num of pos and neg elements
    /*
    int odd_counter=0,even_counter=0;
    for(int i=0;i<size;i++){
        if(arr_default[i]%2==0){
            even_counter++;
        }
        else{
            odd_counter++;
        }
    }cout<<"There are "<<even_counter<<"evens and "<<odd_counter<<" odds."<<endl;
    */
    //11. print the num of els in (a,b)
    /*
    int a,b;
    cout<<"Enter a:"<<endl;
    cin>>a;
    cout<<"Enter b:"<<endl;
    cin>>b;
    cout<<"The number of el-s btw ("<<a<<","<<b<<") is "<<b-a-1;
    */
    //12.(224)the sum of cubed el-s of those, whose abs value is < k
    /*
    int sum=0,k;
    cout<<"Enter k:"<<endl;
    cin>>k;
    for(int i=0;i<size;i++){
        if(abs(arr_default[i])<k){
            sum+=pow(arr_default[i],3);
        }
    } cout<<sum;
    */
    //13.(229)product of those el-s, whose value-index>0
    int prod=1;
    for(int i=0;i<size;i++){
        if((arr_default[i]-i)>0) {
            prod*=arr_default[i];
        }
    }cout<<prod;
}