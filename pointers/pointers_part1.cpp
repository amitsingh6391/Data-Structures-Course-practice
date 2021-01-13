#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main(){
    int a= 10;
    int *p;

    p=&a;
    cout<<a<<endl;
    printf(" using pointers in c %d",*p);//derefrencing 

    cout<<p; //address of that variale p in our stack 



    //ponters to an array;

int A[5]={1,2,3,4,5};
int *q;
q=A;//or a=&A[0] //intialized pointer in array ..
for(int i=0; i<5; i++){  //access the elemnt of array by using pointers
    cout<<p[i]<<endl;
}

//now we create array in heap by using pointers..
int *h;
h=(int *)malloc(5*sizeof(int));

h=new int[5]; // in c ++ we use this syntax

h[0]=10;h[1]=12,h[2]=13,h[3]=14;h[4]=15; //intialzed the array value

for(int i=0;i<5;i++){

    printf(" array in heap in c %d \n and in c++ : ",h[i]);

    cout<<h[i]<<endl;
}


delete [] h; // to release memeory in c++  , that is known as memory delocalization..
free(h); //to released the memory from heap which alloctaed in heap this is c syntax





    return 0;
}