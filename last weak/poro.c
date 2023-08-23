#include<stdio.h>
int main(){
   // input a
   int a;
   scanf("%d",&a);
   // array input 
   int ar[a];
   //loop
   for(int i=0; i<a; i++)
   {
    scanf("%d",&ar[i]);
   } 
   //swap variable 
   int i=0,j=a-1;
   for(int i=0; i<a; i++)
   {
    for(int j=0;j<a; j++)
    {
        if(ar[i]>ar[j])
        {
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] =tmp;
        }
    }
   }
   for(int i=0 ; i<a;i++)
   {
    printf("%d ",ar[i]);
   }
    return 0;
}