#include<stdio.h>
#include<string.h>
int main(){
   char ch[1001];
   fgets(ch,1001,stdin);
   for(int  i =0;i<strlen(ch);i++)
   {
       if(ch[i]>=65 && ch[i]<=90){
        printf("%c",ch[i]+32);
       } if(ch[i]>=97 && ch[i]<=122)
       {
        printf("%c",ch[i]-32);
       }
       else if(ch[i]==','){
        printf(" ");
       }
   } 
    return 0;
}