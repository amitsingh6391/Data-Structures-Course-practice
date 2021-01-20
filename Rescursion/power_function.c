#include <stdio.h>




int pow(int m , int n){
    if(n==0){
        return 1;
    }
    else{
        return pow(m,n-1)*m;
    }
}


int pow2(int m,int n){
    if(n==0){           //this function is reduced the number of multiplication
        return 1;
    }
   if(n%2==0){
       return pow2(m*m,n/2);
   }else{
       return m*pow2(m*m,(n-1)/2);
   }
}


int main (){

    int x= pow(96,3);

    int y = pow2(2,6);

    printf("%d and %d ",x,y);

    return 0;
}