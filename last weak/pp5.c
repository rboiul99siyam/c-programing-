#include<stdio.h>
#include<stdlib.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a][a];
   for(int i=0;i<a;i++)
   {
    for(int j=0;j<a;j++)
    {
        scanf("%d",&ar[i][j]);
    }
   }
   int sum = 0;
   int sum1 = 0;
   for(int i=0;i<a;i++)
   {
    for(int j=0;j<a;j++)
    {
       if(i==j){
         sum = sum+ar[i][j];
       }
       if(i+j==a-1){
        sum1 = sum1+ar[i][j];
       }
    }
   }
   int val = sum - sum1;
   printf("%d",abs(val));
    return 0;
}