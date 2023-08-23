#include<stdio.h>
#include<string.h>
void fun(char ch[]){
  printf("%d",strlen(ch));
}
int main(){
   char ch[100];
   scanf("%s",ch);
   fun(ch);
    return 0;
}