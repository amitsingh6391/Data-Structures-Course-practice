#include<stdio.h>

using namespace std;

#include <iostream>

int main(){

    int A[10]={2,3,4,5,67,746};
    int *p,*q;
    p=new int [5]; //this will create array in heap
    p[0]=1;
    p[3]=3;
    p[1]=6;
    p[2]=5;
    p[4]=9;
    q=(int*)malloc(5*sizeof(int));

    for(int i=0;i<5;i++){
        printf("%d\n",A[i]);

    }

    //and in dynamicly array;
cout<<"dynamic array";

    for(int j=0;j<5;j++){
printf("%d\n",p[j]);
    }

free(q);
delete [] q;
    return 0;

}