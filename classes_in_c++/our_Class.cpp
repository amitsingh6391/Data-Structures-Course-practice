#include <stdio.h>
#include <iostream>

using namespace std;


class Rectangle{

    public:
    int length;
    int width;




void intialize(int l,int w){

    length=l;
    width=w;


}


int parametrs(){

    int p;
    p=2*(length+width);
    return p;

}

int area(){

    return length*width;


}


};

int main(){

    int length=0;
    int width=0;

    int l,w;

 
   Rectangle r;

  



    cout<<"Enter the length and width"<<endl;
    cin>>l>>w;
    r.intialize(l,w);

    int p=r.parametrs();
    int a= r.area();
    cout<<"parametrs of recatangle : "<<p<<endl<<"and area is : "<<a;

return 0;
}