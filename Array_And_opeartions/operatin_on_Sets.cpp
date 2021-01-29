#include <stdio.h>
#include <stdlib.h>
struct Array
{

    int A[10];
    int size;
    int length;
};


struct Array* Union(struct Array *arr1,struct Array *arr2){
int i,j,k;
i=j=k=0;

struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length){


    if(arr1->A[i] < arr2->A[j]){
arr3->A[k]=arr1->A[i];
k++;
i++;
    }else if(arr2->A[j]<arr1->A[i]){
        arr3->A[k]=arr2->A[j];
        k++;
        j++;
    }else
    {
        arr3->A[k++]=arr1->A[i++];
        j++;

    }
    

}
for(;i<arr1->length;i++){
   arr3->A[k]=arr1->A[i];
   k++;
}
for (; j < arr2->length; j++)
{

    
 arr3->A[k]=arr2->A[j];
 k++;
}

arr3->length=k;
arr3->size=10;


return arr3;
}



//intersection...


struct Array* Intersection(struct Array *arr1,struct Array *arr2){
int i,j,k;
i=j=k=0;

struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length){


    if(arr1->A[i] < arr2->A[j]){

i++;
    }else if(arr2->A[j]<arr1->A[i]){
       
        j++;
    }else
    {
        arr3->A[k++]=arr1->A[i++];
        j++;

    }
    

}
for(;i<arr1->length;i++){
   arr3->A[k]=arr1->A[i];
   k++;
}
for (; j < arr2->length; j++)
{

    
 arr3->A[k]=arr2->A[j];
 k++;
}

arr3->length=k;
arr3->size=10;


return arr3;
}


void Display(struct Array arr){

    for(int i=0; i<arr.length;i++){
        
        printf("%d  ",arr.A[i]);
    }

}




struct Array* Differnce(struct Array *arr1,struct Array *arr2){
int i,j,k;
i=j=k=0;

struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
while(i<arr1->length && j<arr2->length){


    if(arr1->A[i] < arr2->A[j]){
    arr3->A[k]=arr1->A[i];
    k++;
i++;
    }else if(arr2->A[j]<arr1->A[i]){
       
        j++;
    }else
    {
       // arr3->A[k++]=arr1->A[i++];
       i++;
        j++;

    }
    

}
for(;i<arr1->length;i++){
   arr3->A[k]=arr1->A[i];
   k++;
}


arr3->length=k;
arr3->size=10;


return arr3;
}








int main(){
    struct Array arr1={{1,2,5,4},10,4};
    struct Array arr2= {{1,2,6,7},10,4};
    struct Array *arr3;
    arr3 = Differnce(&arr1,&arr2);
    Display(*arr3);
    return 0;
}