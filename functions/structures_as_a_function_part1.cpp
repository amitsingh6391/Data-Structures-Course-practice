#include<stdio.h>
#include<iostream>
using namespace std;


struct Rectangle
{
    int length;
    int breadth;
 
};



void func(struct Rectangle r){  //call by value


r.length=20;  //only length will be chnaged in inside function only
cout<<"length : "<<r.length<<endl<<"Breadth  : " <<r.breadth<<endl;

}


void callbyadddress(struct Rectangle *r){  //call by address


r->length=30;  //length will be chnaged in main function also
cout<<"length : "<<r->length<<endl<<"Breadth  : " << r->breadth<<endl;

}





int main(){

struct Rectangle r={10,5};
func(r);

printf("length %d \n breadth %d ",r.length,r.breadth);

callbyadddress(&r);

cout<<"after the callbyaddress"<<endl<<r.length<<endl;

return 0;

}