#include <stdio.h>
#include <iostream>

using namespace std;

struct Array
{
    /* data */
    int A[10];
    int size;
    int length;
};


int Get(struct Array arr,int index){

    if(index>=0 && index<arr.length){
        return arr.A[index];
    }

}

void Set(struct Array *arr ,int index ,int y){


if(index>=0 && index< arr->length){
  
  arr->A[index]=y;

}
}


int Max(struct Array arr ){

    int max =arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]>max){
            max = arr.A[i];
        }
    }

    return max;

}


int Min(struct Array arr ){

    int min =arr.A[0];
    for(int i=1;i<arr.length;i++){
        if(arr.A[i]<min){
            min = arr.A[i];
        }
    }

    return min;

}



int Sum(struct Array arr){
    
    int sum =0;
    for(int i=0;i<arr.length;i++){
sum+=arr.A[i];
    }


    return sum;
}


int RSum(struct Array arr ,int n){
if(n<0){
    return 0;
}else{
    return RSum(arr,n-1)+arr.A[n];
}



}

int main(){
struct Array arr= {{1,3,5,4},6,8};

int r = Get(arr,3);
int n = RSum(arr, arr.length);
Set(&arr,3,6);
int a= Max(arr);
int b= Min(arr);
cout<<r<<endl<<"value at this index"<<endl;

cout<<"Sum of elemnts are "<<endl<<n<<endl<<"ANd max and minimum are  "<<  a  <<"  and  "<< b <<endl;

    return 0;
}