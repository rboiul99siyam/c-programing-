#include<stdio.h>
int fun(char s[],int a)
{
   if(s[a]=='\0') return 0;
   int l = fun(s,a+1);
   return l+1;
}
int main(){
   char s[100];
   scanf("%s",&s);
   int sa = fun(s,0);
   printf("%d",sa);

    return 0;
}