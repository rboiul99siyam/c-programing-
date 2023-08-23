//submit done
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
   int a;
   scanf("%d",&a);
   int A[a][a];
   for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        scanf("%d",&A[i][j]);
    }
   } 
 
    int sum2=0;
     int sum1=0;
   for(int i=0;i<a;i++){
    for(int j=0;j<a;j++){
        if(i==j){
           
            sum1= sum1 + A[i][j];
        }
        if(i+j==a-1){
           
            sum2 = sum2 + A[i][j];
        }

    }
   }

   int val = sum1  - sum2;
    printf("%d",abs(val));
   
    return 0;
}