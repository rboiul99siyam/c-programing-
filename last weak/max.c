#include<stdio.h>
#include<limits.h>
int fun(int ar[],int s)
{
  int min = INT_MAX;
  for(int i=0;i<s;i++)
  {
    if(ar[i]<min)
    {
        min = ar[i];
    }
  }
  printf("%d ",min);
  int max = INT_MIN;
for(int i=0;i<s;i++)
  {
    if(ar[i]>max)
    {
        max = ar[i];
    }
  }
  printf("%d ",max);
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