#include<stdio.h>
void fun(int a,int s)
{
    if(s==a+1)return;
    printf("%d",s);
    fun(a,s+1);
}
int main(){
   int a;
   scanf("%d",&a);
   fun(a,1); 
    return 0;
}