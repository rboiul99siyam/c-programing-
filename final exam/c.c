#include<stdio.h>
#include<string.h>
int main(){
   char a[10],b[10];
   scanf("%s%s",a,b);
  int v=strcmp(a,b);
  if(v>0){
    printf("%s",a);
  }else if(v<0){
    printf("%s",b);
  }else{
    printf("%s %s", a,b);
  }
    return 0;
}