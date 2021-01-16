#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int length=  0;
    int width = 0;
    printf("enter the length and width \n");
    cin>>length>>width;
    int per=2*(length+width);
    cout<<"area is "<<length*width<<endl<<"and parametrs is "<<per;




    return 0;
}