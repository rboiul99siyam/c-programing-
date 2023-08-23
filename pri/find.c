#include<stdio.h>
#include<limits.h>
int fun(int ar[],int a)
{
    int min = INT_MAX;
    for(int i=0;i<a;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    printf("%d",min);
}
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 
   fun(ar,a);
    return 0;
}