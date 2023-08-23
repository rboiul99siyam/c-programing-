#include<stdio.h>
int fun(char ch){
  if(ch>=97 && ch<=122){
    printf("%d",ch);
  }
  return ch;
}
int main(){
   char a;
   scanf("%c",&a);
  char save =  fun(a);
    return 0;
}