#include <stdio.h>


int e(int x,int n){

static double s;    //tailor series using honors rule;
if(n==0)
    return s;
s=1+x*s/n;
return e(x,n-1);



}


int tailorloop(int x,int n){
    int s=1;
    for(;n>0;n--){
        s=1+x/n*s;
    }
    return s;
}

//tailor series through resursion.....


 int main(){
     double r=  e(2,10);
     double r2= tailorloop(2,10);
     printf("%lf \n",r);
     printf("%lf \n",r2);
     return 0;
 }