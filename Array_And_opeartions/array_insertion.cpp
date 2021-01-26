#include <stdio.h>
#include <iostream>
using namespace std;


struct  Array{
    int A[10];
    int size;
    int length;
};


void Append(struct Array *arr , int x){

    if(arr->length<arr->size){
        arr->A[arr->length++]=x;

    }


}



void insert(struct Array *arr,int index, int x){
if(index>=0 && index <=arr->length){
for(int i=arr->length;i<index;i--){
    arr->A[i]=arr->A[i-1];
}
arr->A[index]=x;
arr->length++;
}
}

void display(struct Array arr){
    int i;
    cout<<"\n Elemnts are \n";
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }

}



int main(){
    struct Array arr= {{2,3,4,5,6},10,5};
    insert(&arr,2,10);
    // Append(&arr,10);
    display(arr);//if we give invalid index then vLUE WILL NOT BE INSERTED
    return 0;
}