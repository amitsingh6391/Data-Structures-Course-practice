#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int add(int &a ,int &b){  //call by refence..
int c ;
c=a;
a=b;
b=c;
}

int main(){

    int num1=10,num2=15,sum;
    
sum=add(num1,num2);
cout<<num1<<endl;
}
//call by refrence is used when we used one line function..


