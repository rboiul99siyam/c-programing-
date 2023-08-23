#include<stdio.h>
char fun(char a[],int s)
{
   if(a[s]=='\0'){
    return 0;
   }
   int ans = fun(a,s+1);
   if(a[s]>=65 && a[s]<=90)
   {
    a[s]=a[s]+32;
   }
   int count =0;
   if(a[s]=='a'||a[s]=='e'||a[s]=='i'||a[s]=='o'||a[s]=='u')
   {
    return ans+1;
   }
   else{
    return ans;
   }
}
int main(){
   char c[100001];
   scanf("%s",c);
 int s=  fun(c,0); 
 printf("%d",s);
    return 0;
}