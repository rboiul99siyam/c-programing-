#include<stdio.h>
int main(){
   int range;
   scanf("%d",&range);
   int A[range][range];
   for(int i=0;i<range;i++){
    for(int j=0;j<range;j++){
      scanf("%d",&A[i][j]);
    }
   } 
   int flag = 1;
   
   for(int i=0;i<range;i++){
    for(int j=0;j<range;j++){
     if(i==j){
      if(A[i][j] !=1){
        flag=1;
      }
      else if(A[i][j] != 0){
        flag=1;
      }
     }
    }
   } 
   if(flag==1){
    printf("NO");
   }else{
    printf("YES");
   }
    return 0;
}