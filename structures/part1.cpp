#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;
} r1 ; //we can declare at a time of construct struct..


struct Rectangle r;// we can declare global


int main(){


struct Rectangle r1={10,5} ; //declartion of variable of structres...




printf("%lu",sizeof(r1));
cout<<r1.length<<endl;
cout<<r1.breadth<<endl;

//chnage the struct val...
r1.length=20;
r1.breadth=30;

cout<<"after chnage the variables value"<<endl;

cout<<r1.length<<endl;
cout<<r1.breadth<<endl;



return 0;





}