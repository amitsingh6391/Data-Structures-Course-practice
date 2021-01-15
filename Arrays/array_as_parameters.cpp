#include<stdio.h>
#include <iostream>
using namespace std;

void fun(int *a,int n){

// instead of square bracet we used *


    cout<<sizeof(a)/sizeof(int)<<endl;

//we can't use for each loop on pointer..

for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}



}




int * func(int size){

    int *p;
    p=new int[size];

    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;
    
}


int dynamicfunction(){
    int *ptr,sz=5;
    ptr=func(sz);
    for(int i=0;i<sz;i++)
    cout<<ptr[i] <<endl ;

    return 0;

}

int main(){
    int a[]={2,3,4,5,6};
    int n=5;
    fun(a,n);
    for(int x:a)
    cout<<x<<" ";

    cout<<"now create array dynamicly"<<endl;

    dynamicfunction();
   
    return 0;
}