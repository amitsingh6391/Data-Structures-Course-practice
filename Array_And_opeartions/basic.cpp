#include <stdio.h>

#include<iostream>

using namespace std;


struct Array{

int *A;
int size;
int length;

};


void Display(struct Array arr){
    
    cout<<"Elemnts are"<<endl;
  for (int i = 0; i < arr.length; i++)
  {
    cout<<arr.A[i];
  }
  
}

int main(){
    struct Array arr;
    int n,i;
    cout<<"Enter size of array : "<<endl;
    cin>> arr.size;



    arr.A = new int [arr.size];
    arr.length = 0;

    printf("Enter number of number \n"); 
    scanf("%d",&n);
    printf("Enter the All elmnts");
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);


    }

    arr.length =n;
    Display(arr);
    return 0;
}
