#include<stdio.h>
#include<string.h>
int main(){
   char str[1001];
   fgets(str,1001,stdin);
  int cp=0,sm=0,sp=0;
  for(int i=0;i<strlen(str);i++){
   if(str[i]>=65 && str[i]<=90){
    cp++;
   }
   else if(str[i]>=97 && str[i]<=122){
    sm++;
   }
   else if(str[i]==' '){
    sp++;
   }
  }
  printf("Capital - %d\n",cp);
  printf("Small - %d\n",sm);
  printf("Spaces - %d\n",sp);

  
    return 0;
}