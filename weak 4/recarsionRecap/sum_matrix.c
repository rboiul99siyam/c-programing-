#include<stdio.h>
int main(){
   int row,col;
   scanf("%d%d",&row,&col);
   int A[row][col],B[row][col],res[row][col];
   //frist 
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&A[i][j]);
    }
   }
   //scecond 
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       scanf("%d",& B[i][j]);
    }
   }
   //reselt stor 
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        res[i][j]= A[i][j]+B[i][j];
    }
   }
   
 // result printf
 for(int i=0;i<row;i++)
 {
    for(int j=0;j<col;j++)
    {
        printf("%d ",res[i][j]);
    }
    printf("\n");
 }
   
  
    return 0;
}
