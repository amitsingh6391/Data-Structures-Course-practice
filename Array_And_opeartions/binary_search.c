#include <stdio.h>
#include<stdlib.h>



struct Array{

    int A[10];
    int length;
    int size;
};

int Binary_search(struct Array arr,int key){
int l,h,mid;
l=0;
h=arr.length-1;

while(l<=h){
    mid = (l+h)/2;
    if(key==arr.A[mid]){
        return mid;
    }
    else if (key<arr.A[mid])
    {
       h=mid-1; 
    }
    else 
    {
       l=mid+1; 
    }

    
}

return -1;
}


int RBinarysearch(int arr[] ,int l,int h,int key){
if(l<=h){
    int mid;
    mid = l+(h-1)/2;

    if(key==arr[mid]){
        return mid;
    }
    else if (key<arr[mid])
    {
       return RBinarysearch(arr,l,mid-1,key); 
    }else{
        return RBinarysearch(arr,mid+1,h,key);
    }



}
return -1;
}


int main(){


    struct Array arr = {{2,3,4,5,6},10,7};
    int r=Binary_search(arr,3);
    int Recursive_r= RBinarysearch(arr.A,0,arr.length,6);
  
    printf("elemnt present at %d  in recursive  and \n in normal binary %d ",Recursive_r,r);
   
    return 0;
}