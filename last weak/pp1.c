#include<stdio.h>
void fun(int a,int s)
{
    if(a==s) return;
    printf("I LOVE RECURSION\n");
    fun(a,s+1);
}
int main(){
   int a;
   scanf("%d",&a);
   fun(a,0); 
    return 0;
}