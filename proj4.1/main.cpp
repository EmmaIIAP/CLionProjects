#include <iostream>
#include <cmath>
    using namespace std;
    int main() {
        //2. Check whether the num is perfect
        // (kataryal e ayn tive vore havasar e baci iranic mnacac bolor bajanararneri gumarin)
        /*
        int num,sum;
        cin>>num;
        sum=1;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                sum+=i;
            }
        }
        if(sum==num){
            cout<<num<<" is perfect!";
        }
        else {
            cout<<"not perfect";
        }
        */
        //3. print first 5 perfect numbers
        /*
        int j=1,counter=0;
        while(true){
            int sum=1;
            for(int i=2;i<=j/2;i++){
                if(j%i==0){
                    sum+=i;
                }
            }
            if(sum==j){
                counter++;
                cout<<j<<endl;
            }
            if(counter==4){
                break;
            }
            j++;
        }
        */
        // 4. check whether the number is prime
        /*
        int num;
        bool check=1;
        cin>>num;
        for (int i=2;i<=num/2;i++){
            if(num%i==0){
                check=0;
                break;
            }
        }
        if(check){
            cout<<num<<" is prime";
        }
        else{
            cout<<num<<" is not prime";
        }
        */
        //4.1 print first 10 primes
        int i=2;
        int counter=0;
        while(1) {
            int check=1;
            for (int j=2;j<=i/2;j++){
                if(i%j==0){
                    check=0;
                    break;
                }
            }
            if(check==1){
                cout<<i<<endl;
                counter++;
            }
            if(counter==10){
                break;
            }
            i++;
        }
        //5. check whether the num is palindrome
        //6. check whether the num is erjanik
        // (erjanik en ayn tvere voronq kiselis, \
        // aj ev dzaqx maseri tvanashanneri gumarnere havas
        // for 5. and 6.
        /*
        int num,left,right,counter=0;
        cin>>num;//12321
        //count the num of digits
        int c_num=num;
        int sum=0;
        while(c_num!=0){
            c_num=c_num/10;
            counter++;
        }
        right = num % int(pow(10, counter / 2));//21
        if(counter%2==0) {
            left = num / pow(10, counter / 2);//12
        }
        else{
            left = num / pow(10, counter / 2 + 1);//12
        }
        */
        //5.
        /*
        //reversing right part
        while(right!=0){
            sum=sum*10+right%10;//reversed right
            right/=10;
        }
        if(left==sum){
            cout<<num<<" is a palindrome!";
        }
        else{
            cout<<num<<" is not a palindrome!";
        }
         */
        //6.
        //sum of digits of a num
        /*
        int sum_right=0;
        int sum_left=0;
        while(right!=0){
            sum_right+=right%10;
            right/=10;
        }
        while(left!=0){
            sum_left+=left%10;
            left/=10;
        }
        if(sum_right == sum_left) {
            cout<<num<<" is erjanik!";
        }
        else {
            cout<<num<<" is not erjanik";
        }
         */
    }
}