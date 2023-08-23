#include<stdio.h>
#include<string.h>
int main(){
   char a[100],b[100]; 
   scanf("%s %s",a,b);
   int value = strcmp(a,b);
   if(value>0){
    printf("%s",a);
   }else if(value<0){
    printf("%s",b);
   }
   else{
    printf("%s%s",a,b);
   }
    return 0;
}