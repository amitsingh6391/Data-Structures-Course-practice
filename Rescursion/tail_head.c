#include <stdio.h>



void fun(int n){
    if(n>0){
       
       // fun(n-1);//headrecursion/.........  when function is called first then print.
        printf("%d",n);
        fun(n-1);//tail recursion/.........
    }
}





int main(){
   int x=3;

   fun(x);


    return 0;

}