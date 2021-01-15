
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int add(int *a ,int *b){  //call by address
int temp; ;
temp=*a;
*a=*b;
*b=temp;
}

int main(){

    int num1=10,num2=15,sum;
    
sum=add(&num1,&num2);
cout<<num1<<endl;
}


//call by address are using when we want to chnage 
// the ACRtual value of main function.