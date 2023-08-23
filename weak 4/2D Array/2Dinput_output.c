#include<stdio.h>
int main(){
   int A[4][3];
   for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
       scanf("%d",&A[i][j]);
    }
   } 
    for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
       printf("%d\t",A[i][j]);
    }
    printf("\n");
   } 
    return 0;
}