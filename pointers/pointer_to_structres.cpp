#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct Rectangle
{
    /* data */
    int length;
    int breadth;
};


int main(){

struct Rectangle r={10,5};  

Rectangle r2= {10,5};  //we can write in c++ struct in not mandatory...

cout<<r.length<<endl;   
cout<<r.breadth<<endl;


Rectangle *p=&r;
cout<<p->length<<endl;  //when we have pointer then use arrow syntax..
cout<<p->breadth<<endl;






//how to create object of rectangle in heap;


Rectangle *h;
h=(struct Rectangle *) malloc(sizeof(struct Rectangle));
h=new Rectangle;

h->length = 19;
h->breadth =20;
cout<<"stored in heap"<<endl;
cout<<h->length<<endl;
cout<<h->breadth<<endl;



return 0;
}