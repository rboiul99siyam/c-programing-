#include<stdio.h>
#include<string.h>
int main(){
   char str[1001];
   scanf("%s",str);
   int i=0,j=strlen(str)-1;
   int flag = 1;
   while(i<j)
   {
    if(str[i] != str[j]){
      flag=0;
      break;
    }
    i++;
    j--;
   }
   if(flag==0){
    printf("NO\n");
   }else{
    printf("YES\n");
   }
    return 0;
}