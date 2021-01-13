// #include<stdio.h>
// #include<stdlib.h>
#include<iostream>
using namespace std;


int main (){
    int a=10;
    int &r=a;   // we must intilazid when we declare refrenced...  , this is nickname of variavles ion this case "a"
    int b=50;
    r=b;   // change the value of our variable...
    
    printf("%d\n",r);


    cout<<a<<endl;
    
    return 0;
}