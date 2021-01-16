#include <iostream>
using namespace std;

class Rectangle{

    private:
    int length;
    int width;
public:
    Rectangle(){
        length=0;
        width=0;
    }
Rectangle(int l, int w){
length =l;
 width = w;
 }


int area(){
    return length*width;
}


 int permiter(){
     return 2*(length+width);
 }


void setLength(int l){
    length =l;
}

void setWidth(int w){
    width = w;
}


int getLength(){
    return length;
}
int getWidth(){

    return width;
}

~Rectangle(){
    cout<<"distryuctor";
}
    };
    



int main(){

    Rectangle r(10,4);
    cout<<"Area : "<<r.area()<<endl;
    cout<<"parametres : "<<r.permiter()<<endl;



}