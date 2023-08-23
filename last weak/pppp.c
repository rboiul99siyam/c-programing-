#include<stdio.h>
int fun(int a,int b)
{
    int res = a + b;
    return res;
}
int main(){
   int a,b;
   scanf("%d%d",&a,&b);
  int sa = fun(a,b);
  printf("%d",sa);
    return 0;
}