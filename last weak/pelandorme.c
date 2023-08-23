#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s",a);
    strcpy(b,a);
    int i=0,j=strlen(b)-1;
    for(int i=0; i<strlen(b); i++)
    {
        char tmp = b[i];
        b[i]= b[j];
        b[j] = tmp;
        i++;
        j--;
    }
   if(strcmp(a,b)==0)
   {
    printf("YES");
   }
   else
   {
    printf("NO");
   }
   
   
    return 0;
}