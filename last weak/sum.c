#include<stdio.h>
int main(){
    //input row and col
   int row,col;
   scanf("%d%d",&row,&col);

   // array a input 
   int a[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&a[i][j]);
    }
   } 

   // array b input 

   int b[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        scanf("%d",&b[i][j]);
    }
   }

   // result c input 
   int res[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        res[i][j]=a[i][j] + b[i][j];
    }
   }

   // sumation now 
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        printf("%d",res[i][j]);
    }
    printf("\n");
   }
    return 0;
}