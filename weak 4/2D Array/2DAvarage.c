#include<stdio.h>
int main(){
   int A[3][3],sum=0;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&A[i][j]);
    }
   } 
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",A[i][j]);
        sum = sum+A[i][j];
    }
    printf("\n");
   }
   float avarage =sum/9;
   printf("%f",avarage);
    return 0;
}