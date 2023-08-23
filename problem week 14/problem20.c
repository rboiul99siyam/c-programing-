#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ch = a/1000;
   if(ch%2==0){
    printf("EVEN");
   } 
   else{
    printf("ODD");
   }
    return 0;
}