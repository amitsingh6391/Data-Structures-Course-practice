#include <stdio.h>
#include <iostream>

using namespace std;

void TOH(int n , int A, int B, int C){

    if(n>0){
        TOH(n-1,A,C,B);
        printf("(%d,%d)\n",A,C);
        TOH(n-1,B,A,C);
    }

}


int main(){
    int r = 2/10;
    TOH(5,1,2,3);
    cout<<r;
    
    return 0;
}