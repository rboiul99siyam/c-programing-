#include<stdio.h>
void fun(int n)
{
    //base case 
    if(n==0)return;
    // x value stor
    int x = n%10;
    // fun 
    fun(n/10);
    //print x er value
    printf("%d ",x);
}
int main(){
   // testcase input
   int x ;
   scanf("%d",&x);
   for(int i=0;i<x;i++)
   {
    //input a
   int a;
   scanf("%d",&a);
   fun(a); 
   //if condition 
   if(a==0)
   {
    printf("0");
   }
   printf("\n");
   }
   
    return 0;
}