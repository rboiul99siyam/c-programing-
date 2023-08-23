#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);

   int arr[a];
   for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);
   } 
   int x;
   scanf("%d",&x);
   int flag = 1;
   for(int i=1;i<a-1;i++){
    for(int j=i+1;j<a;j++){
         if(arr[i]+arr[j] == x){
            flag = 0;
         }
    }
    
   }
   if(flag=1){
    printf("YES");
   }
   else{
    printf("NO");
   }
    return 0;
}