#include <stdio.h>



int tailor(int x ,int n){
static int s=1;
    if(n==0){
        return 1;
    }else{

s=1+x/n*s;
return tailor(x,n-1);

    }



}


int main(){

    int r= tailor(10,5);
    printf("%d",r);
    return 0;
}