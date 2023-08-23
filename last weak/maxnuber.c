#include<stdio.h>
#include<limits.h>
int fun(int ar[],int a,int i)
{
    //base case 
    if(i==a)
    {
        return INT_MIN;
    }
    // body function recursion
    int max = fun(ar,a,i+1);
    if(ar[i]>max)
    {
        return ar[i];
    }
    else
    {
        return max;
    }
    
}
int main(){
   // range input now
   int a;
   scanf("%d",&a);
   //array input 
   int ar[a];
   for(int i = 0; i<a; i++)
   {
    scanf("%d",&ar[i]);
   } 

   // function argument 
   int save = fun(ar,a,0);
   printf("%d",save);
    return 0;
}