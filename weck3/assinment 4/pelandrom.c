#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char get_palendrome(){
     int len , k;
   char ch[100];
   gets(ch);
  len = strlen(ch);
  k = 0;
  len = len - 1;
  while(len>k){
    if(ch[len] != ch[k]){
        printf("NO Palendrome \n");
        exit(0);
    }
    len--;
    k++;
  }
  printf("Palendrome");

    return 0;
}
int main(){
   get_palendrome();
}