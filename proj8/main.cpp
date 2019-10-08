#include <iostream>
#include <cmath>
#include <assert.h>
using namespace std;
//dynaomic matrices
int main() {
    /*
    int sz=10;
    int **ptr=new int*[sz];
    if(!ptr) {
        std::cout << "something wnet wrong" << std::endl;
        assert(0);
    }
    for (int z = 0; z <sz ; ++z) {
        ptr[z]=new int[sz];
        if(!ptr[z])
            std::cout<<"something went wrong for ptr["<<z<<']'<<std::endl;
        assert(ptr[z]);
    }

    for (int i = 0; i <sz ; ++i) {
        for (int j = 0; j <sz ; ++j) {
            ptr[i][j]=std::rand()%10;
        }
    }

    for (int i = 0; i <sz ; ++i) {
        for (int j = 0; j <sz ; ++j) {
            std::cout<<ptr[i][j]<<' ';
        }
        std::cout<<std::endl;

    }

    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;

    int count=0;
    for (int j = 0; j <sz ; ++j) {
        count++;
        std::cout<<ptr[sz-1-j][j]<<' ';
    }
    std::cout<<"\n general diagonal elements  count:\t"<<count<<std::endl;



    count=0;
    for (int j = 0; j <sz ; ++j) {
        count++;
        std::cout<<ptr[sz-1-j][j]<<' ';
    }
    std::cout<<"\n secondary diagonal elements  count:\t"<<count<<std::endl;


    for (int k = 0; k <sz ; ++k) {
        delete []ptr[k];

    }
    delete ptr;
    return 0;
    */
    // 452. Given mxm matrix. Output the sum of squares of first and last el.
    /*
    int sz=3,sum=0;
    int **matr =new int *[sz];
    for(int i=0;i<sz;i++){
        matr[i]=new int[i];
    }
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            matr[i][j]=rand()%10;
        }
    }
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            cout<<matr[i][j]<<' ';
        }
        cout<<endl;
    }
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(((i==j)&&(i==0)) || ((i==j)&&(i==(sz-1)))){
                sum+=pow(matr[i][j],2);
            }
        }
    }
    cout<<"sum of squares of first and last elements of a matrix:"<<sum<<endl;
    */
}

