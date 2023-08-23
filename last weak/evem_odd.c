#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 
   int cnt=0;
   int cn=0;
   for(int i=0;i<a;i++)
   {
    if(ar[i]%2==0){
       cnt++;
    }
     if(ar[i]%2==1){
        cn++;
    }
   }
   printf("%d %d",cnt,cn);
    return 0;
}