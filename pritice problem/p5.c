#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 

   for(int i=0;i<a;i++)
   {
    printf(" element index access %d - %d\n",i,ar[i]);
   }
    for(int i=0;i<a;i++)
   {
    printf(" %d  ",ar[i]);
   }
   printf("\n");
    for(int i=a;i>=1;i--)
   {
    printf(" %d  ",i,ar[i]);
   }
    return 0;
}