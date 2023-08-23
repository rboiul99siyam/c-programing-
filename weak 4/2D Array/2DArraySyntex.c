#include<stdio.h>
int main(){
   int A[10][10],row,col;
   printf("Enter row and colum size : \n");
   scanf("%d%d",&row,&col); 
   printf("Eneter your 2D array elements : \n");
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&A[i][j]);
    }
   }
   printf("\nYour entered value now : \n");
   for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        printf("%d\t",A[i][j]);
    }
    printf("\n");
}
    return 0;
}