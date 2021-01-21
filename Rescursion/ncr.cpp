#include <stdio.h>

#include <iostream>
using namespace std;


int c(int n,int r){
    if(n==r || r==0)
        return 1;

    return c(n-1,r-1)+c(n-1,r);
    
}

int main(){
    int x= c(5,3);
    cout<<x<<endl;
    return 0;
}