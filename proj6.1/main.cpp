#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num;
    cout<<"Enter the number of el-s in an array :"<<endl;
    cin>>num;
    int *arr=new int(num);
    cout<<"Enter the elements of the array :";
    for(int i=0;i<num;i++){
        cin>>*(arr+i);
    }
    //1. the elements having the value 0 should be sent back
    /*
    int counter=0;
    for(int i=0;i<num;i++){
        if(*(arr+i)==0){
            counter++;
            continue;
        }
        cout<<*(arr+i);
    }
    for(int i=0;i<counter;i++){
        cout<<0;
    }
    */
    //2.reverse the subarray from (min(arr),max(arr))
    //ex. 9894564121 -> 9465498121
    int *sub_arr = new int();
    int max_index, min_index;
    int max=*(arr+0);
    int min=*(arr+0);
    for (int i=1;i<num;i++){
        if(*(arr+i)>max){
            max=*(arr+i);
        }
        if(*(arr+i)<min){
            min=*(arr+i);
        }
    }
    // can we combine the 2 for-s below?
    for(int i=0;i<num;i++) {
        if (arr[i] == max) {
            max_index = i;
            break;
        }
    }
    for(int i=0;i<num;i++) {
        if (arr[i] == min) {
            min_index = i;
            break;
        }
    }
    cout<<max_index<<" "<<min_index<<endl;
    if(max_index<min_index){
        max_index=min_index+max_index;
        min_index=max_index-min_index;
        max_index=max_index-min_index;
    }
    for(int i=min_index;i<max_index;i++){
        for(int j=0;j<(max_index-min_index)-1;j++){
            sub_arr[j]=arr[max_index-j-1];
        }
    }
    for(int j=0;j<=min_index;j++){
        cout<<arr[j];
    }
   for(int j=0;j<(max_index-min_index)-1;j++){
        cout<<sub_arr[j];
    }
    for(int j=max_index;j<num;j++){
        cout<<arr[j];
    }
    //3. check whethetr the word is symmetric;
    /*
    string word;
    string word_left;
    double size;
    bool sym=1;
    cout<<"Enter the word to check whether it's symmetric:";
    cin>>word;
    //cout<<sizeof(word)/sizeof(word[0])<<endl;//why not working?
    size=word.size();
    for(int i=0;i<floor(size/2);i++){
        word_left[i]=word[size-i-1];
    }
    for(int i=0;i<floor(size/2);i++){
        if(word[i]!=word_left[i]){
            sym=0;
            break;
        }
    }
    if(sym==0){
        cout<<"not symmetric";
    }
    else{
        cout<<"symmetric!";
    }
    */
    return 0;
}