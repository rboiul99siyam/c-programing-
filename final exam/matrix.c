#include<stdio.h>
int main(){
   int row , col ,flag=0;
   scanf("%d%d", &row ,&col);

   int A[row][col];
   for(int i = 0;i < row ; i++)
   {
     for( int j = 0; j < col ; j++)
     {
        scanf("%d",&A[i][j]);
     }
   } 

   for(int i = 0 ; i < row -1; i++)
   {
    for(int j = 0; j < col; j++)
    {
        printf("%d ",A[i][j]);
    }
    break;
   }
    printf("\n");
    for(int i = 0 ; i < row; i++)
   {
    for(int j = 0; j < col-1; j++)
    {
        printf("%d ",A[i][j]);
    }
    break;
   }
    return 0;
}