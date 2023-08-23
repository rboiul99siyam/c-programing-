#include<stdio.h>
int main(){
   int row,col;
   printf("enter row and col size\n");
   scanf("%d%d",&row,&col);
   int A[row][col];
   printf("enter array elements\n");
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       scanf("%d",&A[i][j]);
    }
   } 

   int e;//row
   printf("array access colum now: \n");
   scanf("%d",&e);
//    for(int i=0;i<col;i++){
//     printf("%d ",A[e][i]);
//    }
for(int i=0;i<row;i++){
    printf("%d ",A[i][e]);
}
    return 0;
}