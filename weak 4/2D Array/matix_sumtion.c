#include<stdio.h>
void main(){
  int A[3][3],B[3][3],C[3][3];
  printf("--------Enter your frist Array: \n");
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&A[i][j]);
    }
  }
  printf("\n-----Enter your frist matrix output:---- \n");

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",A[i][j]);
    }
    printf("\n");
  }

  // second matrix number 
  printf("--Enter your secound 2D Array:\n");
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        scanf("%d",&B[i][j]);
    }
  }
  printf("\n-----Enter yourseceound matrix output:---- \n");

  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",B[i][j]);
    }
    printf("\n");
  }
  // frist 2D and secound 2D of sumation vluae output now 


   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
       C[i][j] = A[i][j] + B[i][j];
    }
  }

   printf("\n\n sumation value output now :\n");
   for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",C[i][j]);
    }
    printf("\n");
  }
  }