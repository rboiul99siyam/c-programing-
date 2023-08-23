#include<stdio.h>
int main(){
   int a,b,k;
   scanf("%d%d%d",&a,&b,&k);
   if(a%k==0 && b%k==0)
   {
    printf("Both\n");
   } 
   else if(a%k==0 && b%k!=0)
   {
    printf("MEMo");
   }else if(a%k!=0 && b%k==0)
   {
      printf("Momo\n");
   }else if(a%k!=0 && b%k!=0)
   {
    printf("No one");
   }
    return 0;
}