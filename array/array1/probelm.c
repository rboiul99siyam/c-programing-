#include<stdio.h>
#include<limits.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
     scanf("%d",&ar[i]);
   } 
   int min = INT_MAX;
   int max = INT_MIN;
   for(int i = 0;i < a ; i++)
   {
    if(ar[i] < min)
    {
        min = ar[i];
    }
    if(ar[i]>max){
        max =ar[i];
    }
    int tmp = min;
    min = max;
    max = tmp;
   }
  
  
    return 0;
}