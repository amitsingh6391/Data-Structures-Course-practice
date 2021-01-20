#include <stdio.h>


int tailor_Seriries(int x ,int n){

    static int p=1,f=1;
    double r;

    if(n==0){
        return 1;
    }else{
        r=tailor_Seriries(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
printf("%d \n ",tailor_Seriries(4,14));
    return 0;
}