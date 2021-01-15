#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int add(int a ,int b){  //call by value
int c ;
c=a+b;
return c;
}

int main(){

    int num1=10,num2=15,sum;
    
sum=add(num1,num2);
cout<<num1<<endl;
}
//call by value wil be used when we don't to chnage the  actual value.


