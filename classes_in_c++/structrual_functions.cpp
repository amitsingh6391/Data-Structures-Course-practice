#include <stdio.h>
#include <iostream>

using namespace std;


struct Rectangle{
    int length;
    int width;
};



void intialize(Rectangle * r ,int l,int w){

    r->length=l;
    r->width=w;


}


int parametrs(struct Rectangle r){

    int p;
    p=2*(r.length+r.width);
    return p;

}

int area(struct Rectangle r){

    return r.length*r.width;


}

int main(){

    int length=0;
    int width=0;

    int l,w;


    struct Rectangle r={0,0};



    cout<<"Enter the length and width"<<endl;
    cin>>l>>w;
    intialize(&r,l,w);

    int p=parametrs(r);
    int a= area(r);
    cout<<"parametrs of recatangle : "<<p<<endl<<"and area is : "<<a;

}