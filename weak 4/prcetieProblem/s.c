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
   int s,flag=0;
   scanf("%d",&s);
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
       if(A[i][j]==s){
        flag=1;
        break;
       }
    }
   }
   if(flag==1){
    printf("will not take number");
   }
   else{
    printf("will take number");
   }
    return 0;
}