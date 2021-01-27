#include<stdio.h>
#include <iostream>
using namespace std;

struct Array {

    int A[10];
    int length;
    int size;

};

void Reverse(struct Array *arr){
int *B;
int i,j;
B=new int[arr->length];
//B = (int *)*malloc(arr->length*sizeof(int));
for(i=arr->length-1,j=0;i>=0;i--,j++){
    B[j]=arr->A[i];   // this will reverse elemnt 
}
for(j=0;j<arr->length;j++){
    arr->A[j]=B[j]; // this will help to copy in our element is first
}
}

void Display(struct Array arr){

    for(int i=0;i<arr.length;i++){
       printf("%d\n",arr.A[i]);
    }

}


void swap(int *a,int *b){
int *temp;
    temp = a;
    *a=*b;
    *b= *temp;
}

void Reverse2(struct Array *arr){
 int i,j;
 for(i=0,j=arr->length-1;i<j;i++,j--)
 {
 swap(&arr->A[i],&arr->A[j]);
 }
}



int main(){

    struct Array arr= {{1,2,3,4,5,6,7,},8,9};
    Display(arr);
    printf("After reversing the arraay : \n");
    Reverse2(&arr);
    Display(arr);

    return 0;
}