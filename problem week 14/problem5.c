#include<stdio.h>
int main(){
   int a,sum = 0;
   scanf("%d",&a);

   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   } 
   
   for(int i=0;i<a;i++){
    sum = sum+arr[i];
    if(arr[i]<0){
        sum = sum + arr[i]*(-1);
    }
   }
   printf("%d",sum);

    return 0;
}