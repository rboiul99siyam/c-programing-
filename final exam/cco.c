#include<stdio.h>
#include<string.h>
int main(){
   char s[1001],t[1001];
   scanf("%s%s",s,t);
   int st =strlen(s);
    int ts = strlen(t);
   printf("%d  %d",st,ts);
   printf("\n");
   printf("%s  %s",s,t);


    return 0;
}