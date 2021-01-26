#include <stdio.h>



struct linear_search
{
    /* data */

    int Array[10];
    int size;
    int length;
};


int linearsecrh(struct linear_search arr , int x){   // this is simple linear sercg

    for(int i=0;i<arr.length;i++){

        if(arr.Array[i]==x){
return i;
        }
    }
return -1;
}

void swap(int *x,int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}




int Move_to_front(struct linear_search *arr , int x){   // this is simple linear sercg

    for(int i=0;i<arr->length;i++){

        if(arr->Array[i]==x){

            swap(&arr->Array[i],&arr->Array[0]);
return i;
        }
    }
return -1;
}




int main(){

struct linear_search arr = {{1,3,9,5},6,8};
//int r= linearsecrh(arr,8);

int r2= Move_to_front(&arr,5);

printf("\n %d location or index the elemnt is \n ",r2);


    return 0;

}
