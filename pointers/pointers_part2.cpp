#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;



struct Rectangle
{
    /* data */

    int length ;
    int breadth;

};


int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;

cout<<sizeof(p1)<<endl;
cout<<sizeof(p2)<<endl;  // every pointers take 8 bytes of data in  memory
cout<<sizeof(p3)<<endl;
cout<<sizeof(p4)<<endl;

    return 0;
}