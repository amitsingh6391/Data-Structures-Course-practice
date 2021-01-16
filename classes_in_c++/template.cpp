#include <iostream>
using namespace std;


template<class T>

class Airthmatic{
    private:
 T a;
    T b;
    public:
    Airthmatic(T a ,T b);
    T add();
    T sub();


};


template<class T>

   Airthmatic<T>:: Airthmatic(T a ,T b){
        this->a=a;
        this->b=b;

    }




template<class T>
T Airthmatic<T> :: add(){
    T c;
    c=a+b;
    return c;
}


template<class T>
T Airthmatic<T>::sub(){
    T c;
    c=a-b;
    return c;
}








int main(){


    Airthmatic<char> ar('A','b');
    cout<<"ADD : "<< (int)ar.add()<<endl;
    cout<<"Sub : "<<(int)ar.sub()<<endl;

    return 0;
}