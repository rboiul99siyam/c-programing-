#include<stdio.h>
#include<string.h>
int main(){
   char a[11],b[11];
   scanf("%s%s",a,b);
   int s =  strlen(a);
   printf("%d ",s);
   int si = strlen(b);
   printf("%d\n",si);

   printf("%s%s\n",a,b);
   int i = 0, j = strlen(a)-1;
   while(i<j){
    char tmp=a[0];
    a[0] = b[0];
    b[0] = tmp;
    i++;
    j--;
    printf("%s %s\n",a,b);
    break;
   }
   
   
   


    return 0;
}