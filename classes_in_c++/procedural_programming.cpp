#include <stdio.h>
#include <iostream>

using namespace std;



int parametrs(int length,int width){

    int p;
    p=2*(length+width);
    return p;

}

int area(int length , int width){

    return length*width;


}

int main(){

    int length=0;
    int width=0;

    cout<<"Enter the length and width"<<endl;
    cin>>length>>width;

    int p=parametrs(length,width);
    int a= area(length,width);
    cout<<"parametrs of recatangle : "<<p<<endl<<"and area is : "<<a;

}