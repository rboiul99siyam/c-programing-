#include<stdio.h>
int fun(char ch[],int size){
   if(ch[size]=='\0') return 0;
   int l = fun(ch,size+1);
   return l+1;
}
int main(){
   char a[101];
   scanf("%s",&a);
 int save =  fun(a,0);
 printf("%d",save);
    return 0;
}