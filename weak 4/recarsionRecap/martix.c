#include<stdio.h>
int main(){
   int row,col;
   scanf("%d%d",&row,&col);
   int A[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        scanf("%d",&A[i][j]);
    }
   } 

   for(int i=0;i<row;i++){
    for(int j=col-1;j>=0;j--){
     printf("%d ",A[i][j]);
    }
    printf("\n");
   }
    return 0;
}

