#include <stdio.h>




int fact(int n){
    if(n==0){
        return 1;

    }else{
        return fact(n-1)*n;
    }
}



int factloop(int n){
    int f=1;
    int i;
    for(i=1;i<=n;i++){

        f=f*i;


    }

    return f;
}

int main( ){

    int x=fact(5);
    int y =factloop(6);
    printf("%d\n and in loop %d ",x,y);

    return 0;
}