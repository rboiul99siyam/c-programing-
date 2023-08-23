#include<stdio.h>
void choto_to_boro(){
    int a;
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   } 
   int max = arr[0];
   int min = arr[0];
   for(int i=0;i<a;i++){
    
    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
    }
   }
   printf("%d ",min);
   printf("%d",max);
}
int main(){
   choto_to_boro();
    return 0;
}