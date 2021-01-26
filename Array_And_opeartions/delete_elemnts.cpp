#include <stdio.h>
#include <iostream>
using namespace std;




struct  Array{
    int A[10];
    int size;
    int length;
};


int Delete(struct Array *arr , int index){
    int x=0;
    if(index>0 && index<arr->length){
x=arr->A[index];
        for(int i =index;i<arr->length-1;i++){
arr->A[i]=arr->A[i+1];
        }
arr->length--;
return x;
    }
    return 0;
}




void display(struct Array arr){
    int i;
    cout<<"\n Elemnts are \n";
    for(i=0;i<arr.length;i++){
        cout<<arr.A[i]<<endl;
    }

}



int main(){
    struct Array arr= {{2,3,4,5,6,},10,5};
   
  Delete(&arr,6);
    display(arr);//if we give invalid index then vLUE WILL NOT BE INSERTED
    return 0;
}