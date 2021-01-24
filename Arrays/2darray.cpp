#include <stdio.h>
#include <stdlib.h>

int  main() {

    int a[2][3]={{1,2,4},{2,5,7}};//this will be in stack;
    int *b[3];

    int **c;

    b[0]=(int*)malloc(4*sizeof(int));

     b[1]=(int*)malloc(4*sizeof(int));    //this will br create in heap;
      b[2]=(int*)malloc(4*sizeof(int));


      c=(int**) malloc(3*sizeof(int *));
        c[0]=(int*)malloc(4*sizeof(int));
          c[1]=(int*)malloc(4*sizeof(int));
        c[2]=(int*)malloc(4*sizeof(int));


        for (int i = 0; i < 2; i++)
        {
       for (int j = 0; j < 3; j++)
       {
           /* code */
           printf("%d  ",a[i][j]);
           printf("\n");
       }
       
        }
        

    return 0;
}