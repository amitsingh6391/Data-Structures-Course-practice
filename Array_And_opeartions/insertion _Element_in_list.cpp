#include <stdio.h>
#include <iostream>
using namespace std;



struct Array
{
 int A[10];
 int size;
 int length;
};


void Insertion(struct Array *arr,int x){

int i=arr->length-1;
    if(arr->length==arr->size){
        return ;
    }

    while(i>=0 && arr->A[i]>x){
arr->A[i+1]=arr->A[i];
i--;
    }
    arr->A[i+1]=x;
    arr->length++;

}


int isSorted(struct Array arr){

for(int i=0;i<arr.length-2;i++){

if(arr.A[i]>arr.A[i+1])
     return 0;

}

return 1;



}


void swap(int *p,int *q){
int temp;
temp=*p;
*p=*q;
*q=temp;

}

void Rearrange(struct Array *arr){
int i,j;
i=0;
j=arr->length-1;
while(i<j){
    while(arr->A[i]<0)
    {
        i++;
        }
            while(arr->A[j]>=0){
                j--;}

    if(i<j)
      {
         
      swap(&arr->A[i],&arr->A[j]);
      }
}

}


void Display(struct Array arr){

    for(int i=0;i<arr.length;i++){
       printf("%d ,",arr.A[i]);
    }

}






int main(){
struct Array arr = {{9,-3,4,-5,2,-7},10,7};
Rearrange(&arr);
// Insertion(&arr,12);
// int r=isSorted(arr);
// printf("%d\n",r);
Display(arr);
    return 0;
}