#include <stdio.h>
#include <iostream>
using namespace std;



int fib(int n){

    int t1=0,t2=1,i,s=0;
    if(n<=1){
        return n;
    }else{
       for(i=2;i<n;i++){
            s=t2+t1;
        t1=t2;
        t2=s;
       }
    }
    return s;
}



int rfib(int n){   //recursive function......

    if(n<=1){
        return 1;
    }{
        return rfib(n-2)+rfib(n-1);
    }

}


int F[10];

int reducefib(int n){

    if(n<=1){
        F[n]=n;
        return n;
    }else{
        if(F[n-2]==-1){
           F[n-2]=reducefib(n-2);}

        if(F[n-1]==-1)
        {

           F[n-1]=reducefib(n-1);

           }
        F[n]=F[n-2]+F[n-1];

        return F[n-2]+F[n-1];
    }

}

int main(){

    int r= rfib(3);

    cout<<r<<endl;

    for(int i=0;i<10;i++){
        F[i]=-1;
    }


int m= reducefib(3);

cout<<m<<endl;

    return 0;
}