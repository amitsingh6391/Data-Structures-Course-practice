#include<stdio.h>
#include<iostream>
using namespace std;


struct Rectangle{

    int length;
    int breadth;
};

struct Rectangle *func(){

    struct Rectangle *p;
    p=new Rectangle;
   // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

p->length=15;
p->breadth=20;



return p;

}


int main(){

    struct Rectangle *ptr=func();
    cout<<"length  : "  <<ptr->length<<endl<<"breadth  :  "<<ptr->breadth<<endl;
return 0;
}