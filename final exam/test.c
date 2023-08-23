#include<stdio.h>
int main(){
   char c[100];
   fgets(c,100,stdin);
   for(int i=0;c[i] != '\\';i++){
    printf("%c",c[i]);
   } 
    return 0;
}