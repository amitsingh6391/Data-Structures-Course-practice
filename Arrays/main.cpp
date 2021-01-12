#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int A[5];
    int B[5]={2,3,4,56,3}; // declare an array 

    A[0]=12;
    A[1]=15;
    A[2]=25;
    cout<<sizeof(A)<<endl; //check the size of array
    cout<<A[1]<<endl; //endl is for terminate the output in next line
    printf("%d\n",A[2]);  //we can print in c syntax ..

    //print the whole elemnts of array..
for(int i=0;i<5;i++){
    cout<<B[i]<<endl;
   
    printf("%d\n",B[i]);  //in c we print in this formate 


    // access element in other methods
    for(int x:B){
        cout<<x<<endl;



        
    }
}




    return 0;
}